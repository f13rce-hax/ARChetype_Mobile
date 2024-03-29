// Fill out your copyright notice in the Description page of Project Settings.

#include "OWSAdvancedProjectile.h"
#include "OWSPlugin.h"
#include "Net/UnrealNetwork.h"
#include "Runtime/Engine/Classes/GameFramework/Volume.h"
#include "Runtime/Engine/Classes/Components/MeshComponent.h"
#include "Runtime/Engine/Classes/Particles/ParticleSystemComponent.h"
#include "Runtime/Engine/Classes/Components/AudioComponent.h"
#include "Runtime/Engine/Public/Audio.h"
#include "Runtime/Engine/Classes/Sound/SoundBase.h"

class AOWSCharacterWithAbilities;
class UAbilitySystemComponent;
class UGameplayTagsManager;
class IAbilitySystemInterface;
class UBlueprintGeneratedClass;
struct FScopedPredictionWindow;
struct FGameplayTag;
struct FGameplayEventData;
struct FGameplayCueParameters;

AOWSAdvancedProjectile::AOWSAdvancedProjectile(const class FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	// Use a sphere as a simple collision representation
	CollisionComp = ObjectInitializer.CreateOptionalDefaultSubobject<USphereComponent>(this, TEXT("SphereComp"));
	if (CollisionComp != NULL)
	{
		CollisionComp->InitSphereRadius(0.0f);
		CollisionComp->BodyInstance.SetCollisionProfileName("Projectile");			// Collision profiles are defined in DefaultEngine.ini
		CollisionComp->OnComponentBeginOverlap.AddDynamic(this, &AOWSAdvancedProjectile::OnOverlapBegin);
		CollisionComp->bTraceComplexOnMove = true;
		CollisionComp->bReceivesDecals = false;
		CollisionComp->bReturnMaterialOnMove = true;
		RootComponent = CollisionComp;
	}

	OverlapRadius = 8.f;
	PawnOverlapSphere = ObjectInitializer.CreateOptionalDefaultSubobject<USphereComponent>(this, TEXT("AssistSphereComp"));
	if (PawnOverlapSphere != NULL)
	{
		PawnOverlapSphere->InitSphereRadius(OverlapRadius);
		PawnOverlapSphere->BodyInstance.SetCollisionProfileName("ProjectileOverlap");
		PawnOverlapSphere->OnComponentBeginOverlap.AddDynamic(this, &AOWSAdvancedProjectile::OnPawnSphereOverlapBegin);
		PawnOverlapSphere->bTraceComplexOnMove = false;
		PawnOverlapSphere->bReceivesDecals = false;
		PawnOverlapSphere->bReturnMaterialOnMove = true;
		PawnOverlapSphere->SetupAttachment(RootComponent);
		PawnOverlapSphere->SetShouldUpdatePhysicsVolume(false);
	}

	// Use a ProjectileMovementComponent to govern this projectile's movement
	ProjectileMovement = ObjectInitializer.CreateDefaultSubobject<UProjectileMovementComponent>(this, TEXT("ProjectileComp"));
	ProjectileMovement->UpdatedComponent = CollisionComp;
	ProjectileMovement->InitialSpeed = 1500.f;
	ProjectileMovement->MaxSpeed = 1500.f;
	ProjectileMovement->bRotationFollowsVelocity = true;
	ProjectileMovement->bShouldBounce = false;
	ProjectileMovement->OnProjectileStop.AddDynamic(this, &AOWSAdvancedProjectile::OnStop);
	//ProjectileMovement->Collsion

	SetReplicates(true);
	bNetTemporary = true;

	bReplicateMovement = false;
	bFakeClientProjectile = false;
	bMoveFakeToReplicatedPos = true;
	
	MyFakeProjectile = NULL;
	MasterProjectile = NULL;
	bHasSpawnedFully = false;

	NetPriority = 2.f;
	MinNetUpdateFrequency = 100.0f;
}

void AOWSAdvancedProjectile::PreInitializeComponents()
{
	PawnOverlapSphere->OnComponentBeginOverlap.RemoveDynamic(this, &AOWSAdvancedProjectile::OnOverlapBegin);
	PawnOverlapSphere->OnComponentBeginOverlap.RemoveDynamic(this, &AOWSAdvancedProjectile::OnPawnSphereOverlapBegin); // delegate code asserts on duplicates...
	PawnOverlapSphere->OnComponentBeginOverlap.AddDynamic(this, &AOWSAdvancedProjectile::OnPawnSphereOverlapBegin);

	Super::PreInitializeComponents();

	if (Instigator != NULL)
	{
		InstigatorController = Instigator->Controller;
	}

	if (PawnOverlapSphere != NULL)
	{
		if (OverlapRadius == 0.0f)
		{
			PawnOverlapSphere->DestroyComponent();
			PawnOverlapSphere = NULL;
		}
		else
		{
			PawnOverlapSphere->SetSphereRadius(OverlapRadius);
		}
	}

	TArray<UMeshComponent*> MeshComponents;
	GetComponents<UMeshComponent>(MeshComponents);
	for (int32 i = 0; i < MeshComponents.Num(); i++)
	{
		//UE_LOG(UT, Warning, TEXT("%s found mesh %s receive decals %d cast shadow %d"), *GetName(), *MeshComponents[i]->GetName(), MeshComponents[i]->bReceivesDecals, MeshComponents[i]->CastShadow);
		MeshComponents[i]->bUseAsOccluder = false;
		MeshComponents[i]->SetCastShadow(false);
		/*if (bDoVisualOffset && !OffsetVisualComponent)
		{
			OffsetVisualComponent = MeshComponents[i];
			FinalVisualOffset = OffsetVisualComponent->RelativeLocation;
			OffsetVisualComponent->RelativeLocation = InitialVisualOffset;
		}*/
	}

	OnRep_Instigator();
}

void AOWSAdvancedProjectile::OnRep_Instigator()
{
	if (Instigator != NULL)
	{
		//InstigatorTeamNum = GetTeamNum(); // this checks Instigator first

		InstigatorController = Instigator->Controller;
		if (Cast<AOWSAdvancedProjectile>(Instigator))
		{
			((AOWSCharacterWithAbilities*)(Instigator))->LastFiredProjectile = this;
		}
	}
}

void AOWSAdvancedProjectile::BeginPlay()
{
	if (IsPendingKillPending())
	{
		// engine bug that we need to do this
		return;
	}
	Super::BeginPlay();

	bHasSpawnedFully = true;
	if (Role == ROLE_Authority)
	{
		/*
		UNetDriver* NetDriver = GetNetDriver();
		if (NetDriver != NULL && NetDriver->IsServer())
		{
			InitialReplicationTick.Target = this;
			InitialReplicationTick.RegisterTickFunction(GetLevel());
		}
		*/
		/*AOWSCharacterWithAbilities* MyCharacter = Cast<AOWSCharacterWithAbilities>(Instigator);
		if (MyCharacter)
		{
			ProjectilePredictionKey = FPredictionKey::CreateNewPredictionKey(MyCharacter->GetAbilitySystemComponent());
		}*/
	}
	else
	{
		AOWSPlayerController* MyPlayer = Cast<AOWSPlayerController>(InstigatorController ? InstigatorController : GEngine->GetFirstLocalPlayerController(GetWorld()));
		if (MyPlayer)
		{
			UE_LOG(OWS, Verbose, TEXT("Projectile Client BeginPlay: %s"), *GetName());

			// Move projectile to match where it is on server now (to make up for replication time)
			float CatchupTickDelta = MyPlayer->GetPredictionTime();
			if (CatchupTickDelta > 0.f)
			{
				CatchupTick(CatchupTickDelta);
			}

			// look for associated fake client projectile
			AOWSAdvancedProjectile* BestMatch = NULL;
			FVector VelDir = GetVelocity().GetSafeNormal();
			int32 BestMatchIndex = 0;
			float BestDist = 0.f;

			UE_LOG(OWS, Verbose, TEXT("Start Searching Fakes"));

			for (int32 i = 0; i < MyPlayer->FakeProjectiles.Num(); i++)
			{
				UE_LOG(OWS, Verbose, TEXT("Evaluating Fake #: %d"), i);

				AOWSAdvancedProjectile* Fake = MyPlayer->FakeProjectiles[i];
				if (!Fake || Fake->IsPendingKillPending())
				{
					UE_LOG(OWS, Verbose, TEXT("Invalid Fake or Pending Kill"));

					MyPlayer->FakeProjectiles.RemoveAt(i, 1);
					i--;
				}
				else if (Fake->GetClass() == GetClass())
				{
					UE_LOG(OWS, Verbose, TEXT("Our Fake Class Matches"));

					// must share direction unless falling! 
					if (CanMatchFake(Fake, VelDir))
					{
						if (BestMatch)
						{
							// see if new one is better
							float NewDist = (Fake->GetActorLocation() - GetActorLocation()).SizeSquared();
							if (BestDist > NewDist)
							{
								BestMatch = Fake;
								BestMatchIndex = i;
								BestDist = NewDist;

								UE_LOG(OWS, Verbose, TEXT("Projectile Client Found a better Match"));
							}
						}
						else
						{
							BestMatch = Fake;
							BestMatchIndex = i;
							BestDist = (BestMatch->GetActorLocation() - GetActorLocation()).SizeSquared();

							UE_LOG(OWS, Verbose, TEXT("Projectile Client Found a Match"));
						}
					}
				}
			}
			if (BestMatch)
			{
				UE_LOG(OWS, Verbose, TEXT("Projectile Client calling BeginFakeProjectileSynch"));

				MyPlayer->FakeProjectiles.RemoveAt(BestMatchIndex, 1);
				BeginFakeProjectileSynch(BestMatch);
			}
			else
			{
				UE_LOG(OWS, Verbose, TEXT("Projectile Client WE DID NOT FIND A FAKE!"));
			}
		}
	}
}

bool AOWSAdvancedProjectile::CanMatchFake(AOWSAdvancedProjectile* InFakeProjectile, const FVector& VelDir) const
{
	return (ProjectileMovement->ProjectileGravityScale > 0.f) || ((InFakeProjectile->GetVelocity().GetSafeNormal() | VelDir) > 0.95f);
}

void AOWSAdvancedProjectile::CatchupTick(float CatchupTickDelta)
{
	if (ProjectileMovement)
	{
		UE_LOG(OWS, Verbose, TEXT("CatchupTick: %f"), CatchupTickDelta);

		ProjectileMovement->TickComponent(CatchupTickDelta, LEVELTICK_All, NULL);
	}
}

void AOWSAdvancedProjectile::InitFakeProjectile(AOWSPlayerController* OwningPlayer)
{
	bFakeClientProjectile = true;
	if (OwningPlayer)
	{
		//float PredictionPing = OwningPlayer->GetProjectileSleepTime() * 1000.f;

		//ProjectileMovement->InitialSpeed = ProjectileMovement->InitialSpeed / SlowdownFactor;
		//ProjectileMovement->MaxSpeed = ProjectileMovement->MaxSpeed / SlowdownFactor;
		//ProjectileMovement->ProjectileGravityScale = ProjectileMovement->ProjectileGravityScale / SlowdownFactor;

		UE_LOG(OWS, Verbose, TEXT("InitFakeProjectile add to Fakes List"));

		OwningPlayer->FakeProjectiles.Add(this);
	}
}

void AOWSAdvancedProjectile::BeginFakeProjectileSynch(AOWSAdvancedProjectile* InFakeProjectile)
{
	if (InFakeProjectile->IsPendingKillPending() || InFakeProjectile->bExploded)
	{
		// Fake projectile is no longer valid to sync to
		return;
	}

	MyFakeProjectile = InFakeProjectile;
	MyFakeProjectile->MasterProjectile = this;

	float Error = (GetActorLocation() - MyFakeProjectile->GetActorLocation()).Size();

	UE_LOG(OWS, Verbose, TEXT("BeginFakeProjectileSynch Error: %f"), Error);

	if (((GetActorLocation() - MyFakeProjectile->GetActorLocation()) | MyFakeProjectile->GetVelocity()) > 0.f)
	{
		Error *= -1.f;

		UE_LOG(OWS, Verbose, TEXT("Error *= -1.f;"));
	}

	UE_LOG(OWS, Verbose, TEXT("%s CORRECTION %f in msec %f"), *GetName(), Error, 1000.f * Error / GetVelocity().Size());

	if (bMoveFakeToReplicatedPos)
	{
		//float DiffLength = FVector::DistSquared(MyFakeProjectile->GetActorLocation(), GetActorLocation());

		//UE_LOG(LogTemp, Error, TEXT("Diff Length: %f"), DiffLength);

		MyFakeProjectile->ReplicatedMovement.Location = GetActorLocation();
		MyFakeProjectile->ReplicatedMovement.Rotation = GetActorRotation();
		//MyFakeProjectile->ProjectileMovement->MaxSpeed = ProjectileMovement->MaxSpeed;
		//MyFakeProjectile->ProjectileMovement->Velocity = ProjectileMovement->Velocity;
		//MyFakeProjectile->ProjectileMovement->ProjectileGravityScale = ProjectileMovement->ProjectileGravityScale;
		MyFakeProjectile->PostNetReceiveLocationAndRotation();

		UE_LOG(OWS, Verbose, TEXT("Move Fake To Replicated Pos"));
	}
	else
	{
		UE_LOG(OWS, Verbose, TEXT("Move Replicated To Fake Pos"));

		ReplicatedMovement.Location = MyFakeProjectile->GetActorLocation();
		ReplicatedMovement.Rotation = MyFakeProjectile->GetActorRotation();
		PostNetReceiveLocationAndRotation();
	}

	AOWSPlayerController* MyPlayer = Cast<AOWSPlayerController>(InstigatorController ? InstigatorController : GEngine->GetFirstLocalPlayerController(GetWorld()));
	if (MyPlayer && (GetLifeSpan() != 0.f))
	{
		// remove forward prediction from lifespan
		float CatchupTickDelta = MyPlayer->GetPredictionTime();
		SetLifeSpan(FMath::Max(0.001f, GetLifeSpan() - CatchupTickDelta));
	}
	MyFakeProjectile->SetLifeSpan(GetLifeSpan());
	if (bNetTemporary)
	{
		UE_LOG(OWS, Verbose, TEXT("bNetTemporary Destroy"));

		// @TODO FIXMESTEVE - will have issues if there are replicated properties that haven't been received yet
		MyFakeProjectile = NULL;
		SetActorHiddenInGame(true);

		//Dart: This causes a duplicate projectile to be spawned as there must be unreplicated properties coming back.
		//Destroy();



		//UE_LOG(UT, Warning, TEXT("%s DESTROY pending kill %d"), *GetName(), IsPendingKillPending());
	}
	else
	{
		// @TODO FIXMESTEVE Can I move components instead of having two actors?
		// @TODO FIXMESTEVE if not, should interp fake projectile to my location instead of teleporting?

		UE_LOG(OWS, Verbose, TEXT("Set Projectile Hidden"));

		SetActorHiddenInGame(true);
		TArray<USceneComponent*> Components;
		GetComponents<USceneComponent>(Components);
		for (int32 i = 0; i < Components.Num(); i++)
		{
			Components[i]->SetVisibility(false);
		}
	}
}

void AOWSAdvancedProjectile::PreReplication(IRepChangedPropertyTracker & ChangedPropertyTracker)
{
	if ((bForceNextRepMovement || bReplicateUTMovement) && (Role == ROLE_Authority))
	{
		GatherCurrentMovement();
		bForceNextRepMovement = false;
	}
}

void AOWSAdvancedProjectile::GatherCurrentMovement()
{
	/* @TODO FIXMESTEVE support projectiles uing rigid body physics
	UPrimitiveComponent* RootPrimComp = Cast<UPrimitiveComponent>(GetRootComponent());
	if (RootPrimComp && RootPrimComp->IsSimulatingPhysics())
	{
		FRigidBodyState RBState;
		RootPrimComp->GetRigidBodyState(RBState);
		ReplicatedMovement.FillFrom(RBState);
	}
	else
	*/
	if (RootComponent != NULL)
	{
		// If we are attached, don't replicate absolute position
		if (RootComponent->GetAttachParent() != NULL)
		{
			Super::GatherCurrentMovement();
		}
		else
		{
			UTProjReplicatedMovement.Location = RootComponent->GetComponentLocation();
			UTProjReplicatedMovement.Rotation = RootComponent->GetComponentRotation();
			UTProjReplicatedMovement.LinearVelocity = GetVelocity();
		}
	}
}

void AOWSAdvancedProjectile::OnRep_UTProjReplicatedMovement()
{
	if (Role == ROLE_SimulatedProxy)
	{
		//ReplicatedAccel = UTReplicatedMovement.Acceleration;
		ReplicatedMovement.Location = UTProjReplicatedMovement.Location;
		ReplicatedMovement.Rotation = UTProjReplicatedMovement.Rotation;
		ReplicatedMovement.LinearVelocity = UTProjReplicatedMovement.LinearVelocity;
		ReplicatedMovement.AngularVelocity = FVector(0.f);
		ReplicatedMovement.bSimulatedPhysicSleep = false;
		ReplicatedMovement.bRepPhysics = false;

		OnRep_ReplicatedMovement();
	}
}

void AOWSAdvancedProjectile::PostNetReceiveLocationAndRotation()
{
	UE_LOG(OWS, Verbose, TEXT("PostNetReceiveLocationAndRotation Start"));

	if (!bMoveFakeToReplicatedPos && MyFakeProjectile)
	{
		// use fake proj position
		UE_LOG(OWS, Verbose, TEXT("Use Fake Proj Position"));
		
		ReplicatedMovement.Location = MyFakeProjectile->GetActorLocation();
		ReplicatedMovement.Rotation = MyFakeProjectile->GetActorRotation();
	}
	Super::PostNetReceiveLocationAndRotation();
	if (!bMoveFakeToReplicatedPos && MyFakeProjectile)
	{
		UE_LOG(OWS, Verbose, TEXT("PostNetReceiveLocationAndRotation Return Early"));

		return;
	}

	//forward predict to get to position on server now
	//if (!bFakeClientProjectile)
	//{
		AOWSPlayerController* MyPlayer = Cast<AOWSPlayerController>(InstigatorController ? InstigatorController : GEngine->GetFirstLocalPlayerController(GetWorld()));
		if (MyPlayer)
		{
			UE_LOG(OWS, Verbose, TEXT("Forward predict to get to position on server now: %s"), *GetNameSafe(this));

			float CatchupTickDelta = MyPlayer->GetPredictionTime();
			if ((CatchupTickDelta > 0.f) && ProjectileMovement)
			{
				UE_LOG(OWS, Verbose, TEXT("PostNetReceiveLocationAndRotation TickComponent"));

				ProjectileMovement->TickComponent(CatchupTickDelta, LEVELTICK_All, NULL);
			}
		}
	//}

	if (MyFakeProjectile)
	{
		UE_LOG(OWS, Verbose, TEXT("PostNetReceiveLocationAndRotation: MyFakeProjectile"));

		MyFakeProjectile->ReplicatedMovement.Location = GetActorLocation();
		MyFakeProjectile->ReplicatedMovement.Rotation = GetActorRotation();
		MyFakeProjectile->PostNetReceiveLocationAndRotation();
	}
	else if (Role != ROLE_Authority)
	{
		UE_LOG(OWS, Verbose, TEXT("PostNetReceiveLocationAndRotation: Tick Particle Systems"));

		// tick particle systems for e.g. SpawnPerUnit trails
		if (!GetTearOff() && !bExploded) // if torn off ShutDown() will do this
		{
			TArray<USceneComponent*> Components;
			GetComponents<USceneComponent>(Components);
			for (int32 i = 0; i < Components.Num(); i++)
			{
				UParticleSystemComponent* PSC = Cast<UParticleSystemComponent>(Components[i]);
				if (PSC != NULL)
				{
					PSC->TickComponent(0.0f, LEVELTICK_All, NULL);
				}
			}
		}
	}
}

void AOWSAdvancedProjectile::PostNetReceiveVelocity(const FVector& NewVelocity)
{
	ProjectileMovement->Velocity = NewVelocity;
	if (MyFakeProjectile)
	{
		UE_LOG(OWS, Verbose, TEXT("PostNetReceiveVelocity is MyFakeProjectile"));

		MyFakeProjectile->ProjectileMovement->Velocity = NewVelocity;
	}
}


void AOWSAdvancedProjectile::Destroyed()
{
	if (Role == ROLE_Authority)
	{
		UE_LOG(OWS, Verbose, TEXT("Server Destroyed: %s"), *GetName());
	}
	else
	{
		UE_LOG(OWS, Verbose, TEXT("Client Destroyed: %s"), *GetName());
	}

	if (MyFakeProjectile)
	{
		MyFakeProjectile->Destroy();
	}
	GetWorldTimerManager().ClearAllTimersForObject(this);
	Super::Destroyed();
}

void AOWSAdvancedProjectile::ShutDown()
{
	UE_LOG(OWS, Verbose, TEXT("ShutDown"));

	if (MyFakeProjectile)
	{
		MyFakeProjectile->ShutDown();
	}
	if (!IsPendingKillPending())
	{
		SetActorEnableCollision(false);
		ProjectileMovement->SetActive(false);
		// hide components that aren't particle systems; deactivate particle systems so they die off naturally; stop ambient sounds
		bool bFoundParticles = false;
		TArray<USceneComponent*> Components;
		GetComponents<USceneComponent>(Components);
		for (int32 i = 0; i < Components.Num(); i++)
		{
			UParticleSystemComponent* PSC = Cast<UParticleSystemComponent>(Components[i]);
			if (PSC != NULL)
			{
				// tick the particles one last time for e.g. SpawnPerUnit effects (particularly noticeable improvement for fast moving projectiles)
				PSC->TickComponent(0.0f, LEVELTICK_All, NULL);
				PSC->DeactivateSystem();
				PSC->bAutoDestroy = true;
				bFoundParticles = true;
			}
			else
			{
				UAudioComponent* Audio = Cast<UAudioComponent>(Components[i]);
				if (Audio != NULL)
				{
					// only stop looping (ambient) sounds - note that the just played explosion sound may be encountered here
					if (Audio->Sound != NULL && Audio->Sound->GetDuration() >= INDEFINITELY_LOOPING_DURATION)
					{
						Audio->Stop();
					}
				}
				else
				{
					Components[i]->SetHiddenInGame(true);
					Components[i]->SetVisibility(false);
				}
			}
		}
		// if some particles remain, defer destruction a bit to give them time to die on their own
		SetLifeSpan((bFoundParticles && GetNetMode() != NM_DedicatedServer) ? 2.0f : 0.2f);

		OnShutdown();
	}

	bExploded = true;
}


void AOWSAdvancedProjectile::TornOff()
{
	UE_LOG(OWS, Verbose, TEXT("TornOff"));

	if (bExploded)
	{
		ShutDown(); // make sure it took effect; LifeSpan in particular won't unless we're authority
	}
	else
	{
		FHitResult TornOffHitResult;
		TornOffHitResult.Location = GetActorLocation();
		TornOffHitResult.Normal = FVector(1.0f, 0.0f, 0.0f);
		Explode(TornOffHitResult);
		ShutDown();
	}
}

void AOWSAdvancedProjectile::OnOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	//Don't overlap with self
	if (OtherActor == this)
		return;

	//Don't overlap if you are the simulated proxy replicated one time from server to client for synch-up
	if (this->Role == ROLE_SimulatedProxy)
		return;

	//Don't overlap if OtherActor is the simulated proxy replicated one time from server to client for synch-up
	if (OtherActor->IsA(AOWSAdvancedProjectile::StaticClass()) && OtherActor->Role == ROLE_SimulatedProxy)
		return;

	//Don't hit the instigator of this projectile
	if (OtherActor == Instigator)
		return;

	if (!bInOverlap)
	{
		TGuardValue<bool> OverlapGuard(bInOverlap, true);
		/*
		if (Role == ROLE_Authority)
		{
			UE_LOG(OWS, Verbose, TEXT("Server: %s::OnOverlapBegin OtherActor:%s bFromSweep:%d"), *GetName(), OtherActor ? *OtherActor->GetName() : TEXT("NULL"), int32(bFromSweep));
		}
		else
		{
			UE_LOG(OWS, Verbose, TEXT("Client: %s::OnOverlapBegin OtherActor:%s bFromSweep:%d"), *GetName(), OtherActor ? *OtherActor->GetName() : TEXT("NULL"), int32(bFromSweep));
		}
		*/
		FHitResult Hit;

		if (bFromSweep)
		{
			Hit = SweepResult;
		}
		else if (CollisionComp != NULL)
		{
			USphereComponent* TestComp = (PawnOverlapSphere != NULL && PawnOverlapSphere->GetUnscaledSphereRadius() > CollisionComp->GetUnscaledSphereRadius()) ? PawnOverlapSphere : CollisionComp;
			OtherComp->SweepComponent(Hit, GetActorLocation() - GetVelocity() * 10.f, GetActorLocation() + GetVelocity(), FQuat::Identity, TestComp->GetCollisionShape(), TestComp->bTraceComplexOnMove);
		}
		else
		{
			FCollisionQueryParams LineTraceCollisionQueryParams = FCollisionQueryParams(GetClass()->GetFName(), false, this);
			LineTraceCollisionQueryParams.bReturnPhysicalMaterial = true;
			OtherComp->LineTraceComponent(Hit, GetActorLocation() - GetVelocity() * 10.f, GetActorLocation() + GetVelocity(), LineTraceCollisionQueryParams);
		}

		ProcessHit(OtherActor, OtherComp, Hit);
	}
}

void AOWSAdvancedProjectile::OnPawnSphereOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (OtherActor != nullptr)
	{
		FVector OtherLocation;
		if (bFromSweep)
		{
			OtherLocation = SweepResult.Location;
		}
		else
		{
			OtherLocation = OtherActor->GetActorLocation();
		}

		FCollisionQueryParams Params(FName(TEXT("PawnSphereOverlapTrace")), true, this);
		Params.AddIgnoredActor(OtherActor);

		// since PawnOverlapSphere doesn't hit blocking objects, it is possible it is touching a target through a wall
		// make sure that the hit is valid before proceeding
		if (!GetWorld()->LineTraceTestByChannel(OtherLocation, GetActorLocation(), COLLISION_TRACE_WEAPON, Params))
		{
			OnOverlapBegin(CollisionComp, OtherActor, OtherComp, OtherBodyIndex, bFromSweep, SweepResult);
		}
	}
}

void AOWSAdvancedProjectile::OnStop(const FHitResult& Hit)
{
	ProcessHit(Hit.Actor.Get(), Hit.Component.Get(), Hit);
}

bool AOWSAdvancedProjectile::ShouldIgnoreHit_Implementation(AActor* OtherActor, UPrimitiveComponent* OtherComp)
{
	// don't blow up on non-blocking volumes
	// special case not blowing up on teleporters on overlap so teleporters have the option to teleport the projectile
	// don't blow up on weapon redirectors that teleport weapons fire
	// don't blow up from our side on weapon shields; let the shield do that so it can change damage/kill credit
	// ignore client-side actors if will bounce
	// special case not blowing up on Repulsor bubble so that we can reflect / absorb projectiles

	return Cast<AVolume>(OtherActor) != NULL
		|| Cast<AOWSAdvancedProjectile>(OtherActor) != NULL
		|| ((Role != ROLE_Authority) && OtherActor && OtherActor->GetTearOff());
}

void AOWSAdvancedProjectile::ProcessHit_Implementation(AActor* OtherActor, UPrimitiveComponent* OtherComp, const FHitResult& Hit)
{
	UE_LOG(OWS, Verbose, TEXT("%s::ProcessHit fake %d has master %d has fake %d OtherActor:%s"), *GetName(), bFakeClientProjectile, (MasterProjectile != NULL), (MyFakeProjectile != NULL), OtherActor ? *OtherActor->GetName() : TEXT("NULL"));

	//return;
	
	// note: on clients we assume spawn time impact is invalid since in such a case the projectile would generally have not survived to be replicated at all
	if (OtherActor != this && (OtherActor != Instigator || Instigator == NULL /*|| bCanHitInstigator*/) && OtherComp != NULL && !bExploded && (Role == ROLE_Authority || bHasSpawnedFully))
	{
		//DamageImpactedActor(OtherActor, OtherComp, HitLocation, HitNormal);

		if (ShouldIgnoreHit(OtherActor, OtherComp))
		{
			if ((Role != ROLE_Authority) && OtherActor && OtherActor->GetTearOff())
			{
				DamageImpactedActor(OtherActor, OtherComp, Hit);
			}
		}
		else
		{
			if (MyFakeProjectile && !MyFakeProjectile->IsPendingKillPending())
			{
				MyFakeProjectile->ProcessHit_Implementation(OtherActor, OtherComp, Hit);
				Destroy();
				return;
			}
			if (OtherActor != NULL)
			{
				DamageImpactedActor(OtherActor, OtherComp, Hit);
			}

			ImpactedActor = OtherActor;
			Explode(Hit, OtherComp);
			ImpactedActor = NULL;

			if (Cast<AOWSAdvancedProjectile>(OtherActor) != NULL)
			{
				// since we'll probably be destroyed or lose collision here, make sure we trigger the other projectile so shootable projectiles colliding is consistent (both explode)
				UPrimitiveComponent* MyCollider = CollisionComp;
				if (CollisionComp == NULL || CollisionComp->GetCollisionObjectType() != COLLISION_PROJECTILE_SHOOTABLE)
				{
					// our primary collision component isn't the shootable one; try to find one that is
					TArray<UPrimitiveComponent*> Components;
					GetComponents<UPrimitiveComponent>(Components);
					for (int32 i = 0; i < Components.Num(); i++)
					{
						if (Components[i]->GetCollisionObjectType() == COLLISION_PROJECTILE_SHOOTABLE)
						{
							MyCollider = Components[i];
							break;
						}
					}
				}

				((AOWSAdvancedProjectile*)OtherActor)->ProcessHit(this, MyCollider, Hit);
			}
		}
	}	
}

void AOWSAdvancedProjectile::Explode_Implementation(const FHitResult& Hit, UPrimitiveComponent* HitComp)
{
	if (Role == ROLE_Authority)
	{
		UE_LOG(OWS, Verbose, TEXT("Server: Explode!"));
	}
	else
	{
		UE_LOG(OWS, Verbose, TEXT("Client: Explode!"));
	}
	bExploded = true;

	if (FMath::IsNearlyZero(ExplosionDamageRadius) || !AoEDamageEffectOnHit.IsValid())
	{
		Destroy();
		return;
	}

	//Play gameplay cue for explosion if there is one
	if (ExplosionGameplayCueTag.IsValid())
	{
		AOWSCharacterWithAbilities* MyCharacter = Cast<AOWSCharacterWithAbilities>(Instigator);
		if (MyCharacter)
		{
			FGameplayCueParameters CueParams;
			CueParams.Location = Hit.Location;
			CueParams.Normal = Hit.Normal;
			CueParams.PhysicalMaterial = Hit.PhysMaterial;
			CueParams.SourceObject = this;
			CueParams.Instigator = MyCharacter;
			CueParams.EffectCauser = MyCharacter;
			MyCharacter->GetAbilitySystemComponent()->ExecuteGameplayCue(ExplosionGameplayCueTag, CueParams);
		}
	}

	TArray<FOverlapResult> OverlapResults;
	FCollisionObjectQueryParams CollisionObjectQueryParams;
	FComponentQueryParams QueryParams;

	CollisionObjectQueryParams.AddObjectTypesToQuery(ECollisionChannel::ECC_Pawn);

	QueryParams.AddIgnoredActor(Instigator);

	GetWorld()->OverlapMultiByObjectType(OverlapResults, Hit.Location, FQuat(0,0,0,0), CollisionObjectQueryParams, FCollisionShape::MakeSphere(ExplosionDamageRadius), QueryParams);

	for (auto OverlapResult : OverlapResults)
	{
		if (OverlapResult.Actor->IsA(AOWSCharacterWithAbilities::StaticClass()))
		{
			AOWSCharacterWithAbilities* CharacterWhoWasHit = CastChecked<AOWSCharacterWithAbilities>(OverlapResult.Actor);
			if (CharacterWhoWasHit && !CharacterWhoWasHit->IsPendingKill())
			{
				CharacterWhoWasHit->HandleProjectileDamage(this, true);
			}
		}
	}

	Destroy();
}

void AOWSAdvancedProjectile::DamageImpactedActor_Implementation(AActor* OtherActor, UPrimitiveComponent* OtherComp, const FHitResult& Hit)
{	
	if (bFakeClientProjectile)
	{
		return;
	}	

	if (Role == ROLE_Authority)
	{
		UE_LOG(OWS, Verbose, TEXT("Server: DamageImpactedActor_Implementation!"));
	}
	else
	{
		UE_LOG(OWS, Verbose, TEXT("Client: DamageImpactedActor_Implementation!"));
	}

	if (OtherActor->IsA(AOWSCharacterWithAbilities::StaticClass()))
	{
		AOWSCharacterWithAbilities* CharacterWhoWasHit = CastChecked<AOWSCharacterWithAbilities>(OtherActor);
		if (CharacterWhoWasHit && !CharacterWhoWasHit->IsPendingKill())
		{
			CharacterWhoWasHit->HandleProjectileDamage(this, false);
		}
	}

	return;



	//We use the InstigatorCharacter because if we use the Hit Character we won't have an owning connecto RPC up the prediction key.
	AOWSCharacterWithAbilities* InstigatorCharacter = CastChecked<AOWSCharacterWithAbilities>(Instigator);

	if (InstigatorCharacter && !InstigatorCharacter->IsPendingKill())
	{
//		InstigatorCharacter->HandleProjectileEffectApplicationPrediction(this, OtherActor);

		/*IAbilitySystemInterface* AbilitySystemInterface = Cast<IAbilitySystemInterface>(CharacterWhoWasHit);
		if (AbilitySystemInterface != nullptr)
		{
			UAbilitySystemComponent* AbilitySystemComponent = AbilitySystemInterface->GetAbilitySystemComponent();
			if (AbilitySystemComponent != nullptr)
			{				
				FGameplayEventData Payload;

				Payload.Instigator = Instigator;
				Payload.Target = CharacterWhoWasHit;

				FName AdvancedProjectileDirectDamageEventTagName = FName(TEXT("GameplayEvent.AdvancedProjectile.DirectDamageEvent"));
				FGameplayTag AdvancedProjectileDirectDamageEventTag = UGameplayTagsManager::Get().RequestGameplayTag(AdvancedProjectileDirectDamageEventTagName);

				TWeakObjectPtr<UAbilitySystemComponent> ASC = AbilitySystemComponent;
				//ensureMsgf(ASC.IsValid(), TEXT("UAbilitySystemBlueprintLibrary::SendGameplayEventToActor: Invalid ability system component retrieved from Actor %s. EventTag was %s"), *Actor->GetName(), *EventTag.ToString());
				FScopedPredictionWindow NewScopedWindow(AbilitySystemComponent, true);
				AbilitySystemComponent->HandleGameplayEvent(AdvancedProjectileDirectDamageEventTag, &Payload);

				UE_LOG(OWS, Error, TEXT("Send GameplayEvent.AdvancedProjectile.DirectDamageEvent"));
			}
		}*/
	}
	else //Hit something other than an AOWSCharacterWithAbilities
	{

	}


	/*
	AController* ResolvedInstigator = InstigatorController;
	TSubclassOf<UDamageType> ResolvedDamageType = MyDamageType;
	bool bSameTeamDamage = false;
	if (FFInstigatorController != NULL && InstigatorController != NULL)
	{
		AOWSGameState* GS = GetWorld()->GetGameState<AUTGameState>();
		if (GS != NULL && GS->OnSameTeam(OtherActor, InstigatorController))
		{
			bSameTeamDamage = true;
			ResolvedInstigator = FFInstigatorController;
			if (FFDamageType != NULL)
			{
				ResolvedDamageType = FFDamageType;
			}
		}
	}
	if ((Role == ROLE_Authority) && (HitsStatsName != NAME_None) && !bSameTeamDamage)
	{
		AOWSPlayerState* PS = InstigatorController ? Cast<AUTPlayerState>(InstigatorController->PlayerState) : NULL;
		if (PS)
		{
			PS->ModifyStatsValue(HitsStatsName, StatsHitCredit);
		}
	}

	// treat as point damage if projectile has no radius
	if (DamageParams.OuterRadius > 0.0f)
	{
		FUTRadialDamageEvent Event;
		Event.BaseMomentumMag = Momentum;
		Event.Params = GetDamageParams(OtherActor, HitLocation, Event.BaseMomentumMag);
		Event.Params.MinimumDamage = Event.Params.BaseDamage; // force full damage for direct hit
		Event.DamageTypeClass = ResolvedDamageType;
		Event.Origin = HitLocation;
		new(Event.ComponentHits) FHitResult(OtherActor, OtherComp, HitLocation, HitNormal);
		Event.ComponentHits[0].TraceStart = HitLocation - GetVelocity();
		Event.ComponentHits[0].TraceEnd = HitLocation + GetVelocity();
		Event.ShotDirection = GetVelocity().GetSafeNormal();
		Event.BaseMomentumMag = ((Momentum == 0.f) && Cast<AUTCharacter>(OtherActor) && ((AUTCharacter*)(OtherActor))->IsDead()) ? 20000.f : Momentum;
		OtherActor->TakeDamage(Event.Params.BaseDamage, Event, ResolvedInstigator, this);
	}
	else
	{
		FUTPointDamageEvent Event;
		float AdjustedMomentum = Momentum;
		Event.Damage = GetDamageParams(OtherActor, HitLocation, AdjustedMomentum).BaseDamage;
		Event.DamageTypeClass = ResolvedDamageType;
		Event.HitInfo = FHitResult(OtherActor, OtherComp, HitLocation, HitNormal);
		Event.ShotDirection = GetVelocity().GetSafeNormal();
		AdjustedMomentum = ((AdjustedMomentum == 0.f) && Cast<AUTCharacter>(OtherActor) && ((AUTCharacter*)(OtherActor))->IsDead()) ? 20000.f : Momentum;
		Event.Momentum = Event.ShotDirection * AdjustedMomentum;
		OtherActor->TakeDamage(Event.Damage, Event, ResolvedInstigator, this);
	}*/
}

// Called every frame
void AOWSAdvancedProjectile::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	//Catchup


}

void AOWSAdvancedProjectile::SetDamageEffectOnHit(FGameplayEffectSpecHandle DamageEffect)
{
	DamageEffectOnHit = DamageEffect;
}

void AOWSAdvancedProjectile::SetAoEDamageEffectOnExplosion(FGameplayEffectSpecHandle DamageEffect)
{
	AoEDamageEffectOnHit = DamageEffect;
}




/*
void AOWSAdvancedProjectile::SetPredictionKey(FPredictionKey PredictionKey)
{
	UE_LOG(OWS, Error, TEXT("Server: SetPredictionKey"));
}*/

void AOWSAdvancedProjectile::GetLifetimeReplicatedProps(TArray<class FLifetimeProperty>& OutLifetimeProps) const
{
	UBlueprintGeneratedClass* BPClass = Cast<UBlueprintGeneratedClass>(GetClass());
	if (BPClass != NULL)
	{
		BPClass->GetLifetimeBlueprintReplicationList(OutLifetimeProps);
	}

	DOREPLIFETIME(AActor, bHidden);
	//DOREPLIFETIME(AActor, bTearOff);
	DOREPLIFETIME(AActor, bCanBeDamaged);

	// POLGE TODO: Fix the issues with this being private
	//DOREPLIFETIME(AActor, AttachmentReplication);

	DOREPLIFETIME(AActor, Instigator);
	DOREPLIFETIME_CONDITION(AOWSAdvancedProjectile, UTProjReplicatedMovement, COND_SimulatedOrPhysics);
	//DOREPLIFETIME_CONDITION(AOWSAdvancedProjectile, ProjectilePredictionKey, COND_OwnerOnly);

	
	//DOREPLIFETIME(AOWSAdvancedProjectile, Slomo);
}

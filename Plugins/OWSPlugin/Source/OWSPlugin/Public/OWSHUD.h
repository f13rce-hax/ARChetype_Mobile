// Copyright 2018 Sabre Dart Studios

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "OWSCharacter.h"
#include "OWSInventoryItemStack.h"
#include "OWSInventory.h"
#include "Engine/Canvas.h"
#include "Engine/Font.h"
#include "OWSHUD.generated.h"


UENUM(BlueprintType)
enum EAnchorPoint
{
	TopLeft	UMETA(DisplayName = "Top Left"),
	TopCenter	UMETA(DisplayName = "Top Center"),
	TopRight	UMETA(DisplayName = "Top Right"),
	MiddleLeft	UMETA(DisplayName = "Middle Left"),
	MiddleCenter	UMETA(DisplayName = "Middle Center"),
	MiddleRight	UMETA(DisplayName = "Middle Right"),
	BottomLeft	UMETA(DisplayName = "Bottom Left"),
	BottomCenter	UMETA(DisplayName = "Bottom Center"),
	BottomRight	UMETA(DisplayName = "Bottom Right")
};


USTRUCT(BlueprintType)
struct FFloatingDamage
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Floating Text")
		FString DamageText;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Floating Text")
		float DamageTextLength;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Floating Text")
		float TimeLeft;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Floating Text")
		float Alpha;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Floating Text")
		FVector2D DisplayLocation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Floating Text")
		AActor* DamagedActor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Floating Text")
		FVector DamagedActorOffset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Floating Text")
		bool IsHealing;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Floating Text")
		bool IsCritical;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Floating Text")
		bool MarkedForDeletion;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Floating Text")
		bool ShowDropShadow;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Floating Text")
		bool ShowOutline;
};


/**
 * 
 */
UCLASS()
class OWSPLUGIN_API AOWSHUD : public AHUD
{
	GENERATED_BODY()

public:
	AOWSHUD();
		
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Floating Damage")
		UFont* FloatingDamageFont;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Floating Damage")
		FVector2D FloatingDamageSpeed;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Floating Damage")
		FLinearColor FloatingDamageFontColor;	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Floating Damage")
		FLinearColor FloatingDamageDropShadowColor;	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Floating Damage")
		float FloatingDamageDropShadowOffsetX;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Floating Damage")
		float FloatingDamageDropShadowOffsetY;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Floating Damage")
		FLinearColor FloatingDamageOutlineColor;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Floating Damage")
		UFont* FloatingDamageOutlineFont;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Floating Damage")
		float FloatingDamageMinimumDisplayTime;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Floating Damage")
		float FloatingDamageFadeOutSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Floating Critical Damage")
		UFont* FloatingCriticalDamageFont;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Floating Critical Damage")
		FVector2D FloatingCriticalDamageSpeed;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Floating Critical Damage")
		FLinearColor FloatingCriticalDamageFontColor;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Floating Critical Damage")
		FLinearColor FloatingCriticalDamageDropShadowColor;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Floating Critical Damage")
		float FloatingCriticalDamageDropShadowOffsetX;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Floating Critical Damage")
		float FloatingCriticalDamageDropShadowOffsetY;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Floating Critical Damage")
		FLinearColor FloatingCriticalDamageOutlineColor;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Floating Critical Damage")
		UFont* FloatingCriticalDamageOutlineFont;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Floating Critical Damage")
		float FloatingCriticalDamageMinimumDisplayTime;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Floating Critical Damage")
		float FloatingCriticalDamageFadeOutSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Floating Healing")
		UFont* FloatingHealingFont;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Floating Healing")
		FVector2D FloatingHealingSpeed;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Floating Healing")
		FLinearColor FloatingHealingFontColor;	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Floating Healing")
		FLinearColor FloatingHealingDropShadowColor;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Floating Healing")
		float FloatingHealingDropShadowOffsetX;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Floating Healing")
		float FloatingHealingDropShadowOffsetY;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Floating Healing")
		FLinearColor FloatingHealingOutlineColor;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Floating Healing")
		UFont* FloatingHealingOutlineFont;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Floating Healing")
		float FloatingHealingMinimumDisplayTime;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Floating Healing")
		float FloatingHealingFadeOutSpeed;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Floating Critical Healing")
		UFont* FloatingCriticalHealingFont;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Floating Critical Healing")
		FVector2D FloatingCriticalHealingSpeed;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Floating Critical Healing")
		FLinearColor FloatingCriticalHealingFontColor;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Floating Critical Healing")
		FLinearColor FloatingCriticalHealingDropShadowColor;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Floating Critical Healing")
		float FloatingCriticalHealingDropShadowOffsetX;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Floating Critical Healing")
		float FloatingCriticalHealingDropShadowOffsetY;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Floating Critical Healing")
		FLinearColor FloatingCriticalHealingOutlineColor;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Floating Critical Healing")
		UFont* FloatingCriticalHealingOutlineFont;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Floating Critical Healing")
		float FloatingCriticalHealingMinimumDisplayTime;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Floating Critical Healing")
		float FloatingCriticalHealingFadeOutSpeed;

	UFUNCTION(BlueprintCallable, Category = "Damage")
		void AddFloatingDamageItem(FString DamageText, AActor* DamagedActor, FVector DamagedActorOffset, bool IsHealing = false, bool IsCritical = false, bool ShowDropShadow = false, bool ShowOutline = false);

	UFUNCTION(BlueprintCallable, Category = "Damage")
		void CleanUpFloatingDamageItems();
	
protected:
	APlayerController* PC;
	AOWSCharacter* OWSChar;
	FVector2D MouseLocation;
	int32 SlotBeingDraggedFrom;
	FName InventoryBeingDraggedFrom;
	bool SplitDialogOpen;
	int32 SplitNumber;
	int32 StackToSplitSize;
	UOWSInventoryItemStack* InventoryItemStackToSplit;
	UTexture* SplitDialogTexture;
	int32 ScreenCenterX;
	int32 ScreenCenterY;
	int32 ScreenWidth;
	int32 ScreenHeight;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Damage")
		TArray<FFloatingDamage> FloatingDamageItems;

	UPROPERTY()
		UOWSInventoryItemStack* ItemStackBeingDragged;

	UFUNCTION(BlueprintCallable, Category = "Damage")
		void RenderFloatingDamage(float DeltaTime);

	UFUNCTION(BlueprintCallable, Category = "Screen")
		void CalculateScreenPosition(const enum EAnchorPoint ScreenAnchorPoint, const enum EAnchorPoint UIAnchorPoint, const int32 OffsetX, const int32 OffsetY, const int32 UIWidth, 
			const int32 UIHeight);

	UFUNCTION(BlueprintCallable, Category = "Inventory")
		void RenderInteractiveInventoryGrid(UOWSInventory* Inventory, UTexture* EmptySlotTexture, enum EAnchorPoint UIAnchorPoint, int32 X, int32 Y, int32 XSpacing, int32 YSpacing, int32 iconWidth, int32 iconHeight, int32 NumberOfRows, int32 NumberOfCols);

	UFUNCTION(BlueprintCallable, Category = "Inventory")
		void RenderInteractiveInventoryGridUsingLockedSlotGroups(UOWSInventory* Inventory, UTexture* EmptySlotTexture, UTexture* LockedRowTexture, int32 X, int32 Y,
			int32 XSpacing, int32 YSpacing, int32 iconWidth, int32 iconHeight, int32 NumberOfRows, int32 NumberOfCols, int32 SlotGroupRows, int32 SlotGroupCols, int32 SlotGroupXSpacing,
			int32 SlotGroupYSpacing);

	UFUNCTION(BlueprintCallable, Category = "Inventory")
		void SetSplitDialogTexture(UTexture* inSplitDialogTexture);
	
	void GetInventoryNameAndSlot(const FName BoxName, FName &InventoryName, int32 &Slot);
	void GetInput();
	void DrawSplitDialog();

	virtual void PostInitializeComponents() override;
	void ReceiveHitBoxClick(const FName BoxName);
	//void NotifyHitBoxClick(const FName BoxName) override;
	virtual void DrawHUD() override;
};

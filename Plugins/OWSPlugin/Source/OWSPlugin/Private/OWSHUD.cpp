// Copyright 2018 Sabre Dart Studios

#include "OWSHUD.h"


AOWSHUD::AOWSHUD()
{
	SplitNumber = 1;
	StackToSplitSize = 2;
}

void AOWSHUD::AddFloatingDamageItem(FString DamageText, AActor* DamagedActor, FVector DamagedActorOffset, bool IsHealing, bool IsCritical, bool ShowDropShadow, bool ShowOutline)
{
	FFloatingDamage TempFloatingDamageItem;

	TempFloatingDamageItem.DamageText = DamageText;
	TempFloatingDamageItem.IsHealing = IsHealing;
	TempFloatingDamageItem.IsCritical = IsCritical;
	TempFloatingDamageItem.DamageTextLength = 0.f;
	TempFloatingDamageItem.DamagedActor = DamagedActor;	
	TempFloatingDamageItem.DamagedActorOffset = DamagedActorOffset;
	TempFloatingDamageItem.Alpha = 1.f;
	TempFloatingDamageItem.MarkedForDeletion = false;
	TempFloatingDamageItem.ShowDropShadow = ShowDropShadow;
	TempFloatingDamageItem.ShowOutline = ShowOutline;

	if (!IsHealing) //Damage
	{
		TempFloatingDamageItem.TimeLeft = FloatingDamageMinimumDisplayTime;
	}
	else //Healing
	{
		TempFloatingDamageItem.TimeLeft = FloatingHealingMinimumDisplayTime;
	}

	FloatingDamageItems.Add(TempFloatingDamageItem);
}

void AOWSHUD::CleanUpFloatingDamageItems()
{
	FloatingDamageItems.RemoveAll([](const FFloatingDamage item) {
		return item.MarkedForDeletion == true;
	});
}

void AOWSHUD::RenderFloatingDamage(float DeltaTime)
{
	for (FFloatingDamage& FloatingDamageItem : FloatingDamageItems)
	{
		if (FloatingDamageItem.DamagedActor)
		{
			//Calculate text width the first time
			if (FloatingDamageItem.DamageTextLength <= 0.f)
			{
				float TextWidth = 0.f, TextHeight = 0.f;
				GetTextSize(FloatingDamageItem.DamageText, TextWidth, TextHeight, FloatingDamageFont, 1.f);
				FloatingDamageItem.DamageTextLength = TextWidth;
			}

			//Move text up
			FloatingDamageItem.DamagedActorOffset.Z += FloatingDamageSpeed.Y * DeltaTime;

			//Calcualte DamagedActor location on screen
			FVector DamageLocation = FloatingDamageItem.DamagedActor->GetActorLocation() + FloatingDamageItem.DamagedActorOffset;
			FVector ProjectedScreenLocation = Project(DamageLocation);
			FloatingDamageItem.DisplayLocation.X = ProjectedScreenLocation.X - (FloatingDamageItem.DamageTextLength / 2.f);
			FloatingDamageItem.DisplayLocation.Y = ProjectedScreenLocation.Y;

			//Remove DeltaTime from TimeLeft
			FloatingDamageItem.TimeLeft -= DeltaTime;

			//Has time expired?
			if (FloatingDamageItem.TimeLeft < 0.1f)
			{
				//Mark for deletion that will happen in CleanUpFloatingDamageItems()
				FloatingDamageItem.MarkedForDeletion = true;
			}
			else
			{
				UFont* FloatingTextFont;
				UFont* FloatingTextOutlineFont;
				FLinearColor TextColorToRender;
				FLinearColor DropShadowColorToRender;
				FLinearColor OutlineColorToRender;
				float DropShadowOffsetX;
				float DropShadowOffsetY;

				//Is this damage or healing?
				if (!FloatingDamageItem.IsHealing) //Damage
				{
					if (!FloatingDamageItem.IsCritical)
					{
						FloatingTextFont = FloatingDamageFont;
						FloatingTextOutlineFont = FloatingDamageOutlineFont;

						TextColorToRender = FloatingDamageFontColor;
						DropShadowColorToRender = FloatingDamageDropShadowColor;
						OutlineColorToRender = FloatingDamageOutlineColor;

						DropShadowOffsetX = FloatingDamageDropShadowOffsetX;
						DropShadowOffsetY = FloatingDamageDropShadowOffsetY;

						//Fade out if FloatingDamageFadeOutSpeed > 0.f
						if (FloatingDamageFadeOutSpeed > 0.f)
						{
							FloatingDamageItem.Alpha = FMath::Clamp(FloatingDamageItem.Alpha - ((FloatingDamageFadeOutSpeed / FloatingDamageMinimumDisplayTime) * DeltaTime), 0.f, 1.f);
						}
					}
					else
					{
						FloatingTextFont = FloatingCriticalDamageFont;
						FloatingTextOutlineFont = FloatingCriticalDamageOutlineFont;

						TextColorToRender = FloatingCriticalDamageFontColor;
						DropShadowColorToRender = FloatingCriticalDamageDropShadowColor;
						OutlineColorToRender = FloatingCriticalDamageOutlineColor;

						DropShadowOffsetX = FloatingCriticalDamageDropShadowOffsetX;
						DropShadowOffsetY = FloatingCriticalDamageDropShadowOffsetY;

						//Fade out if FloatingCriticalDamageFadeOutSpeed > 0.f
						if (FloatingCriticalDamageFadeOutSpeed > 0.f)
						{
							FloatingDamageItem.Alpha = FMath::Clamp(FloatingDamageItem.Alpha - ((FloatingCriticalDamageFadeOutSpeed / FloatingCriticalDamageMinimumDisplayTime) * DeltaTime), 0.f, 1.f);
						}
					}
				}
				else //Healing
				{
					if (!FloatingDamageItem.IsCritical)
					{
						FloatingTextFont = FloatingHealingFont;
						FloatingTextOutlineFont = FloatingHealingOutlineFont;

						TextColorToRender = FloatingHealingFontColor;
						DropShadowColorToRender = FloatingHealingDropShadowColor;
						OutlineColorToRender = FloatingHealingOutlineColor;

						DropShadowOffsetX = FloatingHealingDropShadowOffsetX;
						DropShadowOffsetY = FloatingHealingDropShadowOffsetY;

						//Fade out if FloatingHealingFadeOutSpeed > 0.f
						if (FloatingHealingFadeOutSpeed > 0.f)
						{
							FloatingDamageItem.Alpha = FMath::Clamp(FloatingDamageItem.Alpha - ((FloatingHealingFadeOutSpeed / FloatingHealingMinimumDisplayTime) * DeltaTime), 0.f, 1.f);
						}
					}
					else
					{
						FloatingTextFont = FloatingCriticalHealingFont;
						FloatingTextOutlineFont = FloatingCriticalHealingOutlineFont;

						TextColorToRender = FloatingCriticalHealingFontColor;
						DropShadowColorToRender = FloatingCriticalHealingDropShadowColor;
						OutlineColorToRender = FloatingCriticalHealingOutlineColor;

						DropShadowOffsetX = FloatingCriticalHealingDropShadowOffsetX;
						DropShadowOffsetY = FloatingCriticalHealingDropShadowOffsetY;

						//Fade out if FloatingCriticalHealingFadeOutSpeed > 0.f
						if (FloatingCriticalHealingFadeOutSpeed > 0.f)
						{
							FloatingDamageItem.Alpha = FMath::Clamp(FloatingDamageItem.Alpha - ((FloatingCriticalHealingFadeOutSpeed / FloatingCriticalHealingMinimumDisplayTime) * DeltaTime), 0.f, 1.f);
						}
					}
				}

				TextColorToRender.A = FloatingDamageItem.Alpha;
				DropShadowColorToRender.A = FloatingDamageItem.Alpha;
				OutlineColorToRender.A = FloatingDamageItem.Alpha;

				if (FloatingDamageItem.ShowDropShadow)
				{
					DrawText(FloatingDamageItem.DamageText, DropShadowColorToRender, FloatingDamageItem.DisplayLocation.X + DropShadowOffsetX,
						FloatingDamageItem.DisplayLocation.Y + DropShadowOffsetY, FloatingTextFont, 1.f);
				}
				if (FloatingDamageItem.ShowOutline)
				{
					DrawText(FloatingDamageItem.DamageText, OutlineColorToRender, FloatingDamageItem.DisplayLocation.X, FloatingDamageItem.DisplayLocation.Y, FloatingTextOutlineFont, 1.f);
				}
				DrawText(FloatingDamageItem.DamageText, TextColorToRender, FloatingDamageItem.DisplayLocation.X, FloatingDamageItem.DisplayLocation.Y, FloatingTextFont, 1.f);
			}
		}
	}
}

void AOWSHUD::SetSplitDialogTexture(UTexture* inSplitDialogTexture)
{
	SplitDialogTexture = inSplitDialogTexture;
}

void AOWSHUD::CalculateScreenPosition(const enum EAnchorPoint ScreenAnchorPoint, const enum EAnchorPoint UIAnchorPoint, const int32 OffsetX, const int32 OffsetY, const int32 UIWidth,
	const int32 UIHeight)
{
	switch (ScreenAnchorPoint)
	{
		case EAnchorPoint::TopLeft:
			break;
		case EAnchorPoint::TopCenter:
			break;
	}
}

void AOWSHUD::RenderInteractiveInventoryGrid(UOWSInventory* Inventory, UTexture* EmptySlotTexture, enum EAnchorPoint UIAnchorPoint, int32 X, int32 Y, int32 XSpacing, int32 YSpacing, int32 iconWidth, int32 iconHeight, int32 NumberOfRows, int32 NumberOfCols)
{
	//if (GetOwningPlayerController() != NULL)
	//{
	//	ARPGCharacter* PlayerChar = Cast<ARPGCharacter>(GetOwningPlayerController()->GetPawn());
	//	UInventory* Inventory = PlayerChar->BagInventory;

	//UInventory* const Inventory = (UInventory*)InventoryObject;

	FColor FontColor;
	FVector2D* FontScale = new FVector2D(1.0f, 1.0f);

	for (int32 curRow = 0; curRow < NumberOfRows; curRow++)
	{
		for (int32 curCol = 0; curCol < NumberOfCols; curCol++)
		{
			int32 Slot = (curRow * NumberOfCols) + curCol;
			FVector2D* Position = new FVector2D((curCol * iconWidth) + (curCol * XSpacing) + X, (curRow * iconHeight) + (curRow * YSpacing) + Y);
			FVector2D* Size = new FVector2D(iconWidth, iconHeight);
			FString InventoryNameStr = Inventory->InventoryName.GetPlainNameString();
			FString SplitChar = TEXT("|");
			FString SlotNumberStr = FString::FromInt((curRow * NumberOfCols) + curCol);
			FString InventorySlotNameStr = InventoryNameStr + SplitChar + SlotNumberStr;
			FName InventorySlotName = FName(*InventorySlotNameStr);

			if (Inventory && Inventory->IsValidLowLevel())
			{
				UOWSInventoryItemStack* InventoryItemStack = Inventory->GetStackInSlot(Slot);

				AOWSInventoryItem* InventoryItem = InventoryItemStack->GetTopItemFromStack();
				if (InventoryItem && InventoryItem->IsValidLowLevel())
				{
					UTexture* Texture = InventoryItem->IconTexture;

					if (InventoryItemStack->IsBeingDragged)
					{
						DrawTexture(EmptySlotTexture, Position->X, Position->Y, (float)iconWidth, (float)iconHeight, 0.0f, 0.0f, 1.0f, 1.0f);
					}
					else
					{
						DrawTexture(Texture, Position->X, Position->Y, (float)iconWidth, (float)iconHeight, 0.0f, 0.0f, 1.0f, 1.0f);
						if (InventoryItemStack->InventoryItems.Num() > 1)
						{
							DrawTexture(Texture, Position->X + 5.0f, Position->Y, (float)iconWidth - 5.0f, (float)iconHeight - 5.0f, 0.0f, 0.0f, 1.0f, 1.0f);
							const FString StackSizeText = FString::FromInt(InventoryItemStack->InventoryItems.Num());
							DrawText(StackSizeText, FLinearColor::White, Position->X + iconWidth - 15.0f, Position->Y + iconHeight - 20.0f);
						}
					}
				}
				else
				{
					DrawTexture(EmptySlotTexture, Position->X, Position->Y, (float)iconWidth, (float)iconHeight, 0.0f, 0.0f, 1.0f, 1.0f);
				}
			}

			this->AddHitBox(*Position, *Size, InventorySlotName, true);
		}
	}
	//}

	if (ItemStackBeingDragged && ItemStackBeingDragged->IsBeingDragged)
	{
		AOWSInventoryItem* InventoryItem = ItemStackBeingDragged->GetTopItemFromStack();
		if (InventoryItem && InventoryItem->IsValidLowLevel())
		{
			UTexture* Texture = InventoryItem->IconTexture;

			DrawTexture(Texture, MouseLocation.X - (iconWidth / 2), MouseLocation.Y - (iconHeight / 2), (float)iconWidth, (float)iconHeight, 0.0f, 0.0f, 1.0f, 1.0f);
			if (ItemStackBeingDragged->InventoryItems.Num() > 1)
			{
				DrawTexture(Texture, MouseLocation.X - (iconWidth / 2) + 5, MouseLocation.Y - (iconHeight / 2), (float)iconWidth - 5, (float)iconHeight - 5, 0.0f, 0.0f, 1.0f, 1.0f);
				const FString StackSizeText = FString::FromInt(ItemStackBeingDragged->InventoryItems.Num());
				DrawText(StackSizeText, FLinearColor::White, MouseLocation.X - (iconWidth / 2) + iconWidth - 15.0f, MouseLocation.Y - (iconHeight / 2) + iconHeight - 20.0f);
			}
		}
	}
}

void AOWSHUD::RenderInteractiveInventoryGridUsingLockedSlotGroups(UOWSInventory* Inventory, UTexture* EmptySlotTexture, UTexture* LockedRowTexture, int32 X, int32 Y,
	int32 XSpacing, int32 YSpacing, int32 iconWidth, int32 iconHeight, int32 NumberOfRows, int32 NumberOfCols, int32 SlotGroupRows, int32 SlotGroupCols, int32 SlotGroupXSpacing, int32 SlotGroupYSpacing)
{
	FColor FontColor;
	FVector2D* FontScale = new FVector2D(1.0f, 1.0f);
	int32 SlotGroupWidth = NumberOfCols * (iconWidth + XSpacing) - XSpacing;
	int32 SlotGroupHeight = NumberOfRows * (iconHeight + YSpacing) - YSpacing;

	FString InventoryNameStr = Inventory->InventoryName.GetPlainNameString();
	FString SplitChar = TEXT("|");
	int32 NumberOfGroupsUnlocked = 0;

	if (Inventory && Inventory->IsValidLowLevel())
	{
		NumberOfGroupsUnlocked = Inventory->NumberOfGroupsUnlocked;
	}

	//Draw locked icons
	for (int32 curGroupRow = 0; curGroupRow < SlotGroupRows; curGroupRow++)
	{
		for (int32 curGroupCol = 0; curGroupCol < SlotGroupCols; curGroupCol++)
		{
			int32 curGroup = (curGroupRow*SlotGroupCols) + curGroupCol;
			if (curGroup >= NumberOfGroupsUnlocked)
			{
				FVector2D* Position = new FVector2D((curGroupCol * SlotGroupWidth) + (curGroupCol * SlotGroupXSpacing),
					(curGroupRow * SlotGroupHeight) + (curGroupRow * SlotGroupYSpacing));
				DrawTexture(LockedRowTexture, Position->X + X, Position->Y + Y, (float)SlotGroupWidth, (float)SlotGroupHeight, 0.0f, 0.0f, 1.0f, 1.0f);
			}
		}
	}

	for (int32 curGroupRow = 0; curGroupRow < SlotGroupRows; curGroupRow++)
	{
		for (int32 curGroupCol = 0; curGroupCol < SlotGroupCols; curGroupCol++)
		{
			int32 curGroup = (curGroupRow*SlotGroupCols) + curGroupCol;
			if (curGroup < NumberOfGroupsUnlocked)
			{
				for (int32 curRow = 0; curRow < NumberOfRows; curRow++)
				{
					for (int32 curCol = 0; curCol < NumberOfCols; curCol++)
					{
						int32 Slot = (curGroupRow * SlotGroupCols * NumberOfCols) + (curGroupCol * NumberOfCols) + (curRow * NumberOfCols) + curCol;
						FVector2D* Position = new FVector2D((curGroupCol * SlotGroupWidth) + (curGroupCol * SlotGroupXSpacing) + (curCol * iconWidth) + (curCol * XSpacing) + X,
							(curGroupRow * SlotGroupHeight) + (curGroupRow * SlotGroupYSpacing) + (curRow * iconHeight) + (curRow * YSpacing) + Y);
						FVector2D* Size = new FVector2D(iconWidth, iconHeight);
						FString SlotNumberStr = FString::FromInt(Slot);
						FString InventorySlotNameStr = InventoryNameStr + SplitChar + SlotNumberStr;
						FName InventorySlotName = FName(*InventorySlotNameStr);

						if (Inventory && Inventory->IsValidLowLevel())
						{
							UOWSInventoryItemStack* InventoryItemStack = Inventory->GetStackInSlot(Slot);

							AOWSInventoryItem* InventoryItem = InventoryItemStack->GetTopItemFromStack();
							if (InventoryItem && InventoryItem->IsValidLowLevel())
							{
								UTexture* Texture = InventoryItem->IconTexture;

								if (InventoryItemStack->IsBeingDragged)
								{
									DrawTexture(EmptySlotTexture, Position->X, Position->Y, (float)iconWidth, (float)iconHeight, 0.0f, 0.0f, 1.0f, 1.0f);
								}
								else
								{
									DrawTexture(Texture, Position->X, Position->Y, (float)iconWidth, (float)iconHeight, 0.0f, 0.0f, 1.0f, 1.0f);
									if (InventoryItemStack->InventoryItems.Num() > 1)
									{
										DrawTexture(Texture, Position->X + 5.0f, Position->Y, (float)iconWidth - 5.0f, (float)iconHeight - 5.0f, 0.0f, 0.0f, 1.0f, 1.0f);
										const FString StackSizeText = FString::FromInt(InventoryItemStack->InventoryItems.Num());
										DrawText(StackSizeText, FLinearColor::White, Position->X + iconWidth - 15.0f, Position->Y + iconHeight - 20.0f);
									}
								}
							}
							else
							{
								DrawTexture(EmptySlotTexture, Position->X, Position->Y, (float)iconWidth, (float)iconHeight, 0.0f, 0.0f, 1.0f, 1.0f);
							}
						}

						this->AddHitBox(*Position, *Size, InventorySlotName, true);
					}
				}
			}
		}
	}

	if (ItemStackBeingDragged && ItemStackBeingDragged->IsBeingDragged)
	{
		AOWSInventoryItem* InventoryItem = ItemStackBeingDragged->GetTopItemFromStack();
		if (InventoryItem && InventoryItem->IsValidLowLevel())
		{
			UTexture* Texture = InventoryItem->IconTexture;

			DrawTexture(Texture, MouseLocation.X - (iconWidth / 2), MouseLocation.Y - (iconHeight / 2), (float)iconWidth, (float)iconHeight, 0.0f, 0.0f, 1.0f, 1.0f);
			if (ItemStackBeingDragged->InventoryItems.Num() > 1)
			{
				DrawTexture(Texture, MouseLocation.X - (iconWidth / 2) + 5, MouseLocation.Y - (iconHeight / 2), (float)iconWidth - 5, (float)iconHeight - 5, 0.0f, 0.0f, 1.0f, 1.0f);
				const FString StackSizeText = FString::FromInt(ItemStackBeingDragged->InventoryItems.Num());
				DrawText(StackSizeText, FLinearColor::White, MouseLocation.X - (iconWidth / 2) + iconWidth - 15.0f, MouseLocation.Y - (iconHeight / 2) + iconHeight - 20.0f);
			}
		}
	}
}

void AOWSHUD::PostInitializeComponents()
{
	Super::PostInitializeComponents();

	PC = GetOwningPlayerController();
}


void AOWSHUD::ReceiveHitBoxClick(const FName BoxName)
{
	if (BoxName == "StackSizeDownButton")
	{
		if (SplitNumber > 1)
			SplitNumber--;
	}
	else if (BoxName == "StackSizeUpButton")
	{
		if (SplitNumber < StackToSplitSize - 1)
			SplitNumber++;
	}
	else if (BoxName == "SplitStackButton")
	{
		if (InventoryItemStackToSplit)
		{
			UOWSInventory* Inventory = OWSChar->GetHUDInventoryFromName(InventoryBeingDraggedFrom);
			if (Inventory)
			{
				AOWSInventoryItem* SplitItem = InventoryItemStackToSplit->RemoveFromTopOfStack();
				int32 Slot = Inventory->FindFirstEmptySlot();
				if (Slot != -1)
				{
					Inventory->AddItemToSlot(SplitItem, Slot);
				}
			}
		}
		SplitDialogOpen = false;
	}
	else if (BoxName == "CancelStackButton")
	{
		SplitDialogOpen = false;
	}
	else if (!SplitDialogOpen)
	{
		FName InventoryName = FName("");
		int32 Slot = 0;
		GetInventoryNameAndSlot(BoxName, InventoryName, Slot);

		if (PC)
		{
			APawn* Pawn = PC->GetPawn();
			if (Pawn)
			{
				OWSChar = Cast<AOWSCharacter>(Pawn);
			}
		}

		if (!OWSChar) return;

		UOWSInventory* Inventory = OWSChar->GetHUDInventoryFromName(InventoryName);
		UOWSInventoryItemStack* InventoryItemStack = Inventory->GetStackInSlot(Slot);
		if (InventoryItemStack)
		{
			InventoryBeingDraggedFrom = InventoryName;
			SlotBeingDraggedFrom = Slot;
			ItemStackBeingDragged = InventoryItemStack;
			ItemStackBeingDragged->IsBeingDragged = true;
		}
	}
}


void AOWSHUD::DrawHUD()
{
	if (!PC)
	{
		PC = GetOwningPlayerController();
		if (!PC) return;
	}

	if (!PC->PlayerInput) return;

	GetInput();

	Super::DrawHUD();

	if (SplitDialogOpen)
		DrawSplitDialog();
}


void AOWSHUD::GetInput()
{
	PC->GetMousePosition(MouseLocation.X, MouseLocation.Y);

	if (PC->WasInputKeyJustReleased(EKeys::LeftMouseButton))
	{
		if (ItemStackBeingDragged)
		{
			ItemStackBeingDragged->IsBeingDragged = false;
			if (HitBoxesOver.Num() > 0)
			{
				FString BoxNameStr = HitBoxesOver.Array().Top().GetPlainNameString();
				FName BoxName = FName(*BoxNameStr);
				FName InventoryName = FName("");
				int32 Slot = 0;
				GetInventoryNameAndSlot(BoxName, InventoryName, Slot);
				UOWSInventory* Inventory = OWSChar->GetHUDInventoryFromName(InventoryName);
				if (Inventory)
				{
					UOWSInventory* SourceInventory = OWSChar->GetHUDInventoryFromName(InventoryBeingDraggedFrom);
					UOWSInventoryItemStack* InventoryItemStackSource = SourceInventory->GetStackInSlot(SlotBeingDraggedFrom);
					UOWSInventoryItemStack* InventoryItemStackDest = Inventory->GetStackInSlot(Slot);

					if (InventoryBeingDraggedFrom == InventoryName && Slot != SlotBeingDraggedFrom)
					{
						AOWSInventoryItem* SourceItem = InventoryItemStackSource->GetTopItemFromStack();
						AOWSInventoryItem* DestItem = InventoryItemStackDest->GetTopItemFromStack();
						if (DestItem)
						{
							if (SourceItem->UniqueItemGUID == DestItem->UniqueItemGUID
								&& SourceItem->CanStack
								&& InventoryItemStackDest->InventoryItems.Num() < DestItem->StackSize)
							{
								InventoryItemStackDest->AddToStack(InventoryItemStackSource);
								SourceInventory->RemoveStackFromSlot(SlotBeingDraggedFrom);
							}
							else
								Inventory->SwapSlots(Slot, SlotBeingDraggedFrom);
						}
						else
							Inventory->SwapSlots(Slot, SlotBeingDraggedFrom);
					}
					else if (InventoryBeingDraggedFrom != InventoryName)
					{
						SourceInventory->AddStackToSlot(InventoryItemStackDest, SlotBeingDraggedFrom);
						Inventory->AddStackToSlot(InventoryItemStackSource, Slot);
					}

				}
			}
		}
	}
	else if (PC->WasInputKeyJustReleased(EKeys::RightMouseButton))
	{
		if (HitBoxesOver.Num() > 0)
		{
			if (PC && !OWSChar)
			{
				APawn* Pawn = PC->GetPawn();
				if (Pawn)
				{
					OWSChar = Cast<AOWSCharacter>(Pawn);
				}
			}

			if (!OWSChar) return;

			FString BoxNameStr = HitBoxesOver.Array().Top().GetPlainNameString();
			FName BoxName = FName(*BoxNameStr);
			FName InventoryName = FName("");
			int32 Slot = 0;
			GetInventoryNameAndSlot(BoxName, InventoryName, Slot);
			UOWSInventory* Inventory = OWSChar->GetHUDInventoryFromName(InventoryName);
			if (Inventory)
			{
				InventoryItemStackToSplit = Inventory->GetStackInSlot(Slot);
				StackToSplitSize = InventoryItemStackToSplit->InventoryItems.Num();
				if (StackToSplitSize > 1)
					SplitDialogOpen = true;
			}
		}
	}
}

void AOWSHUD::GetInventoryNameAndSlot(const FName BoxName, FName &InventoryName, int32 &Slot)
{
	FString SlotName = BoxName.GetPlainNameString();
	//print(SlotName);

	FString InventoryNameString = "";
	FString SlotNumberString = "";
	SlotName.Split("|", &InventoryNameString, &SlotNumberString);
	//print(InventoryNameString);
	//print(SlotNumberString);
	InventoryName = FName(*InventoryNameString);
	if (SlotNumberString.IsNumeric())
	{
		Slot = FCString::Atoi(*SlotNumberString);
	}
}

void AOWSHUD::DrawSplitDialog()
{
	if (SplitDialogTexture)
	{
		ScreenCenterX = Canvas->SizeX / 2;
		ScreenCenterY = Canvas->SizeY / 2;

		FVector2D* Position = new FVector2D(ScreenCenterX - 100.0f, ScreenCenterY - 41.0f);
		FVector2D* Size = new FVector2D(200.0f, 82.0f);

		DrawTexture(SplitDialogTexture, Position->X, Position->Y, Size->X, Size->Y, 0.0f, 0.0f, 1.0f, 1.0f);

		const FString StackSizeText = FString::FromInt(SplitNumber);
		DrawText(StackSizeText, FLinearColor::White, ScreenCenterX - 12.0f, ScreenCenterY - 23.0f, (UFont*)0, 3.0f);

		FVector2D* UpButtonPosition = new FVector2D(ScreenCenterX - 95.0f, ScreenCenterY - 30.0f);
		FVector2D* DownButtonPosition = new FVector2D(ScreenCenterX + 35.0f, ScreenCenterY - 30.0f);
		FVector2D* ButtonSize = new FVector2D(60.0f, 60.0f);

		this->AddHitBox(*UpButtonPosition, *ButtonSize, "StackSizeUpButton", true);
		this->AddHitBox(*DownButtonPosition, *ButtonSize, "StackSizeDownButton", true);

		FVector2D* CancelButtonPosition = new FVector2D(ScreenCenterX - 100.0f, ScreenCenterY + 42.0f);
		FVector2D* SplitButtonPosition = new FVector2D(ScreenCenterX + 1.0f, ScreenCenterY + 42.0f);
		FVector2D* ConfirmButtonSize = new FVector2D(100.0f, 40.0f);

		this->AddHitBox(*SplitButtonPosition, *ConfirmButtonSize, "SplitStackButton", true);
		this->AddHitBox(*CancelButtonPosition, *ConfirmButtonSize, "CancelStackButton", true);
	}

}


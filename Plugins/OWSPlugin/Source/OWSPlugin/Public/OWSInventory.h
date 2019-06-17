// Copyright 2018 Sabre Dart Studios

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "OWSInventoryItem.h"
#include "OWSInventoryItemStack.h"
#include "OWSInventory.generated.h"

class AOWSCharacter;

#define OWS_MAXNUMBEROFITEMSINSTACK 999

/**
 * 
 */
UCLASS(Blueprintable, BlueprintType)
class OWSPLUGIN_API UOWSInventory : public UObject
{
	GENERATED_UCLASS_BODY()

protected:
	AOWSCharacter* OwningPlayerCharacter;

public:

	UFUNCTION(BlueprintCallable, Category = "Inventory")
		void SetOwningPlayerCharacter(AOWSCharacter* inOwningPlayerCharacter);

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Inventory")
		TArray<UOWSInventoryItemStack*> InventoryItemStacks;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Inventory")
		FName InventoryName;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Inventory")
		int32 NumberOfGroupsUnlocked;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Inventory")
		int32 SlotsPerGroup;

	UFUNCTION(BlueprintCallable, Category = "Inventory")
		void SetSize(int32 Size);

	UFUNCTION(BlueprintCallable, Category = "Inventory")
		void SetInventoryName(FName inInventoryName);

	UFUNCTION(BlueprintCallable, Category = "Inventory")
		void AddStackToSlot(UOWSInventoryItemStack* ItemStack, int32 Slot);

	UFUNCTION(BlueprintCallable, Category = "Inventory")
		void RemoveStackFromSlot(int32 Slot);

	UFUNCTION(BlueprintCallable, Category = "Inventory")
		bool AddItemToInventory(AOWSInventoryItem* Item);

	

	UFUNCTION(BlueprintCallable, Category = "Inventory")
		void AddItemToSlot(AOWSInventoryItem* Item, int32 Slot);

		void AddItemToSlot_Internal(AOWSInventoryItem* Item, int32 Slot);

	UFUNCTION(BlueprintCallable, Category = "Inventory")
		void AddItemsFromInventoryItemStruct(const TArray<FInventoryItemStruct>& ItemsToAdd);

	UFUNCTION(BlueprintCallable, Category = "Inventory")
		AOWSInventoryItem* RemoveOneItemFromSlot(int32 Slot);

	UFUNCTION(BlueprintCallable, Category = "Inventory")
		void SwapSlots(int32 SlotA, int32 SlotB);

	UFUNCTION(BlueprintCallable, Category = "Inventory")
		UOWSInventoryItemStack* GetStackInSlot(int32 Slot);

	UFUNCTION(BlueprintCallable, Category = "Inventory")
		int32 FindFirstEmptySlot();

	UFUNCTION(BlueprintCallable, Category = "Inventory")
		int32 FindItemIndex(FString ItemName);
	
	
};

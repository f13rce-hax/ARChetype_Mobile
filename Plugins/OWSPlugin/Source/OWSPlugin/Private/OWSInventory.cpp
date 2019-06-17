// Copyright 2018 Sabre Dart Studios

#include "OWSInventory.h"
#include "OWSGameMode.h"

UOWSInventory::UOWSInventory(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	//SetReplicates(true);
	//bOnlyRelevantToOwner = true;
}

void UOWSInventory::SetSize(int32 Size)
{
	for (int32 CurSlot = 0; CurSlot < Size; CurSlot++)
	{
		UOWSInventoryItemStack* tempInventoryItemStack = NewObject<UOWSInventoryItemStack>();
		InventoryItemStacks.Add(tempInventoryItemStack);
	}
}

void UOWSInventory::SetInventoryName(FName inInventoryName)
{
	InventoryName = inInventoryName;
}

void UOWSInventory::AddStackToSlot(UOWSInventoryItemStack* ItemStack, int32 Slot)
{
	if (InventoryItemStacks.IsValidIndex(Slot))
	{
		InventoryItemStacks[Slot] = ItemStack;
	}
}

void UOWSInventory::RemoveStackFromSlot(int32 Slot)
{
	if (InventoryItemStacks.IsValidIndex(Slot))
	{
		UOWSInventoryItemStack* tempInventoryItemStack = NewObject<UOWSInventoryItemStack>();
		InventoryItemStacks[Slot] = tempInventoryItemStack;
	}
}

void UOWSInventory::SetOwningPlayerCharacter(AOWSCharacter* inOwningPlayerCharacter)
{
	OwningPlayerCharacter = inOwningPlayerCharacter;
}

//Can only be called on the Server side
bool UOWSInventory::AddItemToInventory(AOWSInventoryItem* Item)
{	
	int32 Slot = FindFirstEmptySlot();
	if (Slot != -1 && Slot < (NumberOfGroupsUnlocked * SlotsPerGroup)) //-1 = Full Inventory
	{
		//Add item on the server
		//AddItemToSlot_Internal(Item, Slot);
		//Call AddItemToInventory on OWSCharacter
		FGuid UniqueItemGUID;

		//Replicate item definition if it does not already exist
		AOWSGameMode* OWSGameMode = OwningPlayerCharacter->GetGameMode();

		if (!OWSGameMode)
			return false;

		FInventoryItemStruct& ItemDefinition = OWSGameMode->FindItemDefinition(Item->ItemName);

		bool bWasItemAdded = OwningPlayerCharacter->AddItemToLocalInventoryItems(Item->ItemName, ItemDefinition.ItemCanStack, ItemDefinition.IsUsable, ItemDefinition.IsConsumedOnUse, ItemDefinition.ItemTypeID,
			ItemDefinition.TextureToUseForIcon);

		if (bWasItemAdded)
		{
			OwningPlayerCharacter->Client_AddItemToLocalInventoryItems(Item->ItemName, ItemDefinition.ItemCanStack, ItemDefinition.IsUsable, ItemDefinition.IsConsumedOnUse, ItemDefinition.ItemTypeID,
				ItemDefinition.TextureToUseForIcon);
		}

		//Add item to server side inventory
		OwningPlayerCharacter->AddItemToInventory(InventoryName.ToString(), Item->ItemName, Slot, Item->StackSize, Item->NumberOfUsesLeft, Item->Condition, UniqueItemGUID);
		//Call the Owning client to add the item locally
		OwningPlayerCharacter->Client_AddItemToInventory(InventoryName, Item->ItemName, Item->StackSize, Slot, Item->NumberOfUsesLeft, Item->Condition,
			Item->PerInstanceCustomData, UniqueItemGUID);
		return true;
	}

	return false;
}

void UOWSInventory::AddItemToSlot(AOWSInventoryItem* Item, int32 Slot)
{	
	AddItemToSlot_Internal(Item, Slot);

	//Replicate item definition if it does not already exist
	AOWSGameMode* OWSGameMode = OwningPlayerCharacter->GetGameMode();

	if (!OWSGameMode)
		return;

	FInventoryItemStruct& ItemDefinition = OWSGameMode->FindItemDefinition(Item->ItemName);

	bool bWasItemAdded = OwningPlayerCharacter->AddItemToLocalInventoryItems(Item->ItemName, ItemDefinition.ItemCanStack, ItemDefinition.IsUsable, ItemDefinition.IsConsumedOnUse, ItemDefinition.ItemTypeID,
		ItemDefinition.TextureToUseForIcon);

	if (bWasItemAdded)
	{
		OwningPlayerCharacter->Client_AddItemToLocalInventoryItems(Item->ItemName, ItemDefinition.ItemCanStack, ItemDefinition.IsUsable, ItemDefinition.IsConsumedOnUse, ItemDefinition.ItemTypeID,
			ItemDefinition.TextureToUseForIcon);
	}

	//Call the Owning client to add the item locally
	OwningPlayerCharacter->Client_AddItemToInventory(InventoryName, Item->ItemName, Item->StackSize, Slot, Item->NumberOfUsesLeft, Item->Condition,
		Item->PerInstanceCustomData, Item->UniqueItemGUID);
}

void UOWSInventory::AddItemToSlot_Internal(AOWSInventoryItem* Item, int32 Slot)
{
	UOWSInventoryItemStack* InventoryItemStack = GetStackInSlot(Slot);
	if (InventoryItemStack && !InventoryItemStack->GetTopItemFromStack())
	{
		InventoryItemStack = NewObject<UOWSInventoryItemStack>();
		InventoryItemStack->AddToStack(Item);
		AddStackToSlot(InventoryItemStack, Slot);
	}
}


void UOWSInventory::AddItemsFromInventoryItemStruct(const TArray<FInventoryItemStruct>& ItemsToAdd)
{
	for (auto CurItem : ItemsToAdd)
	{
		AOWSInventoryItem* ItemToAdd = NewObject<AOWSInventoryItem>();

		ItemToAdd->UniqueItemGUID = CurItem.UniqueItemGUID;
		ItemToAdd->ItemName = CurItem.ItemName;
		ItemToAdd->StackSize = CurItem.ItemStackSize;
		ItemToAdd->Condition = CurItem.Condition;
		ItemToAdd->IconTexture = CurItem.TextureIcon;

		AddItemToSlot(ItemToAdd, CurItem.InSlotNumber);
	}
}

AOWSInventoryItem* UOWSInventory::RemoveOneItemFromSlot(int32 Slot)
{
	UOWSInventoryItemStack* InventoryItemStack = GetStackInSlot(Slot);
	if (InventoryItemStack)
	{
		AOWSInventoryItem* InventoryItem = InventoryItemStack->GetTopItemFromStack();
		if (InventoryItem)
		{
			return InventoryItemStack->RemoveFromTopOfStack();
		}

		return nullptr;
	}

	return nullptr;
}

void UOWSInventory::SwapSlots(int32 SlotA, int32 SlotB)
{
	if (InventoryItemStacks.IsValidIndex(SlotA) && InventoryItemStacks.IsValidIndex(SlotB))
	{
		InventoryItemStacks.Swap(SlotA, SlotB);
	}
}

UOWSInventoryItemStack* UOWSInventory::GetStackInSlot(int32 Slot)
{
	if (InventoryItemStacks.IsValidIndex(Slot))
	{
		return InventoryItemStacks[Slot];
	}

	return nullptr;
}

int32 UOWSInventory::FindFirstEmptySlot()
{
	int32 Slot = 0;
	for (TArray<UOWSInventoryItemStack*>::TConstIterator StackIter(InventoryItemStacks); StackIter; ++StackIter)
	{
		if (!(*StackIter)->GetTopItemFromStack())
		{
			return Slot;
		}
		Slot++;
	}

	return -1; //Inventory is Full
}

int32 UOWSInventory::FindItemIndex(FString ItemName)
{
	int32 Slot = 0;
	for (TArray<UOWSInventoryItemStack*>::TConstIterator StackIter(InventoryItemStacks); StackIter; ++StackIter)
	{
		if ((*StackIter)->GetTopItemFromStack() && (*StackIter)->GetTopItemFromStack()->ItemName == ItemName)
		{
			return Slot;
		}
		Slot++;
	}

	return -1; //Item not found
}
// DarrJorge All Rights Reserved.


#include "AssetActions/ExtendAssetAction.h"

#include "EditorUtilityLibrary.h"

void UExtendAssetAction::AddPrefixes()
{
	TArray<UObject*> SelectedObjects = UEditorUtilityLibrary::GetSelectedAssets();
	int32 Counter = 0;

	for (UObject* SelectedObject : SelectedObjects)
	{
		if (!SelectedObject) continue;

		const FString* PrefixFound = PrefixMap.Find(SelectedObject->GetClass());
		
		if (!PrefixFound || PrefixFound->IsEmpty())
		{
			UE_LOG(LogTemp, Error, TEXT("Failed to find prefix fo class %s"), *SelectedObject->GetClass()->GetName());
			continue;
		}

		FString OldName = SelectedObject->GetName();

		if (OldName.StartsWith(*PrefixFound))
		{
			UE_LOG(LogTemp, Error, TEXT("%s already has prefix added"), *OldName);
			continue;
		}
		
		UEditorUtilityLibrary::RenameAsset(SelectedObject, *PrefixFound + OldName);
		++Counter;
	}

	if (Counter > 0)
	{
		//ShowNotifyInfo(TEXT("Successfully renamed " + FString::FromInt(Counter) + " assets"));
	}
}

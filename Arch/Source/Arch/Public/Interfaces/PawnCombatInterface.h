// DarrJorge All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "PawnCombatInterface.generated.h"

class UCombatComponentBase;


// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UPawnCombatInterface : public UInterface
{
	GENERATED_BODY()
};


class ARCH_API IPawnCombatInterface
{
	GENERATED_BODY()

public:
	virtual UCombatComponentBase* GetPawnCombatComponent() const = 0;
};

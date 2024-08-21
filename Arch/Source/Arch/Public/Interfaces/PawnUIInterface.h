// DarrJorge All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "PawnUIInterface.generated.h"

class UArchUIComponentBase;

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UPawnUIInterface : public UInterface
{
	GENERATED_BODY()
};


class ARCH_API IPawnUIInterface
{
	GENERATED_BODY()

public:
	virtual UArchUIComponentBase* GetUIComponentBase() const = 0;
};

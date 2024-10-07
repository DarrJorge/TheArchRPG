#pragma once

UENUM()
enum class EArchConfirmType : uint8
{
	Yes,
	No
};

UENUM()
enum class EArchValidType : uint8
{
	Valid,
	Invalid
};

UENUM()
enum class EArchSuccessType : uint8
{
	Successful,
	Failed
};

UENUM(BlueprintType)
enum class EArchDecoratorOperationType : uint8
{
	IsLessThan,
	IsLessThanOrEqualTo,
	IsEqualTo,
	IsGreaterOrEqualTo,
	IsGreaterThan
};

UENUM(BlueprintType)
enum class EArchCountdownActionInput : uint8
{
	Start,
	Cancel
};

UENUM(BlueprintType)
enum class EArchCountdownActionOutput : uint8
{
	Updated,
	Completed,
	Cancelled
};
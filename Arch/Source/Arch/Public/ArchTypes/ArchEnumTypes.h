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
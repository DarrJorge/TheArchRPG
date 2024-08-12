#pragma once

namespace Debug
{
	DEFINE_LOG_CATEGORY_STATIC(LogArchDebug, All, All)

	static void Print(const FString& Msg, const FColor& Color = FColor::MakeRandomColor(), float InTimeToDisplay = 1.f,
		int32 InKey = -1)
	{
		if (GEngine)
		{
			GEngine->AddOnScreenDebugMessage(InKey, InTimeToDisplay, Color, Msg);

			UE_LOG(LogArchDebug, Warning, TEXT("%s"), *Msg);
		}
	}

	static void Print(const FString& FloatTitle, float FloatValue, const FColor& Color = FColor::MakeRandomColor(),
		float InTimeToDisplay = 2.f, int32 InKey = -1 )
	{
		if (GEngine)
		{
			const FString FinalMsg = FloatTitle + TEXT(": ") + FString::SanitizeFloat(FloatValue);
			GEngine->AddOnScreenDebugMessage(InKey, InTimeToDisplay, Color, FinalMsg);

			UE_LOG(LogArchDebug, Warning, TEXT("%s"), *FinalMsg);
		}
	}
}

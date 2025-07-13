#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "ThirdPersonShooterGameModeBase.generated.h"

UCLASS()
class THIRDPERSONSHOOTER_API AThirdPersonShooterGameModeBase : public AGameModeBase
{
	GENERATED_BODY()

public:
	virtual void PawnKilled(APawn* PawnKilled);
};
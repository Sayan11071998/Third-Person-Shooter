#pragma once

#include "CoreMinimal.h"
#include "GameMode/ThirdPersonShooterGameModeBase.h"
#include "KillEmAllGameMode.generated.h"

UCLASS()
class THIRDPERSONSHOOTER_API AKillEmAllGameMode : public AThirdPersonShooterGameModeBase
{
	GENERATED_BODY()

public:
	virtual void PawnKilled(APawn* PawnKilled) override;

private:
	void EndGame(bool bIsPlayerWinner);
};
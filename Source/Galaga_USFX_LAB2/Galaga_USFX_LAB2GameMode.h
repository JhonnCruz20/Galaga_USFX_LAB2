// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "NaveEnemiga.h"
#include "NaveEnemigaCaza.h"
#include "NaveEnemigaTransporte.h"
#include "NaveEnemigaEspia.h"
#include "NaveEnemigaReabastecimiento.h"
#include "NaveEnemigaNodriza.h"
#include "Galaga_USFX_LAB2GameMode.generated.h"


class ANaveEnemiga;
class ANaveEnemigaCaza;
class ANaveEnemigaTransporte;
class ANaveEnemigaEspia;
class ANaveEnemigaReabastecimiento;
class ANaveEnemigaNodriza;

UCLASS(MinimalAPI)
class AGalaga_USFX_LAB2GameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	AGalaga_USFX_LAB2GameMode();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:

	ANaveEnemigaCaza* NaveEnemigaCaza01;
	ANaveEnemigaCaza* NaveEnemigaCaza02;

	ANaveEnemigaTransporte* NaveEnemigaTransporte01;
	ANaveEnemigaTransporte* NaveEnemigaTransporte02;

	ANaveEnemigaEspia* NaveEnemigaEspia01;
	ANaveEnemigaEspia* NaveEnemigaEspia02;

	ANaveEnemigaReabastecimiento* NaveEnemigaReabastecimiento01;
	ANaveEnemigaReabastecimiento* NaveEnemigaReabastecimiento02;

	ANaveEnemigaNodriza* NaveEnemigaNodriza01;
	ANaveEnemigaNodriza* NaveEnemigaNodriza02;

};



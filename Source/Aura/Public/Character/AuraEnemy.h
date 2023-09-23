// Copywright Lukita

#pragma once

#include "CoreMinimal.h"
#include "Character/AuraCharacterBase.h"
#include "interaction/EnemyInterface.h"
#include "AuraEnemy.generated.h"

/**
 * 
 */
UCLASS()
class AURA_API AAuraEenemy : public AAuraCharacterBase, public IEnemyInterface
{
	GENERATED_BODY()
public:
	AAuraEenemy();
	virtual void HighlightActor() override;
	virtual void UnhighlightActor() override;


};

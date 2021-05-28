// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "EnvironmentQuery/EnvQueryContext.h"
#include "OppositeTeamPawnsQueryContext.generated.h"

/**
 * 
 */
UCLASS()
class HIDESEEKWGHW7_API UOppositeTeamPawnsQueryContext : public UEnvQueryContext
{
	GENERATED_BODY()

	virtual void ProvideContext(FEnvQueryInstance& QueryInstance, FEnvQueryContextData& ContextData) const;
	
};

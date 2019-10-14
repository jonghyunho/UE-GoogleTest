#pragma once

#include "CoreMinimal.h"

class EXAMPLEGAMECORE_API IUnrealActor {
 public:
    virtual ~IUnrealActor() = default; 
    virtual void SetActorLocation(FVector location) = 0;
    virtual FVector GetActorLocation() = 0;
};
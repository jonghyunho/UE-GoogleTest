#pragma once

#ifndef EXAMPLEGAMECORE_API
#define EXAMPLEGAMECORE_API __declspec(dllexport)
#endif

#include "ExampleGameCore/Public/IUnrealActor.h"
#include "ExampleGameCore/Public/IUnrealMath.h"

class EXAMPLEGAMECORE_API CFloatingActor {
 private:
  IUnrealActor& mActor;
  IUnrealMath& mMath;
  float mRunningTime;

 public:
  CFloatingActor(IUnrealActor& actor, IUnrealMath& math)
      : mActor(actor), mMath(math), mRunningTime(0) {}

  void Tick(float DeltaTime) {
    FVector NewLocation = mActor.GetActorLocation();
    float DeltaHeight =
        (mMath.Sin(mRunningTime + DeltaTime) - mMath.Sin(mRunningTime));
    NewLocation.Z += DeltaHeight * 20.0f;
    mRunningTime += DeltaTime;
    mActor.SetActorLocation(NewLocation);
  }
};
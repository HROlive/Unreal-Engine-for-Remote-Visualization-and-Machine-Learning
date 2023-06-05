// Forschungszentrum Jülich GmbH. All rights reserved. 

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "GravitationalAttractionPawn.generated.h"

UCLASS(BlueprintType, Abstract)
class UNREALCOURSE_API AGravitationalAttractionPawn : public APawn {
    GENERATED_BODY()

public:
    UPROPERTY(VisibleAnywhere)
    double Mass = 1;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Movement")
    FVector ExternalVelocity{};
};

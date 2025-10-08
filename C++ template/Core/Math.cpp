#include "Math.h"

int Core::Math::Clamp(int value, int minVal, int maxVal)
{
    if (value < minVal) return minVal;
    if (value > maxVal) return maxVal;
    return value;
}

bool Core::Math::ClampConstraint(int value, int minVal, int maxVal)
{
    if (value < minVal) return false;
    if (value > maxVal) return false;
    return true;
}

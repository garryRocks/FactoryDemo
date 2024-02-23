// Factory.h (contains the class declaration of obstacle factory)

#pragma once
#include "obstacle.h"

// Factory class to create obstacles based on the level
class ObstacleFactory
{
private:
Obstacle *pObstacle;
public:
Obstacle *createObstacle(int level);
};

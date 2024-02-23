// Factory.cpp (contains the definitions of factory class)

#include "factory.h"
#include "obstacle.h"

Obstacle* ObstacleFactory:: createObstacle(int level)
{
    switch (level)
    {
    case 1:
        pObstacle = new SmallRock();
        return pObstacle;
    case 2:
        pObstacle = new MediumRock();
        return pObstacle;
    case 3:
        pObstacle = new BigRock();
        return pObstacle;
    default:
        return nullptr;
    }
}

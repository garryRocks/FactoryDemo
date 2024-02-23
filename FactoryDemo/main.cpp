//main.cpp (contains main function)
#include <iostream>
#include "obstacle.h"
#include "factory.h"

using namespace std;

int main()
{
int currentLevel = 1;

// In each level, create an obstacle based on the level using the factory
for (int i = 1; i <= 3; ++i)
{
ObstacleFactory pObstacleFactory;
Obstacle *pObstacle;

pObstacle = pObstacleFactory.createObstacle(currentLevel);

if (pObstacle)
{
pObstacle->display();
delete pObstacle; // Release memory
}
else
{
cout << "No obstacle for level " << currentLevel << std::endl;
}

currentLevel++;
}

return 0;
}

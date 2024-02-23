#pragma once

// Base class for obstacles
class Obstacle
{
public:
    virtual void display() = 0;
};

// Concrete classes for different obstacles
class SmallRock : public Obstacle
{
public:
    void display() override;
};

class MediumRock : public Obstacle
{
public:
    void display() override;
};

class BigRock : public Obstacle
{
public:
    void display() override;
};

#pragma once
#include "Enemy.h"
class SmallAsteroid :
    public Enemy
{
    void init()
    {
        enemy.setFillColor(Color::Green);
        enemy.setSize(Vector2f(25, 25));
        enemy.setOrigin(enemy.getSize() / (float)2);
        factor = 70;
        rotation = rand()%361;
        enemy.setRotation(rotation);
        enemy.setPosition(500, 500);
        angle = enemy.getRotation() / 180 * M_PI - M_PI / 2;
        velocity = Vector2f(std::cos(angle), std::sin(angle));
        hitCount = 0;
        noOfHitsRequired = 1;
        normalAsteroid = true;
    }
};


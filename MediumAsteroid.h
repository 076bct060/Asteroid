#pragma once
#include "Enemy.h"
class MediumAsteroid :
    public Enemy
{
    void init()
    {
        enemy.setFillColor(Color::Green);
        enemy.setSize(Vector2f(35, 35));
        enemy.setOrigin(enemy.getSize() / (float)2);
        factor = 60;
        rotation = rand() % 361;
        enemy.setRotation(rotation);
        enemy.setPosition(500, 500);
        angle = enemy.getRotation() / 180 * M_PI - M_PI / 2;
        velocity = Vector2f(std::cos(angle), std::sin(angle));
        hitCount = 0;
        noOfHitsRequired = 2;
        normalAsteroid = true;
    }
};

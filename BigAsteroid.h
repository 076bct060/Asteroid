#pragma once
#include "Enemy.h"
#include<iostream>
class BigAsteroid :
    public Enemy
{
    void init()
    {
        enemy.setFillColor(Color::Green);
        enemy.setSize(Vector2f(50, 50));
        enemy.setOrigin(enemy.getSize() / (float)2);
        factor = 40;
        rotation = rand() % 361;
        enemy.setRotation(rotation);
        enemy.setPosition(500, 500);
        angle = enemy.getRotation() / 180 * M_PI - M_PI / 2;
        velocity = Vector2f(std::cos(angle), std::sin(angle));
        hitCount = 0;
        noOfHitsRequired = 3;
        normalAsteroid = true;
    }
};


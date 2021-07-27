#pragma once
#include "Enemy.h"
#include <SFML/Graphics.hpp>
class Boss :
    public Enemy
{
public:
    void init();
    void update(float deltaTime, Vector2f position);
    //Replace circeleShapeWithSprite
    CircleShape getSprite();
    float getSpawnTime();
    void setTimeCount(float count);
    float getTimeCount();
    void updateTimeCount(float count);

private:
    float movingAngle;
    //Replace circleShape with sprite
    CircleShape boss;
    //Texture bossTexture;
    float spawnTime;
    float timeCount;
};


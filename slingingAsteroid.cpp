#include "slingingAsteroid.h"

void slingingAsteroid::init()
{
    /*Remove from here*/
      enemy.setFillColor(Color::Green);
      enemy.setSize(Vector2f(35, 35));
    /*To here*/
    /*Add*/
      //enemyTexture.loadFromFile("");
      //enemy.setTexture(enemyTexture);
    factor = 120;
    rotation = rand() % 361;
    enemy.setRotation(rotation);
    enemy.setPosition(position);
    angle = enemy.getRotation() / 180 * M_PI - M_PI / 2;
    hitCount = 0;
    noOfHitsRequired = 1;
    normalAsteroid = true;
    float positionX = playerPosition.x - enemy.getPosition().x;
    float positionY = playerPosition.y - enemy.getPosition().y;
    float distance = sqrtf(positionX * positionX + positionY * positionY);
    velocity = Vector2f(positionX / distance, positionY / distance);
}

#include "SmallAsteroid.h"

void SmallAsteroid::init()
{
    /*Remove from here*/
     enemy.setFillColor(Color::Green);
     enemy.setSize(Vector2f(25, 25));
     /*To here*/
     /*Add*/
     //enemyTexture.loadFromFile("");
     //enemy.setTexture(enemyTexture);
    factor = 70;
    rotation = rand() % 361;
    enemy.setRotation(rotation);
    enemy.setPosition(position);
    angle = enemy.getRotation() / 180 * M_PI - M_PI / 2;
    velocity = Vector2f(std::cos(angle), std::sin(angle));
    hitCount = 0;
    noOfHitsRequired = 1;
    normalAsteroid = true;
}

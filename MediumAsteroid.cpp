#include "MediumAsteroid.h"

void MediumAsteroid::init()
{
    /*Remove from here*/
    enemy.setFillColor(Color::Green);
    enemy.setSize(Vector2f(45, 45));
    /*To here*/
    /*Add*/
    //enemyTexture.loadFromFile("");
    //enemy.setTexture(enemyTexture);
    factor = 60;
    rotation = rand() % 361;
    enemy.setRotation(rotation);
    enemy.setPosition(position);
    angle = enemy.getRotation() / 180 * M_PI - M_PI / 2;
    velocity = Vector2f(std::cos(angle), std::sin(angle));
    hitCount = 0;
    noOfHitsRequired = 2;
    normalAsteroid = true;
}

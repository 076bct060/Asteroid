#include "TrackingAsteroid.h"
void TrackingAsteroid::init()
{

    /*Remove from here*/
    enemy.setFillColor(Color::Blue);
    enemy.setSize(Vector2f(25, 25));
    /*To here*/
    /*Add*/
    //enemyTexture.loadFromFile("");
    //enemy.setTexture(enemyTexture);
    factor = 50;
    rotation = rand() % 361;
    enemy.setRotation(rotation);
    enemy.setPosition(500, 500);
    //angle = enemy.getRotation() / 180 * M_PI - M_PI / 2;
    //velocity = Vector2f(std::cos(angle), std::sin(angle));
    hitCount = 0;
    noOfHitsRequired = 1;
    normalAsteroid = false;
}
void TrackingAsteroid::update(float deltaTime, Vector2f position)
{
    float postionX = position.x - enemy.getPosition().x;
    float postionY = position.y - enemy.getPosition().y;
    float distance = sqrtf(postionX * postionX + postionY * postionY);
    enemy.move((Vector2f(postionX, postionY) / distance) * deltaTime * (float)factor);
}
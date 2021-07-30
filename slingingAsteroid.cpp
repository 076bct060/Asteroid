#include "slingingAsteroid.h"

void slingingAsteroid::init()
{
    /*Remove from here*/
      enemy.setFillColor(Color::Green);
      srand(time(0));
      int random = rand() % 3;
      if (random == 0)
      {
          //remove this
          enemy.setSize(Vector2f(25, 25));
          //add small asteroid sprite and texture        
          noOfHitsRequired = 1;
      }
      else if (random == 1)
      {
          //remove this
          enemy.setSize(Vector2f(45, 45));
          //add medium asteroid sprite and texture        
          noOfHitsRequired = 2;
      }
      else
      {
          //remove this
          enemy.setSize(Vector2f(55, 55));
          //add small asteroid sprite and texture        
          noOfHitsRequired = 3;
      }
    /*To here*/
    /*Add*/
      //enemyTexture.loadFromFile("");
      //enemy.setTexture(enemyTexture);
    factor = 65;
    rotation = rand() % 361;
    enemy.setRotation(rotation);
    enemy.setPosition(position);
    angle = enemy.getRotation() / 180 * M_PI - M_PI / 2;
    hitCount = 0;
    
    normalAsteroid = true;
    float positionX = playerPosition.x - enemy.getPosition().x;
    float positionY = playerPosition.y - enemy.getPosition().y;
    float distance = sqrtf(positionX * positionX + positionY * positionY);
    velocity = Vector2f(positionX / distance, positionY / distance);
}

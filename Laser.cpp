#include "Laser.h"

Laser::Laser()
{
}

Laser::~Laser()
{
}

void Laser::update(float deltaTime)
{
	float angle = rotation / 180 * M_PI - M_PI / 2;
	laser.move(Vector2f(cos(angle), sin(angle)) * deltaTime * factor);
}

void Laser::init(Vector2f position, float Rotation)
{
	M_PI = 3.14159;
	rotation = Rotation;
	//laserTexture.loadFromFile();
	//laser.setTexture();
	laser.setSize(Vector2f(5, 15));
	laser.setPosition(position.x ,position.y);
	laser.setFillColor(Color::Red);
	laser.setRotation(rotation);
	factor = 800;
}
//Replace rectagngleShape with Sprite
RectangleShape Laser::getSprite()
{
	return laser;
}

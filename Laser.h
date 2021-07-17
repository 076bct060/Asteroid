#include<SFML/Graphics.hpp>
#include<cmath>
#pragma once
using namespace sf;
class Laser
{
public:
	Laser();
	~Laser();
	void update(float deltaTime);
	void init(Vector2f position,float rotation);
	RectangleShape getSprite();
private:
	//Texture laserTexture;
	//Sprite laser;
	//Remove this rectangle shape
	RectangleShape laser;
	float M_PI;
	float factor ;
	float rotation;
};


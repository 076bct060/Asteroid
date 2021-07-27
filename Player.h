#include<SFML/Graphics.hpp>
#include <cmath>
#include <iostream>
#pragma once
using namespace sf;
class Player
{
private:
	CircleShape player;
	bool ismoving;
	int rotation;
	float M_PI;
	Vector2f position;
	Vector2f velocity;
	void playerMovement(float deltaTime);
	void checkPosition();
	//Texture playertexture;
	//Sprite player;
	float factor;
public:
	Player();
	~Player();
	void init();
	void updatePlayer(float deltaTime);
	//Remove this
	CircleShape getSprite();
	/*Add this*/
	//Sprite getSprite();
	void setMoving(bool moving);
	void setRotation(int rot);
	
};


#include<SFML/Graphics.hpp>
#include <stdlib.h>
#include<time.h>
#pragma once
using namespace sf;
class Enemy
{
protected:
	
	RectangleShape enemy;
	Vector2f velocity;
	int factor;
	int hitCount;
	int noOfHitsRequired;
	float rotation;
	float M_PI = 3.14159;
	float angle;
	bool normalAsteroid;
	Vector2f position;
	Vector2f playerPosition;
public:
	Enemy();
	~Enemy();
	 bool getAseroidType();
	 void setAsteroidTpye(bool type);
	virtual void init() = 0;
	virtual void update(float deltaTime,Vector2f position);
	RectangleShape getSprite();
	int gethitCount();
	int getnoOfHitsRequired();
	void setHitcount(int hit);
	Vector2f getPosition();
	void setPosition(Vector2f position);
	void setplayerPosition(Vector2f pos);
};


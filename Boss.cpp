#include "Boss.h"
#include <iostream>

void Boss::init()
{
	/*Remove from here*/
	boss.setFillColor(Color::Green);
	boss.setRadius(50);
	boss.setPointCount(3);
	/* to Here*/
	//bossTexture.loadFromFile();
	//boss.setTexture(bossTexture);
	factor = 70;
	rotation = rand() % 361;
	boss.setPosition(700,500);
	angle = boss.getRotation() / 180 * M_PI - M_PI / 2;
	velocity = Vector2f(std::cos(angle), std::sin(angle));
	hitCount = 0;
	noOfHitsRequired = 20;
	normalAsteroid = true;
	spawnTime = 8.0f;
	timeCount = 0;
}

void Boss::update(float deltaTime, Vector2f position)
{
	boss.move(velocity * deltaTime * (float)factor);
	if (boss.getPosition().x < 0 || boss.getPosition().x > 1000 ||
		boss.getPosition().y < 0 || boss.getPosition().y>720)
	{
		rotation = rotation + 90;
		boss.rotate(rotation);
		angle = boss.getRotation() / 180 * M_PI - M_PI / 2;
		velocity = Vector2f(std::cos(angle), std::sin(angle));
	}
}
//Replace CircleShape with sprite
CircleShape Boss::getSprite()
{
	//Replace boss with boss
	return boss;
}

float Boss::getSpawnTime()
{
	return spawnTime;
}

void Boss::setTimeCount(float count)
{
	timeCount =count;
}

float Boss::getTimeCount()
{
	return timeCount;
}

void Boss::updateTimeCount(float count)
{
	timeCount += count;
}

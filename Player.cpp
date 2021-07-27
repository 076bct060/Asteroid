#include "Player.h"

void Player::playerMovement(float deltaTime)
{
	if (rotation != 0)
	{
		float angle = rotation * factor * deltaTime;
		player.rotate(angle);
	}
	if (ismoving)
	{
		float angle = player.getRotation() / 180 * M_PI -M_PI/2;
		velocity = Vector2f(std::cos(angle), std::sin(angle)) * deltaTime * factor;
		player.move(velocity);
	}

}

void Player::checkPosition()
{
	if (player.getPosition().x < 0)
	{
		player.setPosition(1000, player.getPosition().y);
	}
	else if (player.getPosition().x > 1000)
	{
		player.setPosition(0, player.getPosition().y);
	}
	if (player.getPosition().y < 0)
	{
		player.setPosition(player.getPosition().x, 720);
	}
	else if (player.getPosition().y > 720)
	{
		player.setPosition(player.getPosition().x, 0);
	}
}

void Player::init()
{
	position.x = 500.f;
	position.y = 360.f;
	player.setPosition(position);
	player.setRadius(40);
	player.setFillColor(Color::White);
	player.setPointCount(3);
	player.setOrigin(player.getRadius() / 2, player.getRadius() / 2);
	M_PI = 3.14159;
	factor = 70;
	//playertexture.loadFromFile("space.webp");
	//player.setTexture(playertexture);
}
Player::Player()
{

	
}

void Player::updatePlayer(float deltaTime)
{
	
	playerMovement(deltaTime);
	checkPosition();
	
}

Player::~Player()
{
}

/*
* Sprite Player::getSprite()
{
	return player;
}
*/
CircleShape Player::getSprite()
{
	return player;
}


void Player::setMoving(bool moving)
{
	ismoving = moving;
}

void Player::setRotation(int rot)
{
	rotation = rot;
}

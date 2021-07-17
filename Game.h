#include<SFML/Graphics.hpp>
#include<vector>
#include "Player.h"
#include "Laser.h"
#include"Enemy.h"
#include"BigAsteroid.h"
#include"SmallAsteroid.h"
#include"MediumAsteroid.h"
#include"TrackingAsteroid.h"
#pragma once
using namespace sf;
class Game
{
public:
	Game();
	~Game();
	void run();
	void init();


private:
	static int level;
	void processEvent();
	void update(float deltaTime);
	void spawnEnemies();
	Enemy* chooseEnemy(int i);
	void render();
	void shoot();
	RenderWindow window;
	Texture backgoundTexture;
	Sprite backgroundSprite;
	Player player;
	bool gameOver;
	void gameOverScreen();
	std::vector<Laser*>lasers;
	std::vector<Enemy*>enemies;
};


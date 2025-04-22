#pragma once

#include "Enemy.h"
#include "Player.h"

struct GameManager
{
	Enemy currentEnemy;
	Player userPlayer;

	GameManager(Enemy enemy, Player player) : currentEnemy(enemy), userPlayer(player){}
};
#pragma once

#include "Enemy.h"
#include "Player.h"
#include "Character.h"

class GameManager
{
public:

	Player userPlayer;
	Enemy currentEnemy;

	//GameManager(Enemy enemy, Player player) : currentEnemy(enemy), userPlayer(player) {}
	GameManager()
		: userPlayer(10, 10, 11, 100, "�� ��", PlayerIdle),
		currentEnemy(40, 10, 6, 50, "������", SlimeIdle) { }
	
	
	

	void GameStart()
	{		
		while (true)
		{
			
			
		}
	}	

	
};
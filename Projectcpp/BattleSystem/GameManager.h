#pragma once

#include "Enemy.h"

struct GameManager
{
	Enemy currentEnemy; // enemy복사해서 사용한다.
	TurnSystem currentTurnState;

	GameManager(Enemy enemy) : currentEnemy(enemy)  
	{
		currentTurnState = PLAYERTUEN;
	}
	
};
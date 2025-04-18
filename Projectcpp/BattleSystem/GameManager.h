#pragma once

#include "Enemy.h"

struct GameManager
{
	Enemy currentEnemy; // enemy�����ؼ� ����Ѵ�.
	TurnSystem currentTurnState;

	GameManager(Enemy enemy) : currentEnemy(enemy)  
	{
		currentTurnState = PLAYERTUEN;
	}
	
};
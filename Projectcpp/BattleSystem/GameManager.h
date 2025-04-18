#pragma once

#include "Enemy.h"
#include "Player.h"

struct GameManager
{
	Enemy currentEnemy; // enemy�����ؼ� ����Ѵ�.
	Player player;
	TurnSystem currentTurnState;

	GameManager(Enemy enemy, Player player) : currentEnemy(enemy),player(player)
	{
		currentTurnState = PLAYERTUEN;
	}
	
	// �ٸ� ���� �������� ������ ���
	void GameLoop();


	void Battle();

	void Animation();

	// �÷��̾��� �ൿ

	void PlayerTurn();

	// ������ �ൿ

	void EnemyTurn();

};
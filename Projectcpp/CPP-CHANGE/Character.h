#pragma once
#include "GameHeader.h"

void GoToXY(int x, int y);

struct Character
{
	int x, y, attack, health;
	std::string name;
	char action1[SLIME_WIDTH + 1];
	char action2[SLIME_WIDTH + 1];
	char action3[SLIME_WIDTH + 1];
	char action4[SLIME_WIDTH + 1];
		
	void ShowBattle();

	bool BattleCondition();
	bool WalkCondition();

	void Motion()
	{
		if (BattleCondition())
		{
			// ¹èÆ²
		}
		else if (WalkCondition())
		{
			// °È±â
		}
		else  // Á×´Â °æ¿ì
		{
			// Á×´Â´Ù.
		}

	}
	void PlayerAction(Character* player, int action);
	void SlimeAction(Character* slime, int action);
	
};

struct BossCharacter
{
	int x, y, attack, health;
	std::string name;
	char action1[SLIME_HEIGHT][SLIME_WIDTH + 1];
	char action2[SLIME_HEIGHT][SLIME_WIDTH + 1];
	char action3[SLIME_HEIGHT][SLIME_WIDTH + 1];
	char action4[SLIME_HEIGHT][SLIME_WIDTH + 1];

	void BattleWithBoss(Character* player)
	{
		//ShowStage(Stage, 0, 0);
		//ShowGold(&inventory);

		static int ShowAttack = true;

		if (ShowAttack % 2 != false)
		{
			boss.action1;
			player->action1;
		}
		else
		{
			player->health -= boss.attack;
			boss.health -= player->attack;

			boss.action2;
			player->action2;

			if (player->health <= 0)
			{
				system("cls");                  // ¸·Å¸

				//ShowStage(Stage, 0, 0);
				//ShowGold(&inventory);

				player->health = 0;
				PlayerAction(player, 3);
				BossAction(boss, 4);

				Sleep(1000);
			}
			if (boss->health <= 0)
			{
				system("cls");                    // ¸·Å¸

				boss->health = 0;

				ShowStage(Stage, 0, 0);
				ShowGold(&inventory);
				BossGoldDrop(&boss, &inventory);
				PlayerAction(player, 1);
				BossAction(boss, 3);

				Sleep(1000);


			}
		}
		ShowAttack++;
		Sleep(500);
	}
};

Character player, slime;
BossCharacter boss;



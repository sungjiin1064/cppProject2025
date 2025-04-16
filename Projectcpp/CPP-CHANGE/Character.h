
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

	void Motion()
	{

	}
	void PlayerAction(Character* player, int action)
	{
		GoToXY(player->x - 1, player->y - 2);
		printf("%s : %d", player->name, player->health);
		GoToXY(player->x, player->y);
		if (action == 1)
		{
			printf("%s", player->action1);
		}
		else if (action == 2) printf("%s", player->action2);
		else if (action == 3) printf("%s", player->action3);
		else if (action == 4) printf("%s", player->action4);
	}

	void SlimeAction(Character* slime, int action)
	{
		GoToXY(slime->x + 1, slime->y - 2);
		printf("%s : %d", slime->name, slime->health);
		GoToXY(slime->x, slime->y);
		if (action == 1) printf("%s", slime->action1); // 기본 상태
		else if (action == 2) printf("%s", slime->action2); // 공격 상태
		else if (action == 3) printf("%s", slime->action3); // 사망 상태
		else if (action == 4) printf("%s", slime->action4);
	}
	
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
				system("cls");                  // 막타

				//ShowStage(Stage, 0, 0);
				//ShowGold(&inventory);

				player->health = 0;
				PlayerAction(player, 3);
				BossAction(boss, 4);

				Sleep(1000);
			}
			if (boss->health <= 0)
			{
				system("cls");                    // 막타

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



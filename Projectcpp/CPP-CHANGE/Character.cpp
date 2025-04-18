
#include "Character.h"

void GoToXY(int x, int y)
{
	COORD pos = { x,y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

Character player = 
{ 25, 10, 31, 1150, "기 사",
	{
		"",
		"",
		"(  '' )/"
	},
	{
    	"",
		"",
		"(  '' )ㅡE"
	},
	{
		"",
		"",
		"__+__"
	},
	{
		"",
		"",
		"\\(  ''  )/"
	}
 };
Character slime = 
{ 52, 10, 11, 100, "슬라임",
    {
	
		"",
		"",
		"  ( ''  )"
	},
	{
		"",
		"",
		"( ''    )"
	},
	{
		"",
		"",
		"  ( x x )"
	},
	{
		"",
		"",
		"  ( 'v' )"
	}
};
Character bossSlime =
{// x   y  공   피
	52, 8, 22, 100, "킹 슬라임",
	{
		"   - -",
		" - ..  -",
		"_ _ _ _ _ _"
	},
	{
		" - -",
		"- ..  -",
		" _ _ _ _ _ "
	},
	{
		"         ",
		" - - - - -",
		"'_ _x x_ _'"
	},
	{
		"   -  -",
		" - .   . -",
		"_ _ _v_ _ _"
	}
};

void Character::Motion()
{
}

void Character::ShowBattle()
{
	//ShowStage(Stage, 0, 0);
	//ShowGold(&inventory);

	//GoToXY(2, 4);
	//printf("보스 몬스터 소환 %d / 5", slimeCount);

	static int ShowAttack = true;

	if (ShowAttack % 2 != false)
	{
		player.action1;
		slime.action1;
	}
	else
	{
		player.health -= slime.attack;
		slime.health -= player.attack;

		slime.action2;
		player.action2;
		if (player.health <= 0)
		{
			system("cls");                // 막타

			//ShowStage(Stage, 0, 0);
			//ShowGold(&inventory);

			player.health = 0;
			player.action3;
			slime.action4;
			Sleep(1000);
		}
		if (slime.health <= 0)
		{
			system("cls");                 // 안지우면 막타모션이 안보임

			//ShowStage(Stage, 0, 0);
			//ShowGold(&inventory);

			//slimeCount++;


			//GoToXY(2, 4);
			//printf("보스 몬스터 소환 %d / 5", slimeCount);


			slime.health = 0;
			player.action1;
			slime.action3;

			Sleep(1000);
		}
	}
	ShowAttack++;

	Sleep(500);
}

void Character::PlayerAction(Character* player, int action)
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

void Character::SlimeAction(Character* slime, int action)
{
	GoToXY(slime->x + 1, slime->y - 2);
	printf("%s : %d", slime->name, slime->health);
	GoToXY(slime->x, slime->y);
	if (action == 1) printf("%s", slime->action1); // 기본 상태
	else if (action == 2) printf("%s", slime->action2); // 공격 상태
	else if (action == 3) printf("%s", slime->action3); // 사망 상태
	else if (action == 4) printf("%s", slime->action4);
}


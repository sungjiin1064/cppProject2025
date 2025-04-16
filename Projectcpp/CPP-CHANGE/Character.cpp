
#include "Character.h"

void GoToXY(int x, int y)
{
	COORD pos = { x,y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

Character player = { 25, 10, 31, 1150, "기 사",  "(  '' )/", "(  '' )ㅡE", "__+__","\\(  ''  )/" };
Character slime = { 52, 10, 11, 100, "슬라임"," ( ''  )","( ''   )"," ( x x )", " ( 'v' )" };
BossCharacter boss =
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
#pragma once
#include "Common.h"
#include "Image.h"

struct Player
{
	int HP;
	int ATK;
	int DEF;
	string name;
	char Image[IMAGEHEIGHT][IMAGEWIDTH + 1];
	BattleState battleState;

	int posX;
	int posY;
	bool isDeath;

	Player(int HP, int ATK, int DEF, string name, char Image[IMAGEHEIGHT][IMAGEWIDTH + 1], BattleState battleState)
		: HP(HP), ATK(ATK), DEF(DEF), name(name), battleState(battleState)
	{
		posX = 0;
		posY = 5;
		isDeath = false;

		for (int y = 0; y < IMAGEHEIGHT; y++)
		{
			for (int x = 0; x < IMAGEWIDTH + 1; x++)
			{
				this->Image[y][x] = Image[y][x];
			}
		}
	}


	void ChangeImage(char Image[IMAGEHEIGHT][IMAGEWIDTH + 1]);
	void ShowImage();

	// ���ǿ� �ش��ϴ� ���
	bool IsBattle();
	bool IsWalk();
	bool IsIdle();

	void SetBattleImage(char Image[IMAGEHEIGHT][IMAGEWIDTH + 1]);

	void Attacked(int damage);
	void Defence();
	void UseItem(int heal);
};


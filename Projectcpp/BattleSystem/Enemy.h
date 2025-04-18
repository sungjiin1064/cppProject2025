#pragma once
#include "Common.h"
#include "Image.h"

enum TurnSystem
{
	PLAYERTUEN,
	ENEMYTURN,
	GAMECLEAR,
	GAMEEND
};

enum BattleState
{
	IDLE,
	MOVE,
	BETTLE
};

struct Enemy
{
	int HP;
	int ATK;
	int DEF;
	string name;
	char Image[IMAGEHEIGHT][IMAGEWIDTH + 1];
	BattleState battleState;

	Enemy(int HP, int ATK, int DEF, string name, char Image[IMAGEHEIGHT][IMAGEWIDTH + 1])
		: HP(HP), ATK(ATK), DEF(DEF), name(name)
	{
		for (int y = 0; y < IMAGEHEIGHT; y++)
		{
			for (int x = 0; x < IMAGEWIDTH + 1; x++)
			{
				this->Image[y][x] = Image[y][x];
			}
		}
	}


	void ChangeImage(char Image[IMAGEHEIGHT][IMAGEWIDTH + 1]);
	void ShowImage(int& posX, int& posY);

	// 조건에 해당하는 기능
	bool IsBattle(int x, int y);
	bool IsWalk(int x, int y);
	bool IsIdle(int x, int y);

	void SetBattleImage(char Image[IMAGEHEIGHT][IMAGEWIDTH + 1], int& posX, int& posY);
};

struct Player
{
	int HP;
	int ATK;
	int DEF;
	string name;
	char Image[IMAGEHEIGHT][IMAGEWIDTH + 1];
	BattleState battleState;

	Player(int HP, int ATK, int DEF, string name, char Image[IMAGEHEIGHT][IMAGEWIDTH + 1])
		: HP(HP), ATK(ATK), DEF(DEF), name(name)
	{
		for (int y = 0; y < IMAGEHEIGHT; y++)
		{
			for (int x = 0; x < IMAGEWIDTH + 1; x++)
			{
				this->Image[y][x] = Image[y][x];
			}
		}
	}


	void ChangeImage(char Image[IMAGEHEIGHT][IMAGEWIDTH + 1]);
	void ShowImage(int& posX, int& posY);

	// 조건에 해당하는 기능
	bool IsBattle(int x, int y);
	bool IsWalk(int x, int y);
	bool IsIdle(int x, int y);

	void SetBattleImage(char Image[IMAGEHEIGHT][IMAGEWIDTH + 1], int& posX, int& posY);
};
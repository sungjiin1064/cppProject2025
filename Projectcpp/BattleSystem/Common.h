#pragma once
#include <iostream>
#include <Windows.h>
#include <conio.h>

using std::cout;
using std::cin;
using std::endl;
using std::string;

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

void GoToXY(int x, int y);
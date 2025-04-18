#pragma once
#include "GameHeader.h"

void GoToXY(int x, int y);

struct Character
{
	int x;
	int y;
	int attack;
	int health;
	string name;
	char action1[UNIT_HEIGHT][UNIT_WIDTH + 1];
	char action2[UNIT_HEIGHT][UNIT_WIDTH + 1];
	char action3[UNIT_HEIGHT][UNIT_WIDTH + 1];
	char action4[UNIT_HEIGHT][UNIT_WIDTH + 1];

	Character(int x, int y, int attack, int health, string name,
		char action1[UNIT_HEIGHT][UNIT_WIDTH + 1],
		char action2[UNIT_HEIGHT][UNIT_WIDTH + 1],
		char action3[UNIT_HEIGHT][UNIT_WIDTH + 1],
		char action4[UNIT_HEIGHT][UNIT_WIDTH + 1])
		: x(x), y(y), attack(attack), health(health), name(name)
		
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


Character player, slime, bossSlime;


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
};

struct BossCharacter
{
	int x, y, attack, health;
	std::string name;
	char action1[SLIME_HEIGHT][SLIME_WIDTH + 1];
	char action2[SLIME_HEIGHT][SLIME_WIDTH + 1];
	char action3[SLIME_HEIGHT][SLIME_WIDTH + 1];
	char action4[SLIME_HEIGHT][SLIME_WIDTH + 1];
};

Character player, slime;
BossCharacter boss;


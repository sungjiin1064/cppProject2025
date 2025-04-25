
#include "Monster.h"
#include "MonsterHandler.h"


int main()
{
	MonsterHandler monsterHandler;

	Monster slime2(1, 5);
	Slime slime(1,5);
	Orc orc(2, 10);

	monsterHandler.BattleWithPlayer(slime2);
	monsterHandler.BattleWithPlayer(slime);
	monsterHandler.BattleWithPlayer(orc);
}
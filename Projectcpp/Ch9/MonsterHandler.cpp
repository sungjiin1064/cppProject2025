#include "MonsterHandler.h"

void MonsterHandler::BattleWithPlayer(Monster& monster)
{	
	// if(monster == slime)
	if (dynamic_cast<Slime*>(&monster))
	{
		cout << "슬라임의 전투가 실행됩니다." << endl;
	}
	// if(monster == orc)
	if (dynamic_cast<Orc*>(&monster))
	{
		cout << "오크의 전투가 실행됩니다." << endl;
	}


	//monster.Attack();
}



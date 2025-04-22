


#include "GameManager.h"

int main()
{
	Player player(10, 10, 11, 100, "기 사", PlayerIdle);
	Enemy slime(40, 10, 6, 50, "슬라임", SlimeIdle);
	
	GameManager Game(slime, player);
	
	
	


	while (true)
	{
		
		Game.userPlayer.SetBattle(PlayerIdle);
		Game.currentEnemy.SetBattle(SlimeIdle);	
		Sleep(300);
		Game.userPlayer.SetBattle(PlayerBattle);
		Game.currentEnemy.SetBattle(SlimeMove);
		Sleep(300);
		

	}
}



#include "Enemy.h"

int main()
{
	//Player player(0, 10, 11, 100, "기 사", PlayerIdle);
	Enemy Slime(60, 10, 6, 50, "슬라임", SlimeIdle);
	


	while (true)
	{
		Slime.ShowImage();
		//Slime.SetBattle(SlimeIdle);	
		//Slime.SetBattle(SlimeMove);
		

	}
}
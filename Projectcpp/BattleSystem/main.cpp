
/*
* Common.h ��� ������ ���� ����� ���̺귯���� �߰����ּ���
* GoToXY();
* 
* Player
* Enemy, Monster, Slime
* 
* (Game, Stage, Monster)Manager
*/

/*
* ����? Battle
* ��� : Playey. Enemy.
* ü��, ���ݷ�, ����
* ����ϴ�.( ü���� 0���� �۰ų� ���� �� )
* ( ü���� �����ϴ� ��� )
* ������ �޾Ҵ�. ������ �Դ´�.
*/



#include "GameManager.h"


/*
* Enemy ��ü
* GameManager ��ü
*/

int main()
{

	Enemy Slime(100, 10, 1, "������", SlimeMove, IDLE);
	Enemy GoBlin(100, 10, 1, "������", SlimeMove, IDLE);
	Player player(100, 10, 1, "���谡", PlayerIdle, IDLE);
	GameManager Game(Slime, player);
		
	Game.GameLoop();
		
	


	/*while (true)
	{		
		Game.player.SetBattleImage(PlayerIdle);
		Game.currentEnemy.SetBattleImage(SlimeIdle); 		
		Sleep(500);
		system("cls");
		Game.player.SetBattleImage(PlayerMove);
		Game.currentEnemy.SetBattleImage(SlimeMove);
		Sleep(500);
		system("cls");

		
	}*/
}

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


#include "Enemy.h"


int main()
{
	Enemy Slime(100, 10, 1, "������", SlimeMove);

	int slimeX = 30;
	int slimeY = 5;
	int playerX = 0; /////////////////
	int playerY = 0; ///////////////////
		
	// Ÿ��Ʋ ȭ���� ������
	// Press Any Key To Start
	//_getch();

	while (true)
	{		
		Slime.SetBattleImage(SlimeIdle, slimeX, slimeY); 
		Slime.SetBattleImage(PlayerIdle, playerX, playerY); ///////////
	
		Sleep(500);
		system("cls");

		Slime.SetBattleImage(SlimeMove, slimeX, slimeY); 
		Slime.SetBattleImage(PlayerBattle, playerX, playerY); ///////////////
		Sleep(500);
		system("cls");

		// Slime ���� ���°� ��Ʋ ���°� �Ǹ� SlimeMove-> SlimeBattle
	}
}
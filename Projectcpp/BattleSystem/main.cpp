
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
	GameManager Game(Slime);

	
	
		
	// Ÿ��Ʋ ȭ���� ������
	// Press Any Key To Start
	//_getch();

	while (true)
	{		
		Game.currentEnemy.SetBattleImage(SlimeIdle); 		
		Sleep(500);
		system("cls");
		Game.currentEnemy.SetBattleImage(SlimeMove);
		Sleep(500);
		system("cls");

		// Slime ���� ���°� ��Ʋ ���°� �Ǹ� SlimeMove-> SlimeBattle
	}
}
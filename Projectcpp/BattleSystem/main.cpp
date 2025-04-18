
/*
* Common.h 헤더 파일을 만들어서 공통된 라이브러리를 추가해주세요
* GoToXY();
* 
* Player
* Enemy, Monster, Slime
* 
* (Game, Stage, Monster)Manager
*/

/*
* 전투? Battle
* 대상 : Playey. Enemy.
* 체력, 공격력, 방어력
* 사망하다.( 체력이 0보다 작거나 같은 때 )
* ( 체력을 조작하는 기능 )
* 공격을 받았다. 포션을 먹는다.
*/



#include "GameManager.h"

/*
* Enemy 객체
* GameManager 객체
*/

int main()
{

	Enemy Slime(100, 10, 1, "슬라임", SlimeMove, IDLE);
	GameManager Game(Slime);

	
	
		
	// 타이틀 화면을 보여줘
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

		// Slime 현재 상태가 배틀 상태가 되면 SlimeMove-> SlimeBattle
	}
}
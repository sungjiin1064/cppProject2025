
/*
* 주제 : 객체지향 프로그래밍(OOP)의 특징, (SOLID)원칙
*/

/*
* 절차지향 프로그래밍 vs 객체지향 프로그래밍
* 
* 절차 : 함수로 프로그래밍을 진행하겠다.
* 장점 : 코드가 매우 빠르다. 구현도 용이하다.
* 단점 : 확장성에 취약하다. 규모가 거대해지면 프로그래밍이 어려워진다
* 
* 객체 : 객체 데이터가 행동을 하도록 프로그래밍
* 장점 : 코드의 확장성이 유연하다.
* 단점 : 코드의 구현속도가 느리다. 설계를 해야한다.
*/

/*
* OOP의 특징. 캡슐화, 추상화, 상속, 다형성
*/


#include "OOP.h"
#include "HP.h"
#include "Player.h"
#include "Enemy.h"

int main() 
{
	Example1();

	Player player;
	Enemy enemy;

	player.AttackedBy(100);
	player.Recovery(50);
	enemy.AttackedBy(100);
	enemy.Recovery(50);
}
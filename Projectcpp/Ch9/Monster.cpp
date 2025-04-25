#include "Monster.h"

void Monster::Attack()
{
	CalculateFinalATK();
	cout << "최종공격력 :" << finalATK << endl;
}

void Monster::CalculateFinalATK()
{
	finalATK = lv * defaultATK;
}

void Slime::Attack()
{
	//cout << "슬라임의 공격력" << finalATK<<endl;
	Monster::Attack();

	cout << "슬라임의 특수 기능을 실행합니다." << endl;
}

void Orc::Attack()
{
	Monster::Attack();
	cout << "오크의 특수 기능을 실행합니다" << endl;
}

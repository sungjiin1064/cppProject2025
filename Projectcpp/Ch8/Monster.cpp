#include "Monster.h"

void Attacker::Attack()
{
	cout << "공격한다." << endl;
}

Attacker* Unit::ReturnAttacker()
{
	return attacker;
}



void Unit::Attack()
{
	cout << "유닛이 공격한다." << endl;
}

void Unit::UseSkill()
{
	cout << "마법 : 사용합니다." << endl;
}

void Probe::Attack()
{
	cout << "소형 타입의 공격을 한다." << endl;
}

void Probe::UseSkill()
{
	cout << "마법 : 사용할수 없습니다." << endl;
}

void Zealot::Attack()
{
	cout << "소형 타입의 공격을 한다." << endl;
	cout << "연속해서 두번 공격한다." << endl;

}

void Zealot::UseSkill()
{
	cout << "마법 : 빠르게 이동합니다." << endl;
}

void Dragoon::Attack()
{
	cout << "중형 타입의 공격을 한다." << endl;
	cout << "일정 확률로 공격이 빗나간다." << endl;

}

void Dragoon::UseSkill()
{
	cout << "마법 : 사거리가 넓어집니다." << endl;
}

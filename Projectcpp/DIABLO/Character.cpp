#include "Character.h"

void CharacterClass::ShowInfo()
{

}

void CharacterClass::Attack()
{
	cout << "일반 공격을 한다." << endl;
}

void Barbarian::Attack()
{
	cout <<name <<" 도끼를 휘둘러 근접공격을 한다." << endl;
}

void Paladin::Attack()
{
	cout <<name<< "검으로 찔러 근접공격을 한다." << endl;
}

void Amazon::Attack()
{
	cout <<name<< "창을 던져 원거리공격을 한다." << endl;
}



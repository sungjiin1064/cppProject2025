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
	cout << "도끼를 휘둘러 근접공격을 한다." << endl;
}

void Paladin::Attack()
{
	cout << "검으로 찔러 근접공격을 한다." << endl;
}

void Amazon::Attack()
{
	cout << "창을 던져 원거리공격을 한다." << endl;
}

void Sorcerress::Attack()
{
	cout << "지팡이에 주문을 걸어 원거리공격을 한다."<<endl;
}

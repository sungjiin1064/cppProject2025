#include "Character.h"

void CharacterClass::ShowInfo()
{

}

void CharacterClass::Attack()
{
	cout << "�Ϲ� ������ �Ѵ�." << endl;
}

void Barbarian::Attack()
{
	cout <<name <<" ������ �ֵѷ� ���������� �Ѵ�." << endl;
}

void Paladin::Attack()
{
	cout <<name<< "������ �� ���������� �Ѵ�." << endl;
}

void Amazon::Attack()
{
	cout <<name<< "â�� ���� ���Ÿ������� �Ѵ�." << endl;
}



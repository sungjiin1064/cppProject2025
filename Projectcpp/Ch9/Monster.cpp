#include "Monster.h"

void Monster::Attack()
{
	CalculateFinalATK();
	cout << "�������ݷ� :" << finalATK << endl;
}

void Monster::CalculateFinalATK()
{
	finalATK = lv * defaultATK;
}

void Slime::Attack()
{
	//cout << "�������� ���ݷ�" << finalATK<<endl;
	Monster::Attack();

	cout << "�������� Ư�� ����� �����մϴ�." << endl;
}

void Orc::Attack()
{
	Monster::Attack();
	cout << "��ũ�� Ư�� ����� �����մϴ�" << endl;
}

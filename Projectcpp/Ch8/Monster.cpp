#include "Monster.h"

void Attacker::Attack()
{
	cout << "�����Ѵ�." << endl;
}

Attacker* Unit::ReturnAttacker()
{
	return attacker;
}



void Unit::Attack()
{
	cout << "������ �����Ѵ�." << endl;
}

void Unit::UseSkill()
{
	cout << "���� : ����մϴ�." << endl;
}

void Probe::Attack()
{
	cout << "���� Ÿ���� ������ �Ѵ�." << endl;
}

void Probe::UseSkill()
{
	cout << "���� : ����Ҽ� �����ϴ�." << endl;
}

void Zealot::Attack()
{
	cout << "���� Ÿ���� ������ �Ѵ�." << endl;
	cout << "�����ؼ� �ι� �����Ѵ�." << endl;

}

void Zealot::UseSkill()
{
	cout << "���� : ������ �̵��մϴ�." << endl;
}

void Dragoon::Attack()
{
	cout << "���� Ÿ���� ������ �Ѵ�." << endl;
	cout << "���� Ȯ���� ������ ��������." << endl;

}

void Dragoon::UseSkill()
{
	cout << "���� : ��Ÿ��� �о����ϴ�." << endl;
}

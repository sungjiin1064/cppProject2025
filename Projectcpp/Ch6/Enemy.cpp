#include "Enemy.h"

void Enemy::AttackedBy(int damage)
{
	if (damage < 0)
	{
		cout << "���ط��� ������ �� �� �����ϴ�." << endl;
	}
	HP -= damage;

	if (HP < 0)
	{
		isDeath = true;
	}
}

void Enemy::Recovery(int heal)
{
	if (HP > MaxHP)
	{
		HP = MaxHP;
		return;
	}
	HP += heal;
}

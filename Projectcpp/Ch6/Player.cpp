#include "Player.h"

void Player::AttackedBy(int damage)
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

void Player::Recovery(int heal)
{
	if (HP > MaxHP)
	{
		HP = MaxHP;
		return;
	}
	HP += heal;
}

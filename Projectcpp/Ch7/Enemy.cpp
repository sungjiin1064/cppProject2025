#include "Enemy.h"



void Enemy::Attacked()
{
	cout << "���� ����" << endl;
	HP -= 10;
}

void Enemy::Defence()
{
	cout << "��� �ڼ�" << endl;
	DEF += 5;

}

void Enemy::Recovery()
{
	cout << "ȸ����" << endl;
	HP += 10;
}

void Enemy::BehaviorAI()
{
	if (HP > 5)
	{
		currentPatern = AGGRESSIVE;
	}
	else if (HP % 2 == 0)
	{
		currentPatern = DEFENSIVE;
	}
	else
	{
		currentPatern = COWARD;
	}
}

void Enemy::Action()
{
	BehaviorAI();

	switch (currentPatern)
	{
	case AGGRESSIVE:
	case DEFENSIVE:
	case COWARD:
	}
}


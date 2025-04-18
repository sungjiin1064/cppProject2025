#include "Enemy.h"

void Enemy::ChangeImage(char Image[IMAGEHEIGHT][IMAGEWIDTH + 1])
{
	for (int y = 0; y < IMAGEHEIGHT; y++)
	{
		for (int x = 0; x < IMAGEWIDTH + 1; x++)
		{
			this->Image[y][x] = Image[y][x];
		}
	}
}

void Enemy::ShowImage()
{
	for (int y = 0; y < IMAGEHEIGHT; y++)
	{
		for (int x = 0; x < IMAGEWIDTH + 1; x++)
		{
			GoToXY(posX +x, posY+y);
			cout << Image[y][x];
		}
		cout << endl;
	}
}

bool Enemy::IsBattle()
{
	if (posX <= 10) 	
	{
		return true;

	}
	else
	{
		return false;

	}
}

bool Enemy::IsWalk()
{
	return false;
}

bool Enemy::IsIdle()
{
	return false;
}

void Enemy::SetBattleImage(char Image[IMAGEHEIGHT][IMAGEWIDTH + 1])
{
	ChangeImage(Image);

	if (IsBattle())
	{
		posX = 30;
		
	}
	else
	{
		// ���� ���� Ư���� �ൿ�� �ϴ� �Լ� ȣ��
		posX--;
		
	}
	
	ShowImage();
}

void Enemy::Attacked(int damage)
{
	// ������ ���� ��Ģ
	damage = damage - DEF;
	if (damage <= 0)
	{
		damage = 1;
	}

	HP -= damage;

	if (HP <= 0)
	{
		isDeath = true;
	}

	// HP�� 0���� �۰ų� ������ ���Ͱ� �׾��ٴ� ����� �˷����Ѵ�. bool is Deaht
}

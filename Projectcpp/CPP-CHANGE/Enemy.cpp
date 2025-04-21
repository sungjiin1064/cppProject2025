#include "Enemy.h"

void Enemy::MoveToPoint()
{
	if (posX <= 30)
	{
		IsBattle();
	}
	else
	{
		posX--;
	}
}

bool Enemy::IsBattle()
{

	return false;
}

void Enemy::ChangeImage(char Image[UNIT_HEIGHT][UNIT_WIDTH + 1])
{
	for (int y = 0;y < UNIT_HEIGHT;y++)
	{
		for (int x = 0;x < UNIT_WIDTH;x++)
		{
			this->Image[y][x] = Image[y][x];
		}
	}
}

void Enemy::ShowImage()
{
	for (int y = 0;y < UNIT_HEIGHT;y++)
	{
		for (int x = 0;x < UNIT_WIDTH;x++)
		{
			GoToXY(posX + x, posY + y);
			
			cout << Image[y][x];
		}
		cout << endl;
	}

}

void Enemy::SetBattle(char Image[UNIT_HEIGHT][UNIT_WIDTH + 1])
{
	ChangeImage(Image);
	MoveToPoint();
	ShowImage();
	Sleep(500);

}

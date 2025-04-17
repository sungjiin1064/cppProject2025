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

void Enemy::ShowImage(int& posX, int& posY)
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

bool Enemy::IsBattle(int x, int y)
{
	if (x <= 10)
	{
		return true;

	}
	else
	{
		return false;

	}
}

bool Enemy::IsWalk(int x, int y)
{
	return false;
}

bool Enemy::IsIdle(int x, int y)
{
	return false;
}

void Enemy::SetBattleImage(char Image[IMAGEHEIGHT][IMAGEWIDTH + 1], int& posX, int& posY)
{
	ChangeImage(Image);

	if (IsBattle(posX, posY))
	{
		posX = 10;
	}
	else
	{
		// 적군 마다 특별한 행동을 하는 함수 호출
		posX--;
	}
	
	ShowImage(posX, posY);
}

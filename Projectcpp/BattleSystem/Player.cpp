#include "Player.h"

void Player::ChangeImage(char Image[IMAGEHEIGHT][IMAGEWIDTH + 1])
{
	for (int y = 0; y < IMAGEHEIGHT; y++)
	{
		for (int x = 0; x < IMAGEWIDTH + 1; x++)
		{
			this->Image[y][x] = Image[y][x];
		}
	}
}

void Player::ShowImage()
{
	for (int y = 0; y < IMAGEHEIGHT; y++)
	{
		for (int x = 0; x < IMAGEWIDTH + 1; x++)
		{
			GoToXY(posX + x, posY + y);
			cout << Image[y][x];
		}
		cout << endl;
	}
}

bool Player::IsBattle()
{
	if (posX >= 5)
	{
		return true;

	}
	else
	{
		return false;

	}
	
}

bool Player::IsWalk()
{
	return false;
}

bool Player::IsIdle()
{
	return false;
}

void Player::SetBattleImage(char Image[IMAGEHEIGHT][IMAGEWIDTH + 1])
{
	ChangeImage(Image);

	if (IsBattle())
	{
		posX = 5;

	}
	else
	{
		// 적군 마다 특별한 행동을 하는 함수 호출
		posX++;

	}

	ShowImage();
}

void Player::Attacked(int damage)
{
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

}

void Player::Defence()
{
	DEF += 1;
}

void Player::UseItem(int heal)
{
	HP += heal;

	// 최대 체력
}

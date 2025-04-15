#include "Player.h"

void Player::ShowInfo()
{
	cout << "[" << xPos << "," << yPos << "|" << "플레이어의 이름 : " << name << endl;
}

void Player::ChangPos(int x, int y)
{
	xPos = x;
	yPos = y;
}

#include "Player.h"

void Player::ShowInfo()
{
	cout << "[" << xPos << "," << yPos << "|" << "�÷��̾��� �̸� : " << name << endl;
}

void Player::ChangPos(int x, int y)
{
	xPos = x;
	yPos = y;
}

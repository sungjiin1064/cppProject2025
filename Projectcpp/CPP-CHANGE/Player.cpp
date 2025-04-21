#include "Player.h"

void Player::ShowImage(int& posX, int& posY)
{
	for (int y = 0;y < UNIT_HEIGHT;y++)
	{
		for (int x = 0;x < UNIT_WIDTH;x++)
		{
		
			cout << Image[y][x];
		}
		cout << endl;
	}
}

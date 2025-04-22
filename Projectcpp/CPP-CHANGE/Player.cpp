#include "Player.h"

void Player::ChangeImage(char Image[UNIT_HEIGHT][UNIT_WIDTH + 1])
{
	for (int y = 0;y < UNIT_HEIGHT;y++)
	{
		for (int x = 0;x < UNIT_WIDTH;x++)
		{
			this->Image[y][x] = Image[y][x];
		}
			
	}
}

void Player::ShowImage()
{
	for (int y = 0;y < UNIT_HEIGHT;y++)
	{
		for (int x = 0;x < UNIT_WIDTH;x++)
		{
			GoToXY(posX +x, posY+ y);
			cout << Image[y][x];
		}
		cout << endl;
	}
}

void Player::SetBattle(char Image[UNIT_HEIGHT][UNIT_WIDTH + 1])
{
	ChangeImage(Image);
	ShowImage();
	//Sleep(200);
}

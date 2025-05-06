#include "Character.h"

void Character::SelectCharacter()
{
	int mousex = 10;

	while (true)
	{
		SelectImage();
		system("cls");
		GoToXY(mousex, 10);
		cout << "ก่" << endl;

		if (_kbhit())
		{
			if (GetAsyncKeyState(VK_LEFT))
			{
				mousex -= 5;

			}
			if (GetAsyncKeyState(VK_RIGHT))
			{
				mousex += 5;
			}
		}
		Sleep(100);
	}
}

void Character::SelectImage()
{
	for (int y = 0;y < UNIT_HEIGHT;y++)
	{
		for (int x = 0;x < UNIT_WIDTH + 1;x++)
		{
			this->Image[y][x] = Image[y][x];
		}
	}
}

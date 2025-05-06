
#include "Choice.h"

void SelectCharacter()
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






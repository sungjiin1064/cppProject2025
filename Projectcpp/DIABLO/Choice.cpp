
#include "Choice.h"

void SelectCharacter()
{
	int mousex = 10;

	while (true)
	{
		SelectImage();
		system("cls");
		GoToXY(mousex, 10);
		cout << "��" << endl;

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

void SelectImage()
{
	GoToXY(9, 9);
	cout << SwordIdle << endl;
	GoToXY(20, 9);
	cout << ArrowIdle << endl;

}





#include "Intro.h"
#include "Character.h"

void Intro()
{
	int L = 4;
	int R = 4;
	while (true)
	{
		GoToXY(4, L);
		cout << player.action1 << endl;
		GoToXY(10, R);
		cout << slime.action1 << endl;

		if (_kbhit())
		{
			if (GetAsyncKeyState(VK_UP) & 0x8000)
			{
				L += 3;
				R += 3;
			}
			if (GetAsyncKeyState(VK_DOWN) & 0x8000)
			{
				L -= 3;
				R -= 3;
			}
			if (GetAsyncKeyState(VK_RETURN) & 0X8000)
			{
				if (L == 4)
				{
					return;
				}
				if (L == 7)
				{
					exit(0);
				}
			}
		}
	}
}
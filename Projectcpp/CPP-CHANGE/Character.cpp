
#include "Character.h"

void GoToXY(int x, int y)
{
	COORD pos = { x,y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

Character player = { 25, 10, 31, 1150, "�� ��",  "(  '' )/", "(  '' )��E", "__+__","\\(  ''  )/" };
Character slime = { 52, 10, 11, 100, "������"," ( ''  )","( ''   )"," ( x x )", " ( 'v' )" };
BossCharacter boss =
{// x   y  ��   ��
	52, 8, 22, 100, "ŷ ������",
	{
		"   - -",
		" - ..  -",
		"_ _ _ _ _ _"
	},
	{
		" - -",
		"- ..  -",
		" _ _ _ _ _ "
	},
	{
		"         ",
		" - - - - -",
		"'_ _x x_ _'"
	},
	{
		"   -  -",
		" - .   . -",
		"_ _ _v_ _ _"
	}
};



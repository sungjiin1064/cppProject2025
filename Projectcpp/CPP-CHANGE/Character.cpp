
#include "Character.h"

void GoToXY(int x, int y)
{
	COORD pos = { x,y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

Character player = { 25, 10, 31, 1150, "기 사",  "(  '' )/", "(  '' )ㅡE", "__+__","\\(  ''  )/" };
Character slime = { 52, 10, 11, 100, "슬라임"," ( ''  )","( ''   )"," ( x x )", " ( 'v' )" };
BossCharacter boss =
{// x   y  공   피
	52, 8, 22, 100, "킹 슬라임",
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



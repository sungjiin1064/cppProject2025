
#include "Console.h"
#include <iostream>
#include "ImageModel.h"
#include "Image.h"
#include "Actor.h"

using namespace std;

int main()
{
	ImageModel model;
	Actor actor;

	Console::CursorVisible(false);
	
	Image bat(model.batArt, 7);

	Console::GoToXY(20, 20);
	actor.Tell("나레이션","박쥐가 먹이를 찾고있습니다.");
	Sleep(2000);
	bat.move(0,5,10,100);
	
	actor.Tell("나레이션", "정면에 호랑이가 나타났습니다.");
	actor.Tell("나레이션", "박쥐는 어떤 선택을 해야하나요??");
	bool b1 = actor.Selection("박쥐", "도망칩니다.","맞서싸웁니다.");

	if (b1)
	{
		cout << "박쥐가 도망쳐서 이 후의 스토리 진행"<<endl;

		if (actor.Selection("박쥐", "도망칩니다.", "맞서싸웁니다."))
		{

		}
		else
		{

		}
	}

	else
	{
		cout << "Bad Ending";
	}





	//bat.moveReverse(10, 5, 15, 500);

	/*bat.show(5, 0);
	Console::GoToXY(5, 5);
	cout << "     "<<endl;
	Sleep(1000);
	bat.show(7, 0);
	Console::GoToXY(5, 5);
	cout << "     " << endl;
	Sleep(1000);
	bat.show(9, 0);
	Console::GoToXY(5, 5);
	cout << "     " << endl;
	Sleep(1000);
	bat.show(11, 0);
	Console::GoToXY(5, 5);
	cout << "     " << endl;
	Sleep(1000);*/

	

	while (true);
}
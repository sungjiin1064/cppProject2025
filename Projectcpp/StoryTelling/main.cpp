
#include "Console.h"
#include <iostream>
#include "ImageModel.h"
#include "Image.h"

using namespace std;

int main()
{
	ImageModel model;

	Console::CursorVisible(false);
	
	Image bat(model.batArt, 7);

	bat.move(0,5,10,500);
	bat.moveReverse(10, 5, 15, 500);

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
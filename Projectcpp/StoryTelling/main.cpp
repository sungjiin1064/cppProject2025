
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
	actor.Tell("�����̼�","���㰡 ���̸� ã���ֽ��ϴ�.");
	Sleep(2000);
	bat.move(0,5,10,100);
	
	actor.Tell("�����̼�", "���鿡 ȣ���̰� ��Ÿ�����ϴ�.");
	actor.Tell("�����̼�", "����� � ������ �ؾ��ϳ���??");
	bool b1 = actor.Selection("����", "����Ĩ�ϴ�.","�¼��ο�ϴ�.");

	if (b1)
	{
		cout << "���㰡 �����ļ� �� ���� ���丮 ����"<<endl;

		if (actor.Selection("����", "����Ĩ�ϴ�.", "�¼��ο�ϴ�."))
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
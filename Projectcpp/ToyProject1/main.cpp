/*
* ��ǥ : cpp���� ȭ�� �����ϱ�
* ���� : Windows.h GoToXY() �籸��
* ����� : cpp������� ������ϱ�
* �̷� : namespace
*/

/*
* �̸������� ����� ���� ����
* 1. �ٸ� �� ������Ʈ�� copy paste ��ĥ �� �߻��ϴ� ������ �ּ�ȭ �� �� �ִ�.
* 2. �̸������� ������ �̸��� ���ؼ� �ڵ带 �з��� �� �ִ�.
*/

#include <iostream>
#include <Windows.h>
#include <conio.h>
#include <stdio.h>

namespace ConsoleUtils
{
	void GoToXY(int x, int y)
	{
		COORD pos = { x,y };
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
	}
}

void InputPlayerKey(int& x, int& y)
{
	if (_kbhit)
	{
		if (GetAsyncKeyState(VK_LEFT))
		{
			x--;
		}
		else if (GetAsyncKeyState(VK_RIGHT))
		{
			x++;
		}
		else if (GetAsyncKeyState(VK_UP))
		{
			y--;
		}
		else if (GetAsyncKeyState(VK_DOWN))
		{
			y++;
		}
	}
}

int main()
{
	// ���� 1. 10,10��ǥ�� �÷��̾��� ���� �ؽ�Ʈ�� ����غ�����
	ConsoleUtils::GoToXY(10, 10);
	std::cout << "�÷��̾��� ����";

	// ���� 2. �÷��̾��� �̸��� �Է¹޾Ƽ� �÷��̾��� ���� �ؽ�Ʈ �� �� �Ʒ��� ����ϱ�
	// �Է� ���� ������ �޾Ƽ� 1�� ������ �÷��̾� �̸� �߰��ϱ�
	//                       2�� ������ �÷��̾� ������ ����ϱ�

	char name[10];

	while (true)
	{
		int inputNumber = 0;

		std::cout << "1. ������� �̸��� ������ �� �ֽ��ϴ�. 2. �÷��̾��� ������ ȭ�鿡 ����մϴ�." << std::endl;
		std::cin >> inputNumber; // ���� �ּ� ������ ����ϰ�, �ÿ��� ���ϴµ� �̺κ��� �� ���ذ� �Ȱ��ϴ�.

		if (inputNumber == 1)
		{
			std::cout << "�̸��� �Է����ּ���.";
			std::cin >> name;
		}
		else if (inputNumber == 2)
		{
			ConsoleUtils::GoToXY(10, 10);
			std::cout << "�÷��̾��� ����";
			ConsoleUtils::GoToXY(10, 11);
			std::cout << "�÷��̾��� �̸� :" << name;
			_getch();
		}
		else
		{
			break;
		}
		system("cls");
	}

	int x = 0, y = 0;

	while (true)
	{
		system("cls");
		InputPlayerKey(x, y);
		std::cout << "�÷��̾��� ��ǥ : " << "[" << x << "," << y << "]" << std::endl;
		ConsoleUtils::GoToXY(x, y);
		std::cout << "��";
		Sleep(100);
	}

}




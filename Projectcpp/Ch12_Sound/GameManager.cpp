#include "GameManager.h"

void GameManager::ShowTitle()
{
	ConsoleUtil::GoToXY(20, 0);
	cout << "���� �� ��Ⱑ ���۵ǰڽ��ϴ�." << endl;
	//SoundUtil::PlayTitleSound(_T("sound.wav"));
}

void GameManager::ShopPhase()
{
	system("cls");
	ConsoleUtil::GoToXY(0, 8);
	cout << "������ �����߽��ϴ�." << endl;

	int input = 0;
	cout << "�ൿ�� �������ּ���." << endl;
	cin >> input;
	if (input == 1)
	{
		cout << "������ ���۵˴ϴ�." << endl;
	}
	

}

void GameManager::GamePhase()
{
	Runner* runA = new Player();
	Runner* runB = new Runner("B");
	Runner* runC = new Runner("C");
	Runner* runD = new Runner("D");


	string line = "==============================================";
	int endLine = line.length();

	while (true)
	{
		Sleep(300);
		system("cls");

		cout << line << endl;
		runA->Run();
		runB->Run();
		runC->Run();
		runD->Run();

		cout << line << endl;

		if (runA->CheckEndLine(endLine)
			|| runB->CheckEndLine(endLine)
			|| runC->CheckEndLine(endLine)
			|| runD->CheckEndLine(endLine))

		{
			cout << "��� ����" << endl;
			break;
		}
	}

	if (runA->CheckEndLine(endLine))
	{
		cout << "A�� 1���� �߽��ϴ�." << endl;
	}
	if (runB->CheckEndLine(endLine))
	{
		cout << "B�� 1���� �߽��ϴ�." << endl;
	}
	if (runC->CheckEndLine(endLine))
	{
		cout << "C�� 1���� �߽��ϴ�." << endl;
	}
	if (runD->CheckEndLine(endLine))
	{
		cout << "D�� 1���� �߽��ϴ�." << endl;
	}

	_getch(); // conio.h��� 
}

void GameManager::Play()
{
	ShowTitle();

	while (true)
	{
		ShopPhase();
		GamePhase();
	}
}

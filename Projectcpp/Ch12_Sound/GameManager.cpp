#include "GameManager.h"

void GameManager::ShowTitle()
{
	ConsoleUtil::GoToXY(20, 0);
	cout << "잠히 후 경기가 시작되겠습니다." << endl;
	//SoundUtil::PlayTitleSound(_T("sound.wav"));
}

void GameManager::ShopPhase()
{
	system("cls");
	ConsoleUtil::GoToXY(0, 8);
	cout << "상점에 진입했습니다." << endl;

	int input = 0;
	cout << "행동을 선택해주세요." << endl;
	cin >> input;
	if (input == 1)
	{
		cout << "게임이 시작됩니다." << endl;
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
			cout << "경기 종료" << endl;
			break;
		}
	}

	if (runA->CheckEndLine(endLine))
	{
		cout << "A가 1등을 했습니다." << endl;
	}
	if (runB->CheckEndLine(endLine))
	{
		cout << "B가 1등을 했습니다." << endl;
	}
	if (runC->CheckEndLine(endLine))
	{
		cout << "C가 1등을 했습니다." << endl;
	}
	if (runD->CheckEndLine(endLine))
	{
		cout << "D가 1등을 했습니다." << endl;
	}

	_getch(); // conio.h사용 
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

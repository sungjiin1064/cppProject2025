
#include "Common.h"
#include <Windows.h> 
#include <tchar.h>

// Winmm.lib : Window Multi Media Library
// 추가방법 : 프로젝트우클릭-속성-링커-입력-추가종속성(편집) 에 입력

int main()
{
	PlaySound(_T("sound.wav"), NULL, SND_ASYNC);

	while (true)
	{

	}
	 
	/*Runner* runA = new Runner("( ><)");
	Runner* runB = new Runner("( '')");


	string line = "==============================================";
	int endLine = line.length();

	while (true)
	{
		Sleep(300);
		system("cls");

		cout << line << endl;
		runA->Run();
		runB->Run();

		cout << line << endl;

		if (runA->CheckEndLine(endLine)
			|| runB->CheckEndLine(endLine)

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
	}*/

}
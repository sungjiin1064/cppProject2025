

// Winmm.lib : Window Multi Media Library
// 추가방법 : 프로젝트우클릭-속성-링커-입력-추가종속성(편집) 에 입력
//bool isSound = PlaySound(_T("sound.wav"), NULL, SND_ASYNC);
// SND_ASYNC : 아래의 코드와 별개로 파일이 실행된다. 
// SND_SYNC  : 사운드 파일이 전부 실행되고 난 후에 아래의 코드가 실행된다.

#include "Common.h"
#include "SoundUtil.h"
#include "Runner.h"

int main()
{
	SoundUtil::PlayBGM(_T("sound.wav"));

	Runner* runA = new Player();
	Runner* runB = new Runner("B");
	Runner* runC = new Runner("C");
	Runner* runD = new Runner("D");


	string line = "==============================================";
	int endLine = line.length();

	while (true)
	{
		Sleep(100);
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
	
}
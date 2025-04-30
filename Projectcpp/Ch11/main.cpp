
#include "Runner.h"
#include "Utility.h"

int main()
{	
	Runner* runA = new Runner("( ><)");
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
	}
	
}

#include "Common.h"
#include <Windows.h> 
#include <tchar.h>

// Winmm.lib : Window Multi Media Library
// �߰���� : ������Ʈ��Ŭ��-�Ӽ�-��Ŀ-�Է�-�߰����Ӽ�(����) �� �Է�

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
	}*/

}
#include "Game.h"

struct Player
{
	// �÷��̾��� ��ǥ �����͸� ����
	int xPos;
	int yPos;
	string name;

	Player(int xPos, int yPos, string name) :xPos(xPos), yPos(yPos), name(name) 
	{}


	// ��ǥ�� ��������� �Լ��� �����ϱ�
	void ShowInfo();	
	void ChangPos(int x, int y);	
};
#include "Game.h"

struct Player
{
	// 플레이어의 좌표 데이터를 정의
	int xPos;
	int yPos;
	string name;

	Player(int xPos, int yPos, string name) :xPos(xPos), yPos(yPos), name(name) 
	{}


	// 좌표를 기능적으로 함수로 구현하기
	void ShowInfo();	
	void ChangPos(int x, int y);	
};
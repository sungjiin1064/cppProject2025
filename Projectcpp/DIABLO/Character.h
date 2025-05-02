#pragma once

//#include "Common.h"
#include "Image.h"

class Character
{
private:

public:
	int posX;
	int posY;
	int ATK;
	int HP;
	string NAME;
	char Image[UNIT_HEIGHT][UNIT_WIDTH+1];

	Character(int x, int y, int attack, int hp, string name,char Image[UNIT_HEIGHT][UNIT_WIDTH + 1])
		: posX(x), posY(y), ATK(attack), HP(hp),NAME(name) 
	{
		for (int y = 0;y < UNIT_HEIGHT;y++)
		{
			for (int x = 0;x < UNIT_WIDTH + 1;x++)
			{
				this->Image[y][x] = Image[y][x];
			}
		}
	}

	void SelectImage();
	

};

class Barbarian : public Character
{
public:
	
public:
	Barbarian(int x, int y, int attack, int hp, string name, char Image[UNIT_HEIGHT][UNIT_WIDTH + 1])
		: Character(x,y,attack,hp,name,Image) { }
};

class Amazon : public Character
{
public:

public:
	Amazon(int x, int y, int attack, int hp, string name, char Image[UNIT_HEIGHT][UNIT_WIDTH + 1])
		: Character(x, y, attack, hp, name, Image) { }
};








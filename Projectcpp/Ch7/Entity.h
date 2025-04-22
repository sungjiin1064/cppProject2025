#pragma once

/*
* 
*/

class Entity
{
protected:
	int HP;
	int ATK;
	int DEF;

public:
	int GetHP();
	int GetATK();
	int GetDEF();
	void SetHP(int value);
	void SetATK(int value);
	void SetDEF(int value);

};


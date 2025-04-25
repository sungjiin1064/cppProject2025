#pragma once

#include "Common.h"

class Weapon
{
private:
	string name;
	int lv;
	int baseATK;
	int weight;

	int DoUpgrade();

public:
	Weapon(string name, int base, int weight)
		: name(name),lv(1),baseATK(base),weight(weight){ }	
	Weapon(string name, int base, int weight)
		: name(name), lv(lv), baseATK(base), weight(weight){ }

public:
	void ShowInfo();
	void Attack();

};

class Spaer : public Weapon
{
public:
	Spear(string name, int base, int weight)
		:Weapon(name,lv,base,weight){ }
public:
	void Attack();
};

class Sword : public Weapon
{
public:
	void Attack();
};


#pragma once

#include "Common.h"

class Weapon
{
protected:
	string name;
	int lv;
	int baseAtk;
	int weight;

	int DoUpgrade();

public:
	Weapon(string namee, int baseAtkk, int weightt)
		: name(namee), lv(1), baseAtk(baseAtkk), weight(weightt) { }
	Weapon(string namee, int lvv, int baseAtkk, int weightt)
		: name(namee), lv(lvv), baseAtk(baseAtkk), weight(weightt){};

public:
	void ShowInfo();
	virtual void Attack();

};

class Spear : public Weapon
{
private: 
	int specialAtk;
public:
	
	Spear(string namee, int lvv,int baseAttkk, int weightt, int specialAtkk )
		: Weapon(namee,lvv,baseAttkk,weightt), specialAtk(specialAtkk) { }
public:
	void Attack() override;
};

class Sword : public Weapon
{
public:
	Sword(string namee, int lvv, int baseAttkk, int weightt)
		: Weapon(namee,lvv, baseAttkk,weightt) { }

public:
	void Attack() override;
};

class  Arrow : public Weapon
{
public:
	Arrow(string namee, int lvv, int baseAttkk, int weightt)
		: Weapon(namee,lvv, baseAttkk,weightt) { }

public:
	void Attack() override;

};
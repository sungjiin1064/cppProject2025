#pragma once

#include "Common.h"



enum AttackType
{

};

class CharacterClass 
{
public: 
	string name;
public:
	CharacterClass(string namee) : name(namee) {}
public:
	
	void ShowInfo();
	virtual void Attack() {};
};

class Barbarian : public CharacterClass
{
public:
	Barbarian(string namee): CharacterClass(namee){}
public:
	void Attack();
};

class Paladin : public CharacterClass
{
public:
	Paladin(string namee) : CharacterClass(namee) {}
public:
	void Attack();
};

class Amazon : public CharacterClass
{
public:
	Amazon(string namee) : CharacterClass(namee) {}
public:
	void Attack();
};

//class Sorcerress : public CharacterClass






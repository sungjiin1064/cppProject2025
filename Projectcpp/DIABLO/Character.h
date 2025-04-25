#pragma once

#include "Common.h"



enum AttackType
{

};

class CharacterClass 
{
public:
	void ShowInfo();
	virtual void Attack();
};

class Barbarian : public CharacterClass
{
public:
	void Attack();
};

class Paladin : public CharacterClass
{
public:
	void Attack();
};

class Amazon : public CharacterClass
{
public:
	void Attack();
};

class Sorcerress : public CharacterClass
{
public:
	void Attack();
};





#pragma once

#include "Common.h"

// 디아블로2

enum AttackType
{

};

class CharacterClass // 공격타입(근접,원거리), 스킬(공통스킬)
{
public:
	void ShowInfo();
	virtual void Attack();
};

class Barbarian : public CharacterClass // 근접, 고유스킬(휠윈드)
{
public:
	void Attack();
};

class Paladin : public CharacterClass // 근접, 고유스킬(망치돌리기)
{
public:
	void Attack();
};

class Amazon : public CharacterClass// 원거리, 고유스킬(
{
public:
	void Attack();
};

class Sorcerress : public CharacterClass
{
public:
	void Attack();
};





#pragma once

#include "Common.h"

// ��ƺ��2

enum AttackType
{

};

class CharacterClass // ����Ÿ��(����,���Ÿ�), ��ų(���뽺ų)
{
public:
	void ShowInfo();
	virtual void Attack();
};

class Barbarian : public CharacterClass // ����, ������ų(������)
{
public:
	void Attack();
};

class Paladin : public CharacterClass // ����, ������ų(��ġ������)
{
public:
	void Attack();
};

class Amazon : public CharacterClass// ���Ÿ�, ������ų(
{
public:
	void Attack();
};

class Sorcerress : public CharacterClass
{
public:
	void Attack();
};





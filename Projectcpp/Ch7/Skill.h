#pragma once

/*
* A,B ������.
* A(�����) - B(����)
* A.ĳ���� B.��ų
*/

/*
* ��ų�� ������ �Ѵ�.
* ��ü : ����, ����, ����Ʈ
* ��ų. Use�Լ�. skill.Use()
*
* A������. Skill skill; skill.Use();
*
* skill.mana stat,effect
*
* C������
*/

#include <iostream>
using namespace std;
//using std::cout;
//using std::cin;
//using std::endl;
//using std::string;

class Mana
{
public:
	void Use();
};

class Stat
{
public:
	void Use();
};

class Effect
{
public:
	void Use();
};

class Skill
{
private: // �ܺο��� ����� �� ���� ������� ����.
	Mana mana;
	Stat stat;
	Effect effect;

	void manaUse();
	void ststUse();
	void effectUse();
public:

	
	/// <summary>
	/// ������ ������ ��� �� ����Ʈ�� ��µ˴ϴ�.
	/// </summary>
	void Use();
};


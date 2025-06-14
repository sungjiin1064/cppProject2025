#pragma once

/*
* A,B 개발자.
* A(상급자) - B(신입)
* A.캐릭터 B.스킬
*/

/*
* 스킬을 만들어야 한다.
* 객체 : 마나, 스텟, 이펙트
* 스킬. Use함수. skill.Use()
*
* A개발자. Skill skill; skill.Use();
*
* skill.mana stat,effect
*
* C개발자
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
private: // 외부에서 사용할 때 직접 사용하지 말라.
	Mana mana;
	Stat stat;
	Effect effect;

	void manaUse();
	void ststUse();
	void effectUse();
public:

	
	/// <summary>
	/// 마나를 스탯을 사용 후 이팩트가 출력됩니다.
	/// </summary>
	void Use();
};


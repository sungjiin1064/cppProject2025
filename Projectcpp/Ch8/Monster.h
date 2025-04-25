#pragma once

#include "Common.h"

class Monster
{

};

/*
* virtual 키워드를 
*/

class Attacker
{
public:
	void Attack();
};

class Flyer
{

};

class Unit // 유닛은 모두 공격가능한가? 공격을 못할수 도 있다.
{
	Attacker* attacker;
	Flyer* flyer;

	bool isAttackable;
public:
	Unit()
	{
		attacker = new Attacker();
	}
	Unit(bool attackable)
	{
		isAttackable = attackable;
		if (isAttackable)
		{
			attacker = new Attacker();
		}
	}
public:
	Attacker* ReturnAttacker();

	virtual void Attack();	
	void Stop();
	void Move();
	void Patrol();
	void Hold();
	virtual void UseSkill();
};

class Factory
{

};

class Nexus : public Factory
{

};

class GateWay : public Factory
{

};

class Probe : public Unit
{
public:
	Probe(bool attackable) : Unit(attackable) {}

	void Attack();
	void UseSkill();
};

class Zealot : public Unit
{
public:
	void Attack();
	void UseSkill();
};

class Dragoon : public Unit
{
public:
	void Attack();
	void UseSkill();
};
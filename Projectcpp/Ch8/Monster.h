#pragma once

#include "Common.h"

class Monster
{

};

/*
* virtual Ű���带 
*/

class Attacker
{
public:
	void Attack();
};

class Flyer
{

};

class Unit // ������ ��� ���ݰ����Ѱ�? ������ ���Ҽ� �� �ִ�.
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
#pragma once

#include <iostream>
using namespace std;

/*
* �������̵�(override)
*
* Monster::Attack();
* Slime::Attack();
* Slime���忡�� 2���� Attack�߿� �θ��� �Լ��� ��ü�ؼ� ���
*/

/*
* virtual, override
*
* virtual : �ڵ尡 �������� �ʴ´�. �ٸ� ������ �� �Լ��� ã�Ƽ� ����ض�.
* override : ���� �̸��� �Լ��� �ڽĿ��� �����ϸ� �θ��� �ڵ尡 ��������.
*
* Ȯ�强 ����. ���� �߰��� �ڵ��� ������ �߰��� �� ����.
*/

class ElementTYPE
{
public:
};

class Monster
{
protected:
	int lv;
	int defaultATK;
	int finalATK;
	ElementTYPE type;

public:
	Monster() {}
	Monster(int lv, int defaultATK) : lv(lv), defaultATK(defaultATK) {}

public:
	virtual void Attack();

	void CalculateFinalATK();
};

class Slime : public Monster
{
public:
	Slime(int lv, int defaultATK) : Monster(lv, defaultATK) {}
public:
	void Attack() override;
};

class Orc : public Monster
{
public:
	Orc(int lv, int defaultATK) : Monster(lv, defaultATK) {}
public:
	void Attack() override;
};
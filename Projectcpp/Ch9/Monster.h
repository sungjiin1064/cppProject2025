#pragma once

#include <iostream>
using namespace std;

/*
* 오버라이드(override)
*
* Monster::Attack();
* Slime::Attack();
* Slime입장에서 2개의 Attack중에 부모의 함수를 대체해서 사용
*/

/*
* virtual, override
*
* virtual : 코드가 존재하지 않는다. 다른 곳에서 이 함수를 찾아서 사용해라.
* override : 같은 이름의 함수를 자식에서 선언하면 부모의 코드가 숨겨진다.
*
* 확장성 문제. 새로 추가할 코드의 개성을 추가할 수 없다.
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
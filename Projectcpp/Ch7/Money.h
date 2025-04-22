#pragma once

/*
* Player클래스 안에서 사용되는 Money.
*/

class GameMoney
{
public:
	void Use();
	void Add();
};

class Gem
{
public:
	void Use();
	void Add();
};

class Money
{
private:
	GameMoney gameMoney;
	Gem       gem;

public:
	void Add();
	void Use();
};


#pragma once

/*
* PlayerŬ���� �ȿ��� ���Ǵ� Money.
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


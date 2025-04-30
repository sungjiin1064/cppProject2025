#pragma once

#include "SoundUtil.h"
#include "Common.h"

class Runner
{
private:
	bool isEnd;

protected:
	int run;
	int minSpeed;
	int maxSpeed;
	string symbol;

	virtual void SetMaxSpeed();
	void DrawMoveDistance();
	virtual void SetShape();

public:
	Runner() : run(0),isEnd(false), minSpeed(1), maxSpeed(2), symbol("E") {}
	Runner(string symbol) : run(0), isEnd(false), minSpeed(1), maxSpeed(2), symbol(symbol) {}

	void Run();
	bool CheckEndLine(int length);
};

class Player : public Runner
{
protected:
    void SetMaxSpeed() override;	
	void SetShape() override;
	

public:
	Player() : Runner()
	{
		symbol = "P";
	}
	Player(string symbol) : Runner(symbol) {}


};

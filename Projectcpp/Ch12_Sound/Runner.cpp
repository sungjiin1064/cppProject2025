#include "Runner.h"

void Runner::SetMaxSpeed()
{
	run += RandomUtil::GetRandomInt(maxSpeed);
}

void Runner::DrawMoveDistance()
{
	for (int i = 0; i < run;i++)
	{
		cout << " ";
	}
}

void Runner::SetShape()
{
	cout << symbol << endl;
}

void Runner::Run()
{
	SetMaxSpeed();
	DrawMoveDistance();
	SetShape();	
}

bool Runner::CheckEndLine(int length)
{
	if (run >= length)
	{
		isEnd = true;
	}
	else
	{
		isEnd = false;
	}

	return isEnd;
}

void Player::SetMaxSpeed()
{
	int applyMaxSpeed = maxSpeed + 1;
	run += RandomUtil::GetRandomInt(maxSpeed);
}

void Player::SetShape()
{
	int percent = RandomUtil::GetRandomInt(100);

	if (percent > 50)
	{
		cout << "~" << symbol << endl;
	}
	else
	{
		cout <<  symbol << endl;
	}

}



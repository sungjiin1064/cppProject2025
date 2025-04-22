#pragma once

#include <iostream>
#include "Entity.h"
using namespace std;
enum BehaviorPattern
{
	AGGRESSIVE,DEFENSIVE, COWARD
};

class Enemy : public Entity
{
private:
	BehaviorPattern currentPatern;

	void Attacked();
	void Defence();
	void Recovery();
	void BehaviorAI();

public:
	void Action();
};


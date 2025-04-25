#pragma once

#include "Character.h"

class User
{
private:
	CharacterClass* myClass;

public:
	void SelectClass(CharacterClass* cClass);

	void Attack();
};


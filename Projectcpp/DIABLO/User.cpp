#include "User.h"

void User::SelectClass(CharacterClass* cClass)
{
	myClass = cClass;
}

void User::Attack()
{
	myClass->Attack();
}

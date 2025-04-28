#include "User.h"

void User::SelectClass(CharacterClass* selectClass)
{
	myclass = selectClass;
}

void User::Attack()
{
	myclass->Attack();
}

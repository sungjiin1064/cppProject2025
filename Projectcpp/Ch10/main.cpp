#pragma once

#include "Common.h"
#include "Weapon.h"

int main()
{
	Weapon weapon("·Õ¼Òµå", 1, 3, 5);
	weapon.ShowInfo();

	Weapon weapon2("¼ô¼Òµå", 1, 4, 7);
	weapon.ShowInfo();

	weapon2.ShowInfo();
	weapon2.Attack();

	

	
}
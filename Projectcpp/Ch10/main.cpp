#pragma once

#include "Common.h"
#include "Weapon.h"

int main()
{
	Weapon weapon("�ռҵ�", 1, 3, 5);
	weapon.ShowInfo();

	Weapon weapon2("���ҵ�", 1, 4, 7);
	weapon.ShowInfo();

	weapon2.ShowInfo();
	weapon2.Attack();

	

	
}
#pragma once

#include "Common.h"
#include "Weapon.h"
#include "UpgradeSystem.h"

int main()
{
	/*Weapon weapon("�ռҵ�", 1, 3, 5);
	weapon.ShowInfo();

	Weapon weapon2("���ҵ�", 1, 4, 7);
	weapon.ShowInfo();

	weapon2.ShowInfo();
	weapon2.Attack();*/

	Spear spear("â", 1, 5, 2, 5);
	Sword sword("Į", 1, 4, 2);
	Arrow arrow("Ȱ", 1, 4, 2);
	spear.Attack();
	sword.Attack();
	cout << endl;
	
	Weapon* wPtr = &spear;
	Weapon* wPtr1 = &sword;
	wPtr->Attack();
	wPtr1->Attack();

	UpgradeSystem upgradeSystem;
	upgradeSystem.UnitAtk(&spear);
	upgradeSystem.UnitAtk(&arrow);


	
}
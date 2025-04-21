
#include "OOP.h"
#include "HP.h"
#include "Player.h"
#include "Enemy.h"

int main()
{
	Example1();

	Player player;
	Enemy enemy;

	player.AttackedBy(100);
	player.Recovery(50);
	enemy.AttackedBy(100);
	enemy.Recovery(50);
}
#include "Enemy.h"

void Enemy::MoveToPoint(CharacterAll& player, CharacterAll& slime)
{
	if ( posX <= 24)
	{
		IsBattle(player, slime);
	}
	else
	{
		posX--;
	}
}

void Enemy::SetBattle(char Image[UNIT_HEIGHT][UNIT_WIDTH + 1], CharacterAll& player, CharacterAll& slime)
{
	ChangeImage();
	MoveToPoint(player,slime);
	ShowImage(Image);
	//Sleep(200);

}

void Enemy::IsBattle(CharacterAll& player, CharacterAll& slime)
{
	static bool ShowAttack = true;

	if (ShowAttack)
	{
		PlayerIdle;
		SlimeIdle;
	}
	else
	{
		player.hp -= slime.attack;
		slime.hp -= player.attack;

		PlayerBattle;
		SlimeBattle;

		if (player.hp <= 0 && slime.hp <= 0)
		{
			player.hp = 0;
			slime.hp = 0;
		}
	}
	ShowAttack != ShowAttack;
}
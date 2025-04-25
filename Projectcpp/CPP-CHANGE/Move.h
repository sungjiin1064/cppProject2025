
#include "Common.h"
#include "Character.h"
#include "GameManager.h"


class Moving : public GameManager
{
public:
	void Position(int sleep)
	{
		userPlayer.SetBattle(PlayerIdle);
		currentEnemy.SetBattle(SlimeIdle, userPlayer, currentEnemy);
		Sleep(sleep);

		userPlayer.SetBattle(PlayerBattle);
		currentEnemy.SetBattle(SlimeMove, userPlayer, currentEnemy);
		Sleep(sleep);
	}
};
#include "Skill.h"
#include "Money.h"
#include "Character.h"
#include "Enemy.h"
#include "Entity.h"
// A ������ player. <- (��ų), (��ȭ)
// B ������                    Money



class Player : public Entity
{
private:
	Skill skill;
	Money money;
public:

};

 
class BattleManager
{
private:
	Player player;
	Enemy enemy;

	bool isEnd;

	void EnemyTurn()
	{
		enemy.Action();
	}
	void PlayerTurn()
	{
		
	}
public:
	void Battle()
	{
		while (true)
		{
			PlayerTurn();
			EnemyTurn();

			if (isEnd)
			{
				break;
			}
		}
	}
};

int main()
{
	Skill skill;
	Money money;
	skill.Use();

	money.Use();

	Character player1;

	Enemy enemy;
	enemy.Action();
}
#include "Skill.h"
#include "Money.h"
#include "Character.h"
#include "Enemy.h"
#include "Entity.h"
// A 개발자 player. <- (스킬), (재화)
// B 개발자                    Money



class Player : public Entity
{
private:
	Skill skill;
	Money money;
public:

};

int main()
{
	Skill skill;
	Money money;
	skill.Use();

	money.Use();

	Character player1;

	player1.Attacked();
}
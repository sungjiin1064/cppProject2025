#include "Skill.h"

void Mana::Use()
{
	cout << "마나를 사용합니다."<<endl;
}

void Stat::Use()
{
	cout << "스탯을 사용합니다."<<endl;
}

void Effect::Use()
{
	cout << "이팩트를 사용합니다."<<endl;
}

void Skill::Use()
{
	mana.Use();
	stat.Use();
	effect.Use();
}

#include "Skill.h"

void Mana::Use()
{
	cout << "������ ����մϴ�."<<endl;
}

void Stat::Use()
{
	cout << "������ ����մϴ�."<<endl;
}

void Effect::Use()
{
	cout << "����Ʈ�� ����մϴ�."<<endl;
}

void Skill::Use()
{
	mana.Use();
	stat.Use();
	effect.Use();
}

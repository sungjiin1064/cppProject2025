#include "Weapon.h"

int Weapon::DoUpgrade()
{
    return lv *(baseATK + weight);
}

void Weapon::ShowInfo()
{
    cout << name << " 최종 공격력 : " << DoUpgrade << endl;
}

void Weapon::Attack()
{
    cout << DoUpgrade() << "만큼 공격을 합니다." << endl;
}

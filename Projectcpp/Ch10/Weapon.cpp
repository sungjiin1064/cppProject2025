#include "Weapon.h"

int Weapon::DoUpgrade()
{
    return lv *(baseATK + weight);
}

void Weapon::ShowInfo()
{
    cout << name << " ���� ���ݷ� : " << DoUpgrade << endl;
}

void Weapon::Attack()
{
    cout << DoUpgrade() << "��ŭ ������ �մϴ�." << endl;
}

#include "Weapon.h"

int Weapon::DoUpgrade()
{
    return lv *(baseAtk + weight);
}

void Weapon::ShowInfo()
{
    cout << name << " 최종 공격력 : " << DoUpgrade() << endl;
}

void Weapon::Attack()
{
    cout << DoUpgrade();
}

void Spear::Attack()
{
    cout << "창으로 찔러 "; 
    Weapon::Attack();
    cout<< " 만큼 데미지를 주었습니다." << endl;
}

void Sword::Attack()
{
    cout << name<<"칼을 휘둘러 ";
    Weapon::Attack();
    cout<< " 만큼 데미지를 주었습니다." << endl;
}

void Arrow::Attack()
{
    cout << "활을 당겨 ";
    Weapon::Attack();
    cout << " 만큼 데미지를 주었습니다." << endl;

}


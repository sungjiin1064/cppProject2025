#include "Weapon.h"

int Weapon::DoUpgrade()
{
    return lv *(baseAtk + weight);
}

void Weapon::ShowInfo()
{
    cout << name << " ���� ���ݷ� : " << DoUpgrade() << endl;
}

void Weapon::Attack()
{
    cout << DoUpgrade();
}

void Spear::Attack()
{
    cout << "â���� �� "; 
    Weapon::Attack();
    cout<< " ��ŭ �������� �־����ϴ�." << endl;
}

void Sword::Attack()
{
    cout << name<<"Į�� �ֵѷ� ";
    Weapon::Attack();
    cout<< " ��ŭ �������� �־����ϴ�." << endl;
}

void Arrow::Attack()
{
    cout << "Ȱ�� ��� ";
    Weapon::Attack();
    cout << " ��ŭ �������� �־����ϴ�." << endl;

}


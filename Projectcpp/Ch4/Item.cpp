//��ȯ�� ��ü�̸�::�Լ��̸�()  ��ü�� ����ִ� �Լ��� �����ϴ� ���

#include "Item.h"

void Item::ShowItemInfo()
{
	cout << "������ �̸� : " << name << ", ������ Ÿ�� : " << ReturnByTypeName() << ", ���� : " << price << ", ���� : " << itemCount << endl;

}

string Item::ReturnByTypeName()
{

	switch (type)
	{
	case ARMOR: return "ARMOR";
	case WEAPON: return "WEAPON";
	case USEABLE: return "USEABLE";
	default: return "���� ������ ��µǾ����ϴ�.";
	}

}

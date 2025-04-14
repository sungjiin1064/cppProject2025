/*
* ��ǥ : cpp���� ȭ�� �����ϱ�
* ���� : Windows.h GoToXY() �籸��
* ����� : cpp������� ������ϱ�
* �̷� : namespace
*/

/*
* �̸������� ����� ���� ����
* 1. �ٸ� �� ������Ʈ�� copy paste ��ĥ �� �߻��ϴ� ������ �ּ�ȭ �� �� �ִ�.
* 2. �̸������� ������ �̸��� ���ؼ� �ڵ带 �з��� �� �ִ�.
*/

#include <iostream>
#include <Windows.h>
#include <conio.h>
#include <stdio.h>
#include <string>  // ���ڿ��� ����� �����ϰ� �ִ� ���̺귯��
#include <iomanip> // input output manipulate ���̺�ζ�

namespace ConsoleUtils
{
	void GoToXY(int x, int y)
	{
		COORD pos = { x,y };
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
	}
}

void InputPlayerKey(int& x, int& y)
{
	if (_kbhit)
	{
		if (GetAsyncKeyState(VK_LEFT))
		{
			x--;
		}
		else if (GetAsyncKeyState(VK_RIGHT))
		{
			x++;
		}
		else if (GetAsyncKeyState(VK_UP))
		{
			y--;
		}
		else if (GetAsyncKeyState(VK_DOWN))
		{
			y++;
		}
	}
}

struct Item
{
	//char name[20]; //std::string �̸��� ũ�⸦ �ڵ����� �Ҵ����ش�.
	std::string name;
	int price;
};

//struct Item1
//{
//	std::string name;
//	int price;
//};
// Item ����ü�� �����ڸ� �޾ƿͼ� �̸��� ���ϴ� �̸����� �����ϰ� ������ ���ϴ� �������� �����ϴ� �Լ��� �����.

// const���, ������ ���, Item ����ü�� ���

// SetItem(item1, "Sword", 100)
void MySetItem()
{
	
}

void SetItem(Item& item, const std::string nName, int price)
{
	item.name = nName; // �ܺο��� ������ item�� nName���� �������ش�
	item.price = price;
}

void SetItem(Item& SetItem, const Item& copyItem) // ShopItem�׸�
{
	SetItem.name = copyItem.name;
	SetItem.price = copyItem.price;
}

// default �Ű� ���� : �Լ� ȣ�� �ÿ� �Ű� ������ �����ϰ� �Է��ϸ� �ڵ����� ������ ���Եȴ�.
// ShowShop(Shop, 3, 10, 10)
// shop, length << default�� �ƴϱ� ������ �պκ� �ۼ������ �ǰ�,
void ShowShop(Item shop[], int length, int x = 10, int y = 10)
{
	ConsoleUtils::GoToXY(x, y);
	// #incluyde <iomanip> std::left, right ����, ������ ����
	// std::setw(20); ���ڿ��� ũ�Ⱑ 20������ �����. ���ڿ��� ������� ���鹮�ڷ� ����Ѵ�.
	std::cout << std::left << std::setw(20) << "������ �̸�" << "|" << std::setw(10) << "������ ����" << std::endl;

	for (int i = 0; i < length; i++)
	{
		//std::cout << "�̸� : " << ItemA.name << ", ���� : " << ItemA.price << std::endl;
		//std::cout << "�̸� : " << shop[i].name << ", ���� : " << shop[i].price << std::endl;
		ConsoleUtils::GoToXY(x, y + 1 + i);
		std::cout << std::left << std::setw(20) << shop[i].name << "|" << std::setw(10) << shop[i].price << "|" << std::endl;
	}
}

// Shop�迭, ������ �ε���, Item�迭 �κ��丮.
// copyItem
// ����(Item �迭)�� �ִ� �����͸� �����ؼ�, ������ ������ �迭�� �����´�. �迭�� �����͸� �����Ѵ�.

Item GetItem(Item shop[], int length, int index)
{
	if (index > length)
	{
		std::cout << "��ϵ��� ���� �������� �����Ͽ� 0��° �������� ��ȯ�˴ϴ�." << std::endl;
		return shop[0];
	}
	return shop[index];
}

void AddInventory(Item inventory[], int length, int index, const Item& buyItem)
{
	inventory[index].name = buyItem.name;
	inventory[index].price = buyItem.price;
}

int main()
{
	std::cout << "������ ����" << std::endl;
	Item ItemA;
	Item ItemB;
	Item ItemC;
	SetItem(ItemA, "Apple", 100);
	SetItem(ItemB, "Banana", 500);
	SetItem(ItemC, "Candy", 50);
	Item Shop[3] = { ItemA, ItemB, ItemC };

	Item Inventory[3];

	ShowShop(Shop, 3, 0, 0);
	std::cout << "�����ϰ� ���� ������ ��ȣ�� �Է����ּ���" << std::endl;
	int input;
	std::cin >> input;

	AddInventory(Inventory, 3, 0, GetItem(Shop, 3, input - 1));

	// �������� ���� �κ��丮�� �������� �߰��ϴ� ��.
	// ���� �����Ͱ� �������� �ִµ� ���� ��Ʋ �߿� ������ ���͸� �����Ѵ�.
	// ���� �����͸� �ҷ����� ��
	// stage������ �ִµ� Ư�� ���������� ȣ���ϰ� �ʹ�.
	// ����, Stage, ������

	
	std::cout << "�κ��丮�� ������ Ȯ��" << std::endl;
	std::cout << Inventory[0].name << ", " << Inventory[0].price << std::endl;

	std::cout << "�̸� : " << ItemA.name << " , ���� : " << ItemA.price << std::endl;
	std::cout << "�̸� : " << ItemB.name << " , ���� : " << ItemB.price << std::endl;
	_getch();

	// ���� 1. 10,10��ǥ�� �÷��̾��� ���� �ؽ�Ʈ�� ����غ�����
	ConsoleUtils::GoToXY(10, 10);
	std::cout << "�÷��̾��� ����";

	// ���� 2. �÷��̾��� �̸��� �Է¹޾Ƽ� �÷��̾��� ���� �ؽ�Ʈ �� �� �Ʒ��� ����ϱ�
	// �Է� ���� ������ �޾Ƽ� 1�� ������ �÷��̾� �̸� �߰��ϱ�
	//                       2�� ������ �÷��̾� ������ ����ϱ�

	char name[10];

	while (true)
	{
		int inputNumber = 0;

		std::cout << "1. ������� �̸��� ������ �� �ֽ��ϴ�. 2. �÷��̾��� ������ ȭ�鿡 ����մϴ�." << std::endl;
		std::cin >> inputNumber; // ���� �ּ� ������ ����ϰ�, �ÿ��� ���ϴµ� �̺κ��� �� ���ذ� �Ȱ��ϴ�.

		if (inputNumber == 1)
		{
			std::cout << "�̸��� �Է����ּ���.";
			std::cin >> name;
		}
		else if (inputNumber == 2)
		{
			ConsoleUtils::GoToXY(10, 10);
			std::cout << "�÷��̾��� ����";
			ConsoleUtils::GoToXY(10, 11);
			std::cout << "�÷��̾��� �̸� :" << name;
			_getch();
		}
		else
		{
			break;
		}
		system("cls");
	}

	int x = 0, y = 0;

	while (true)
	{
		system("cls");
		InputPlayerKey(x, y);
		std::cout << "�÷��̾��� ��ǥ : " << "[" << x << "," << y << "]" << std::endl;
		ConsoleUtils::GoToXY(x, y);
		std::cout << "��";
		Sleep(100);
	}

}




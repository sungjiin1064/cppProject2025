#include "Game.h"



enum ItemType
{
	ARMOR,
	WEAPON,
	USEABLE
};

struct Item
{
	string name;
	int         price;
	int         itemCount;
	ItemType    type;

	// ������ - ����ü�� �̸��� �����ؾ� �Ѵ�. + ()
	Item(string name, int price, int itemCount, ItemType type)
		: name(name),price(price),itemCount(itemCount), type(type)
	{}

	void ShowItemInfo();
	
	string ReturnByTypeName();

};
#pragma once

#include <iostream> // input output stream
#include <fstream>  // file stream
#include <sstream>  // string stream
using namespace std;

// ������ �������� Ÿ���� �ϳ��� �̸����� �������� ���ؼ� ����
class Item
{
public:
	int INDEX;
	string NAME;
	int PRICE;

public:
	Item():INDEX(0), NAME(""), PRICE(0){}
	Item(int index, string name,int price) : INDEX(index),NAME(name),PRICE(price){}
};

class DataHandler
{
public:
	// filename���� �޸��� ����. items(�޸����� ������ ���� �� �Ű�ü)
	int LoadItems(const string& filename, Item items[]);

};


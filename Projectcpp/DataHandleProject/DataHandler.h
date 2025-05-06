#pragma once

#include <iostream> // input output stream
#include <fstream>  // file stream
#include <sstream>  // string stream
using namespace std;

// 가져올 데이터의 타입을 하나의 이름으로 가져오기 위해서 구현
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
	// filename으로 메모장 열기. items(메모장의 정보를 저장 할 매개체)
	int LoadItems(const string& filename, Item items[]);

};


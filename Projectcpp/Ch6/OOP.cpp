#include "OOP.h"

void Example1()
{
	// �ܼ� â���� �����ϱ� ������ ��ǥ�� ������ �Ǹ� �ȵȴ�.
	// ����� �Ǽ��� �� �� ������, �Ǽ��� ã�� ���� �������� ���谡 �Ǿ� ���� �ʴ�.
	Point p1 = { -2, 8 };
	Point p2 = { 4, 10 };

	Point point(4, 6);
	cPoint cp1(3, 5);


	cp1.SetX(-3);
}

void Example2()
{
}

void Example3()
{
}

int cPoint::GetX() const
{
	return x;
}

int cPoint::GetY() const
{
	return y;
}

void cPoint::SetX(int amount)
{
	if (amount < 0)
	{
		cout << "" << endl;
	}
}

void cPoint::SetY(int amount)
{
	if (amount < 0)
	{
		cout << "" << endl;
	}
}



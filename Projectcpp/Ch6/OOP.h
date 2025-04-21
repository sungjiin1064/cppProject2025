#pragma once

#include <iostream>
using std::cout;
using std::cin;
using std::endl;
using std::string;

// ��ǥ   : �簢��,
// Ű���� : ���� ���� ������

// struct. �⺻ ���谡 public���� �Ǿ� �ְ� class�� private �� �Ǿ��ִ�.
struct Point
{
//private:
	int x;
	int y;

	Point(int x, int y) : x(x),y(y) {}
};


// ���� ���� ������
// private, public, protected

// private:
// public: ��ü

// class Ű����� �⺻������ private�� �����ȴ�

// ���� ���� : �ܺο��� ������� ���ϰ� �ϴ� ��
// �� �ܺο��� ����ϸ� �ȵǴ°�?
// �����ϰ� ������ �ڵ忡���� �ܺη� ����ǵ��� �Ѵ�.

#include <stdexcept>

class cPoint
{
private:
	int x;
	int y;
public:
	//  ������ �ڵ����� ������ִ� ���
	// ���� �����ڸ� �����ϸ� ����Ʈ �����ڰ� �ڵ����� ��������� �ʴ´�.

	cPoint() {}

	cPoint(int outx, int outy) 
	{
		if (outx < 0 || outy < 0)
		{
			cout << "cPoint�� ������ �� ������ �߻��Ͽ����ϴ�." << endl;
			// ���� ó��
			throw std::invalid_argument(".");
		}

		x = outx;
		y = outy;
	}

	int GetX() const;
	int GetY() const;

	void SetX(int amount);
	void SetY(int amount);
};

class Rectangle
{
private:
	Point leftUpPoint;     // x�۰� yū
	Point rightDownPoint;  // xũ�� y����

public:

	Rectangle() {}

	Rectangle(cPoint p1, cPoint p2)
	{
		if (p1.GetX() < p2.GetX() && p1.GetY() > p2.GetY())
		{
			leftUpPoint = p1;
			rightDownPoint = p2;
		}
		else
		{
			leftUpPoint = p2;
			rightDownPoint = p1;
		}
	}
	Rectangle(int x1, int x2, int y1, int y2)
	{
		cPoint newLeftUp;
		cPoint newRightDown;

		if (x1 < x2)
		{
			newLeftUp.SetX(x1);
			newRightDown.SetX(x2);
		}
		else if (x1 > x2)
		{
			newLeftUp.SetX(x2);
			newRightDown.SetX(x1);
		}
		else
		{
			cout << "x�� ��ǥ�� ���� �� �����ϴ�." << endl;
		}

		if (y1 < y2)
		{
			newLeftUp.SetY(y2);
			newRightDown.SetY(y1);
		}
		else if (y1 > y2)
		{
			newLeftUp.SetY(y1);
			newRightDown.SetY(y2);
		}
		else
		{
			cout << "y�� ��ǥ�� ���� �� �����ϴ�." << endl;
		}


		leftUpPoint = newLeftUp;
		rightDownPoint = newRightDown;
	}


	void Draw();
};

void Example1();
void Example2();
void Example3();
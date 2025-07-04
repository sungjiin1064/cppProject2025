#pragma once

// 객체지향프로그래밍 OOP(Object Oriented Programming)

#include <iostream>
using std::cout;
using std::cin;
using std::endl;
using std::string;

// 목표   : 사각형, 점, 콘솔
// 키워드 : 접근 제어 지시자 

// struct. 기본 설계가 public으로 되어 있고 class는 private 로 되어있다.
struct Point
{
// public으로 되어있는데 임의로 private: 으로 할수도 있음
	int x;
	int y;

	Point(int x, int y) : x(x),y(y) {}
};


// 접근 제어 지시자
// private, public, protected

// private: 객체 내부에서만 허용되는 접근 방식
// public: 객체 외부에서도 허용되는 접근 방식

// class 키워드는 기본적으로 private로 구현된다

// 정보 은닉 : 외부에서 사용하지 못하게 하는 것
// 왜 외부에서 사용하면 안되는가?
// 안전하게 구현된 코드에서만 외부로 노출되도록 한다.

#include <stdexcept>

class cPoint
{
private:
	int x;
	int y;
public:
	//  생성자 자동으로 만들어주는 기능
	// 직접 생성자를 선언하면 디폴트 생성자가 자동으로 만들어지지 않는다.

	cPoint() {}

	cPoint(int outx, int outy) 
	{
		if (outx < 0 || outy < 0)
		{
			cout << "cPoint를 생성할 때 에러가 발생하였습니다." << endl;
			// 예외 처리
			// 실행이 되면 코드가 멈추고 다음 내용을 출력한다.
			//throw std::invalid_argument(".");
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
	cPoint leftUpPoint;     // x작고 y큰
	cPoint rightDownPoint;  // x크고 y작은

public:

	Rectangle() {}

	Rectangle(cPoint p1, cPoint p2) // p1,p2 좌표가 lu,rd 형식이 아닐 경우에는 문제가 생길 수 있다
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
			cout << "x의 좌표가 같을 수 없습니다." << endl;
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
			cout << "y의 좌표가 같을 수 없습니다." << endl;
		}


		leftUpPoint = newLeftUp;
		rightDownPoint = newRightDown;
	}


	void Draw();
};

void Example1();
void Example2();
void Example3();
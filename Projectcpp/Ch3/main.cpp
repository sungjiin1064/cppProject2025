
#include <iostream>

/*
* x,y�� ������ ��ǥ�� �Լ��� �Ű������� �޾Ƽ� �ܺο��� ���� ����ǵ��� �ϴ� �Լ� 
  void PlayerInput(int& x, int& y);
* ��ȯ���� ���� �Լ�. 
  �̸��� PlayerInput(int& a, int& b) ȣ���� �� �ִ�.
  Ÿ�� �ؼ� : ������ ������, ������ �����͸� ������ �� �ִ�.
*/

/*
* ��ȯŸ�� �Լ��̸�(Ÿ�� �̸�, ...){ }
* 
* 1. ��ȯŸ�� - �����ڷ� ���Ǵ� ���, �ƴ� ���
* 2. �Ű����� - �����ڷ� ���Ǵ� ���, �ƴ� ���
*/

/*
* �Լ� �����ε�(overloading)
* �÷��̾��� x,y��ǥ�� �Է¹޾Ƽ� ��ǥ�� �����Ű�� �Լ�
* �÷��̾��� ��ǥ ����ü�� �Է¹޾Ƽ� ��ǥ�� �����Ű�� �Լ�
* ���� �̸� Ÿ�Ը� �ٸ��� ������ ��ǻ��(�����Ϸ�)�� ������ �� �ִ�.
*/

/*
* �Լ� �����ε�.
* c++�Լ��� ȣ���ϴ� ��� �˷��ش�. �̸�(Ÿ���̸�),
* �Լ� �����ε��� �Լ��� �̸��� �Լ��� �Ű������� Ÿ���� ������ �����Ѵ�.
*/

/*
* ������ ��
* - ��ȯ���� �޶� ���� �Լ��� �Ǵ��Ѵ�. void PlayerInput(). int PlayerInput() �����ε� �� �� ����.
* - �Ű� ������ �̸��� �޶� Ÿ���� ������ ������ �����ε� �� �� �ִ�.
* void PlayerInput(int x, int y);
* void PlayerInput(int a, int b);
*/

/*
* �����ڸ� ��ȯ���� ����ϴ� ���.
*/

int& ReturnRef()     // int& num1 = ReturnRef();
                     // num���� ���� 20�� �ְ� 5�� ���Ѵ�. num������ num1�� �ϰڴ�
	                 // num���� ���� �Լ��� ����Ǹ� �Ҹ��Ѵ�.
	                 // ��۸� ���۷���.
{
	int num = 20;
	num += 5;
	return num;
}

// ����ü �迭
// ������, ����, �κ��丮
// ���ؿ�� ������, �������� ũ�� ����,ū��
// ������ 3����, ����,�߰�,ū ������
// �����ڸ� �� ���信 �����غ���.

// c++������ typedef ��������
struct Pos
{
	int x;
	int y;
};

void PlayerInput(Pos& playerPos) // �̸� PlayerInput, �Ű����� 1�� Pos&
{
	playerPos.x += 1;
	playerPos.y += 1;
}

void PlayerInput(int& a, int& b)
{
	a += 1;
	b += 1;
}

int main()
{
	std::cout << "ch3 ����ü�� ������" << std::endl;

	int playerX = 0, playerY = 0;

	PlayerInput(playerX, playerY);
	std::cout << "PlayerInput ��� ���" << std::endl;
	std::cout << "x�� �� : " << playerX << " , " << "y�� �� : " << playerY << std::endl;

	Pos playerPos = { playerX, playerY };
	PlayerInput(playerPos);
	std::cout << "PlayerInput ��� ���" << std::endl;
	std::cout << "x�� �� : " << playerPos.x << " , " << "y�� �� : " << playerPos.y << std::endl;

	
}
#include <iostream> // ����� �Լ��� ����ϱ� ���� cpp ���̺귯��


/*
* cpp �߰��� ������ �����Ѵ�.
* 1. std:cout �м�
* 2. �ڵ忡�� "std::"����������
* 3. ��� : �ĺ���"count"�� ���ǵǾ� ���� �ʽ��ϴ�.
* Q. iostream �߰��ߴµ� �� "cout"ã�� �� ������?
* A. "cout" Ư���� ������ �����ϱ� ������ ã�� �� ����.
* Q2. �� Ư���� ������ ��� ����ؾ� �ϳ�?
* A. namespace�� ���� ���ذ� �ʿ�
*/

// Aȸ�� ACOM, Bȸ�� BCOM
// ACOM���� ���� goods BCOM���� ���� goods
// ������ : Ư�� Ű������ �̸����� ������ ��ǻ�Ͱ� �����ؼ� �Ǻ��� �� ����. - ������ �߻�
// ������ �̸��տ� �̸������� �߰����ش�.
// ACOM - good��.
// BCOM - good��.

namespace ACOM
{
	char goods[10];	
	int sum;
}

namespace BCOM
{
	char goods[10];
	int sum;
}

int main()
{
	std::cout << "Ch1" << std::endl;
	std::cout << "������ : �̸� ������ ���� ����" << std::endl;

	std::cin >> ACOM::goods;
	std::cout << "Aȸ���� ��ǰ �̸� : " << ACOM::goods << std::endl;
		
	std::cin >> BCOM::goods;
	std::cout << "Bȸ���� ��ǰ �̸� : " << BCOM::goods << std::endl;

	// ����1. ���ڸ� 5�� �Է��� �޾Ƽ� Aȸ���� �հ� ������ �� ����, ���ڸ� 5�� �Է��� �޾Ƽ� Bȸ���� �հ迡�� ������ ���ּ���.
	// Aȸ�� Bȸ�� �հ� ���� �̸��� int sum �����ϰ� �ۼ����ּ���.

	// 1. std::cin  int �� �Է� �ޱ�
	
	// 2. for�ݺ��� 5ȸ ���ϱ�
	// 
	// 3. �̸� ������ sum ������ �����ϰ� ����ϱ�

	int number = 0;

	for (int i = 0;i < 5;i++)
	{
		std::cout << i + 1 << "��ǰ�� ������ �Է����ּ���." << std::endl;
		std::cin >> number;
		// ������ �Է¹��� �Ŀ� Aȸ���� ������ �ǹ��ϴ� ������ ��������Ѵ�.
		ACOM::sum += number;
	}
	std::cout << "Aȸ���� ��ǰ�� ���� ���� :" << ACOM::sum << std::endl;

	for (int i = 0;i < 5;i++)
	{
		std::cout << i + 1 << "��ǰ�� ������ �Է����ּ���." << std::endl;
		std::cin >> number;
		// ������ �Է¹��� �Ŀ� Aȸ���� ������ �ǹ��ϴ� ������ ��������Ѵ�.
		BCOM::sum += number;
	}
	std::cout << "Bȸ���� ��ǰ�� ���� ���� :" << BCOM::sum << std::endl;

	// ToyProject1 ������Ʈ. c++�߰��� ������ ���ӿ� �����ϴ� �ð�.
	// ����1, ����2 ���� ������Ʈ. cpp �������� �̽��ϴ� �õ�.
	// namespace �������� ���ӿ� �����ϴ� ��
	// c���� ������Ʈ -> c++���� ������Ʈ ����
	// readme ���� ��¥ Change log
	
}


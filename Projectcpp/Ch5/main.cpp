
/*
* �ۼ��� : 2025-04-16
* ��  �� : ���� ����, ���� ����
*/

#include "Common.h"
#include "Person.h"

void Example()
{
	// ������ �����ϴ� ������ Ÿ��(int) ������ 2�� ����.
	int numA = 10;
	// numB�� numA�� ����Ǿ� �ִ� ���� B�� �ű�� �ʹ�.
	// numA�� ���� numB�� �����ϰ� �ʹ�.
	int numB = numA;
	// ������ �ּҸ� �����ϴ� ������ 2�� ����.
	int* numAptr = &numA;
	int* numBptr = numAptr;

	// numBptr�� �� �ּҿ� numAptr�� �� �ּ�, numA�� �ּ� ��� ������?

	cout << "numA�� �ּ� : " << &numA << endl;
	cout << "numAptr�� �ּ� : " << numAptr << endl;
	cout << "numBptr�� �ּ� : " << numAptr << endl;

	// �������� ���Կ����� ����� ���
	// numA,numB ���� �ٸ� ������ �����Ѵ�.
	// �ּҳ��� ���Կ����� ����� ���
	// �ּҰ� ����Ű�� ���� ����.

	// numA, numAptr, numBptr �ּ��� ���� ��� �����ϴ�.
	// �ش� �ּҸ� �ϳ��� �������� �����ϸ� �ٸ� �������� ������ �� �� ���Եȴ�.
}

int main()
{
	cout << "Ch5 : ������ ����" << endl;
	//Example();
	
	//Person human1 = {20}; // human1�̶�� ������ �����͸� �����ؼ� �־���� �Ѵ�.
	Person human1(20, "���谡"); // const char*
	Person human1Clone;
	Person human2(30, "�뺴");
	human1Clone.Clone(human1);	
	human1.Show();
	human1Clone.Show();
	human2.Show();
}
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <iostream>

int main()
{
 // c����� ����� style
	printf("c ����� �ڵ�\n");
	printf("�̸��� �Է����ּ���.\n");
	char name[20];
	scanf("%s", name);
	printf("�ɸ����� �̸� : %s\n\n",name );

	// cpp ����� style
	std::cout << "cpp ����� �ڵ�" << std::endl;
	std::cout << "�̸��� �Է����ּ���." << std::endl;
	std::cin >> name;
	std::cout << "�ɸ����� �̸� :" << name << std::endl;

	// ó�� ���� ����(cpp)
	// 1. �̸� : - namespace
	// 2. printf("%s", name) => cout << name ������ �����ε�
	// 3. ���� ����� �����Ѵ�. std::endl - \n
}

#include <iostream>
#include <stdio.h>

//int main()
//{
//	int a;
//	int b;
//	a = 10;
//	b = 20;
// 	//            v v  v   v      v v  v   
//	printf("a�� �� : %d �̰� b�� �� : %d �Դϴ�.\n", a,b);
//	printf("a�� �� : %d �̰� b�� �� : %d �Դϴ�.\n", a,b);
//	printf("a�� �� : %d �̰� b�� �� : %d �Դϴ�.\n", a,b);
//
//	std::cout << "a�� �� : ";
//	std::cout << a;
//	std::cout << " �̰�";
//	std::cout << " b�� �� : ";
//	std::cout <<    b;
//	std::cout << " �Դϴ�." << std::endl;
//	std::cout << "a�� �� : " << a << " �̰� "<< "b�� �� : " << b << " �Դϴ�." << std::endl;
//}


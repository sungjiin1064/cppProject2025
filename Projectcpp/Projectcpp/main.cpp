#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <iostream>

int main()
{
 // c언어의 입출력 style
	printf("c 입출력 코드\n");
	printf("이름을 입력해주세요.\n");
	char name[20];
	scanf("%s", name);
	printf("케릭터의 이름 : %s\n\n",name );

	// cpp 입출력 style
	std::cout << "cpp 입출력 코드" << std::endl;
	std::cout << "이름을 입력해주세요." << std::endl;
	std::cin >> name;
	std::cout << "케릭터의 이름 :" << name << std::endl;

	// 처음 보는 문법(cpp)
	// 1. 이름 : - namespace
	// 2. printf("%s", name) => cout << name 연산자 오버로딩
	// 3. 같은 기능을 수행한다. std::endl - \n
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
//	printf("a의 값 : %d 이고 b의 값 : %d 입니다.\n", a,b);
//	printf("a의 값 : %d 이고 b의 값 : %d 입니다.\n", a,b);
//	printf("a의 값 : %d 이고 b의 값 : %d 입니다.\n", a,b);
//
//	std::cout << "a의 값 : ";
//	std::cout << a;
//	std::cout << " 이고";
//	std::cout << " b의 값 : ";
//	std::cout <<    b;
//	std::cout << " 입니다." << std::endl;
//	std::cout << "a의 값 : " << a << " 이고 "<< "b의 값 : " << b << " 입니다." << std::endl;
//}


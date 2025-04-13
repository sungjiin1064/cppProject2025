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


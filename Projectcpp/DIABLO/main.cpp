
#include "Common.h"
#include "Character.h"
#include "User.h"

int main()
{
	Barbarian  baba;
	Paladin    pal;
	Amazon     ama;
	Sorcerress so;
		
	baba.Attack();
	pal.Attack();
	ama.Attack();
	so.Attack();

	
	// 케릭터클래스 어택함수에 버추얼을 붙이지 않으면 참조자를 붙이든 않붙이든 부모 함수가 호출
	// 케릭터클래스 어택함수에 버추얼을 붙이면 참조자를 붙이면 자식함수가호출, 붙이지않으면 부모참조자 호출
	CharacterClass& selectCharacter = baba; 
	CharacterClass& selectCharacter1 = pal;
	CharacterClass& selectCharacter2 = ama;
	CharacterClass& selectCharacter3 = so;

	selectCharacter.Attack();
	selectCharacter1.Attack();
	selectCharacter2.Attack();
	selectCharacter3.Attack();

	User user;


	user.SelectClass(&baba);

	user.Attack();
} 
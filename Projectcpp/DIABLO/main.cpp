
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

	
	// �ɸ���Ŭ���� �����Լ��� ���߾��� ������ ������ �����ڸ� ���̵� �ʺ��̵� �θ� �Լ��� ȣ��
	// �ɸ���Ŭ���� �����Լ��� ���߾��� ���̸� �����ڸ� ���̸� �ڽ��Լ���ȣ��, ������������ �θ������� ȣ��
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
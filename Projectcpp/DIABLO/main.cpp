
#include "Common.h"
#include "Character.h"
#include "User.h"

int main()
{
	Barbarian  baba = {"�ٹٸ���"};
	Paladin    pal = { "�ȶ��" };
	Amazon     ama = { "�Ƹ���" };
	//Sorcerress so = { "�Ҽ�����" };	

	User user;
	user.SelectClass(&pal);
	user.Attack();


} 
































//class User
//{
//private:
//	CharacterClass* myClass;
//
//public:
//	void SelectClass(CharacterClass* cClass);
//
//	
//	void Attack();
//};

//void User::SelectClass(CharacterClass* cClass)
//{
//	myClass = cClass;
//
//}
//
//void User::Attack()
//{
//	myClass->Attack();
//}



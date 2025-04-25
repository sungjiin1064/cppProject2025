
/*
* Unit의 행동 시스템 구현.
* 
* 유닛이 공격한다.
* Unit.Attack();
* 1. 똑같은 유닛 코드를 실행하는 문제가 발생
* 2. virtual 키워드를 사용하면 실제 코드가 실행된다.
*/

/*
* Unit 코드를 이용해서
*/

#include "Common.h"
#include "Book.h"

#include "Monster.h"

int main()
{
	/*Book book;
	SpellBook spBook;
	StoryBook stBook;
	QuestBook qBook;

	book.Read();
	book.ShowPage();
	spBook.Read();
	spBook.ShowPage();
	stBook.Read();
	stBook.ShowPage();
	qBook.Read();
	qBook.ShowPage();*/


	Probe probe1(true);
	//probe1.ReturnAttacker()->Attack();

	Attacker tempAttacker;
	tempAttacker = *(probe1.ReturnAttacker());
	//tempAttacker.Attack();

	Zealot zealot;
	Dragoon dragoon;

	probe1.Attack();
	probe1.UseSkill();
	zealot.Attack();
	zealot.UseSkill();
	dragoon.Attack();
	dragoon.UseSkill();

	cout << "Unit으로 표현하기" << endl << endl;

	Unit& selectUnit = probe1;
	Unit& selectUnit2 = zealot; 
	Unit& selectUnit3 = dragoon;

	selectUnit.Attack();
	selectUnit.UseSkill();
	selectUnit2.Attack();
	selectUnit2.UseSkill();
	selectUnit3.Attack();
	selectUnit3.UseSkill();

}
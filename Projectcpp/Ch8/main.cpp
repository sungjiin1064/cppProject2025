
/*
* Unit�� �ൿ �ý��� ����.
* 
* ������ �����Ѵ�.
* Unit.Attack();
* 1. �Ȱ��� ���� �ڵ带 �����ϴ� ������ �߻�
* 2. virtual Ű���带 ����ϸ� ���� �ڵ尡 ����ȴ�.
*/

/*
* Unit �ڵ带 �̿��ؼ�
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

	cout << "Unit���� ǥ���ϱ�" << endl << endl;

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
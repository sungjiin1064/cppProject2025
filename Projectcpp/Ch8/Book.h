#pragma once

#include "Common.h"

/*
* ����� 3���� ���
* public,  private, protected ���

* 1. public ����� �ϸ�ȴ�.
* 2. private, protected �����ΰ�?
* 3. private? public? protected? ���� ����
*/

class BookMark
{
	int page = 10;
public:
	void ShowPage();
};

// å�� �ݵ�� BookMark�� ������ �ִ� ����
// �ʿ� ���� �ڵ尡 �߰��ȴ�.

// Is-A ���� Has-A ����
// (B) Is-A : B�� A�̴�.
// (B) Has-A: B�� A�� ���� �ִ�.
class Book  // ���� �ϸ�ũ�̴�. ���� �ϸ�ũ�� ���� �ִ�.
{
private:
	BookMark* bookMark;

public:
	void Read();
};

class SpellBook : public Book // ������� ���Դϴ�.
{

};

class StoryBook : public Book
{

};

class QuestBook : public Book
{

};

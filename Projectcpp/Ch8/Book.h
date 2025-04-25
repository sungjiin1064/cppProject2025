#pragma once

#include "Common.h"

/*
* 상속의 3가지 방법
* public,  private, protected 상속

* 1. public 상속을 하면된다.
* 2. private, protected 무엇인가?
* 3. private? public? protected? 정보 은닉
*/

class BookMark
{
	int page = 10;
public:
	void ShowPage();
};

// 책은 반드시 BookMark를 가지고 있는 형태
// 필요 없는 코드가 추가된다.

// Is-A 관계 Has-A 관계
// (B) Is-A : B는 A이다.
// (B) Has-A: B는 A를 갖고 있다.
class Book  // 북은 북마크이다. 북은 북마크를 갖고 있다.
{
private:
	BookMark* bookMark;

public:
	void Read();
};

class SpellBook : public Book // 스펠북은 북입니다.
{

};

class StoryBook : public Book
{

};

class QuestBook : public Book
{

};

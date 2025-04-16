

#include "Common.h"

// �̸��� Person ����ü, ����, �̸�

/*
* C�� CPP�� ������3. �޸� ���� �Ҵ�.
* 
* malloc(memory allocate) : malloc(ũ�� sizeof(char) * 10);
* free(���� �̸�);
* 
* new     : cpp �����Ҵ� �ϴ� Ű����
* delete  : �޸𸮸� �����ϴ� Ű����
*/

/*
* ������ : ��ü�� �����͸� ������ �� �� �ʱ�ȭ ���ִ� ���
* �Ҹ��� : ��ü�� �Ҹ��� �� �ڵ����� ȣ��Ǵ� ���
*/

/*
* age, name;  age = 20;  name = "���谡"
* age = �ܺο��� ������ ���� �־��; age(age), name(name)
* �ּ� = �ּ�;  ���� �� �ִ� ������ ������ �������?
*/

struct Person
{
	int age;
	char* name;        // ���̰� ���ΰ���? �޸𸮰� ������ �Ǿ� ���� �ʴ�.
	string sName;

	// ����Ʈ ������
	Person() {}

	// ���� ������ ���ڿ� �ʱ�ȭ ���
	Person(int age, const string& sName) : age(age), sName(sName) {}

	// ������ �����ε�
	Person(int age, const char* str) : age(age) 
	{
		// �޸� ������ ���� ��������� �Ѵ�.		
		name = new char[strlen(str) + 1];
		// ���� ������ ������ �ܺο� �ִ� �����͸� �����ؼ� �Űܿ;� �Ѵ�.
		strcpy(name, str);
	}

	// �Ҹ��� : ��ü�� �Ҹ�� �� �ڵ����� ȣ��ȴ�.
	~Person()
	{
		cout << "Person�� �Ҹ��ڰ� ȣ��Ǿ����ϴ�." << endl;
		delete[] name;
	}

	void Clone(const Person& other);

	void Show() const; // ��ü ���� �����͸� ������� ����ϰڴ�. ����ڿ��� �˷��ش�.
};
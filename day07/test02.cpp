#include <iostream>
#include <string>
using namespace std;

class Myclass 
{
private:
	char name[30];
	int age;
public:
	Myclass(const char* myname)
	{
		myname = new char[strlen(myname) + 1];
		strcpy(name, myname);
	}
	void WhatYourInfo()
	{
		cout << "�� �̸��� : " << name << endl;
		cout << "�� ���̴� : " << age << endl;
	}
	


class MyInfo : public Myclass
{
private:
	char pNumber[20];
public:
	Myinfo(const char* myname, int* myage, int* myphone)
		: Myclass(myname);

	void printMyInfo() const
	{
		WhatYourInfo();
		cout << "��ȭ��ȣ��: " << pNumber << endl <<endl;
		
		//"���� �̸��� xxx�̰� ���̴� xx ���̸� ��ȭ��ȣ�� xxxx �Դϴ�.";
	}
};

int main(void)
{
	Myinfo p1("�赿��", 29 , "010-1234-5678");
	p1.WhatYourInfo();
	return 0;
};

// MyInfo ��ü�� �����Ѵ�.
// MyInfo��ü.printMyInfo(); �� ȣ���Ѵ�. "���� �̸��� xxx�̰� ���̴� xx ���̸� ��ȭ��ȣ�� xxxx �Դϴ�.";
#include <iostream>
#include <cstring>
using namespace std;

class Person
{
private:
//protected:
	char name[50];
	int age;
public:
	Person(const char* myname, int myage)
	{
		cout << "�θ� ������ ����" << endl;
		age = myage;
		strcpy(name, myname);
	}
	void WhatYourName() const
	{
		cout << "My name is " << name << endl;
	}
	void HowOldAreYou() const
	{
		cout << "I'm " << age << " years old" << endl;
	}
};

class UnivStudent : public Person
{
	string major;
public:
	UnivStudent(const char* myname, int myage, string major)
		: Person(myname, myage)
	{
		cout << "�ڽ� ������ ����" << endl;
		this->major = major;
		//this->age = myage; // private ��� portected �����
	}
	void WhoAreYou() const
	{
		WhatYourName();
		HowOldAreYou();
		cout << "My major is " << major << endl << endl;
	}
};

int main()
{
	UnivStudent ustd1("Lee", 22, "Computer eng.");
	ustd1.WhoAreYou();

	UnivStudent ustd2("Kim", 21, "Electronic eng.");
	ustd2.WhoAreYou();
	return 0;
}
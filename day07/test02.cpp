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
		cout << "내 이름은 : " << name << endl;
		cout << "내 나이는 : " << age << endl;
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
		cout << "전화번호는: " << pNumber << endl <<endl;
		
		//"나의 이름은 xxx이고 나이는 xx 살이며 전화번호는 xxxx 입니다.";
	}
};

int main(void)
{
	Myinfo p1("김동주", 29 , "010-1234-5678");
	p1.WhatYourInfo();
	return 0;
};

// MyInfo 객체를 생성한다.
// MyInfo개체.printMyInfo(); 를 호출한다. "나의 이름은 xxx이고 나이는 xx 살이며 전화번호는 xxxx 입니다.";
#include <iostream>
#include <cstring>
using namespace std;

class Person
{
private:
	char* name;
	int age;
public:
	Person(const char* myname, int myage)
	{
		int len = strlen(myname) + 1;
		name = new char[len];
		strcpy(name, myname);
		age = myage;
	}
	Person(const Person& other)		// 복사생성자
	{
		cout << "깊은 복사생성자 호출" << endl;
//		this->name = other.name;
//		this->age = other.age;
		this->name = new char[strlen(other.name) + 1];		// 새로운 메모리 공간 할당
		strcpy(this->name, other.name);		// 다른 객체의 이름을 복사하여 새로운 메모리에 저장
		this->age = other.age;			// 멤버대 멤버복사
	}
	void ShowPersonInfo() const
	{
		cout << "이름: " << name << endl;
		cout << "나이: " << age << endl;
	}
	~Person()
	{
		delete[]name;		// 할당된 메모리 해제
		cout << "called destructor!" << endl;		// 소멸자 호출 메시지 출력		
	}
};

int main(void)
{
	Person man1("Lee dong woo", 29);		// Person 객체 생성
	Person man2(man1);		// 복사 생성자를 호출하여 새로운 Person 객체 생성
	man1.ShowPersonInfo();		// 객체 정보 출력
	man2.ShowPersonInfo();
	return 0;
}
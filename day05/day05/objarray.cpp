/*
	객체배열
*/
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

class Human {
private:
	char name[30];
	int age;

public:
	Human(const char * pname, int aage) {
		cout << "생성자 호출" << endl;
		strcpy(name, pname);
		age = aage;

	}
	void HumanInfo() {
		cout << "이름: " << name << " ";
		cout << "나이: " << age << endl;

	}
	~Human() {
		cout << "소멸자 호출" << endl;
	}
	
};


int main()
{
	Human h[3] = { Human("홍길동", 50), Human("가나다", 30), Human("라마바", 40)};		// 객체 배열 

	for (int i = 0; i < 3; i++) {
		h[i].HumanInfo();
	
	}
	Human *h1 = new Human("사아자", 60);		// 동적 할당으로 생성된 Human h1 포인터 객체 생성/ 객체 포인터로 멤버 접근
	Human h2("차카타", 35);						// 객체로 멤버접근
	
	h1->HumanInfo();							// HumanInfo로 정보 출력 
	h2.HumanInfo();

	delete h1;

	return 0;
}
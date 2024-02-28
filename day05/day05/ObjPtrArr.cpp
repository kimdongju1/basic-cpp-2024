#include <iostream>
#include <cstring>
using namespace std;

class Person
{
private:
	char* name;		// 문자열을 저장하기 위한 포인터 멤버
	int age;		// 나이를 저장하는 정수형 멤버
public:
	Person(char* myname, int myage)		// 생성자: 이름과 나이를 받아 객체를 초기화
	{
		int len = strlen(myname) + 1;
		name = new char[len];
		strcpy(name, myname);
		age = myage;
	}
	Person()		// 디폴트 생성자: 이름을 NULL로, 나이를 0으로 초기화
	{
		name = NULL;
		age = 0;
		cout << "called Person()" << endl;		// 객체가 생성될 때 호출됨을 알리는 메시지 출력
	}
	void SetPersonInfo(char* myname, int myage)		 // 정보 설정 함수
	{
		name = myname;
		age = myage;
	}
	void ShowPersonInfo() const				 // 정보 출력 함수
	{
		cout << "이름: " << name << ", ";
		cout << "나이: " << age << endl;
	}
	~Person()								// 소멸자: 동적으로 할당된 메모리를 해제
	{
		delete[]name;						// 동적으로 할당된 메모리 해제
		cout << "called destructor!" << endl;	// 소멸자가 호출됨을 알리는 메시지 출력
	}
};

int main(void)
{
	Person * parr[3];				// Person 클래스의 객체 포인터 배열 선언(3개 선언)
	char namestr[100];			// 문자배열
	int age;

	for (int i = 0; i < 3; i++)		// 사용자로부터 세 명의 사람 정보 입력 받음
	{
		cout << "이름: ";
		cin >> namestr;
		cout << "나이: ";
		cin >> age;
		parr[i] = new Person(namestr, age);		// 힙영역에 Person 객체를 동적으로 생성하여 배열에 저장
	}

	parr[0]->ShowPersonInfo();	// 객체포인터를 가지고 멤버에 접근한다.(->)
	parr[1]->ShowPersonInfo();
	parr[2]->ShowPersonInfo();
	delete parr[0];				// 동적으로 생성된 객체 배열의 메모리 해제
	delete parr[1];
	delete parr[2];
	return 0;
}
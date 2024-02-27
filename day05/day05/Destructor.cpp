#include <iostream>
#include <cstring>
using namespace std;

class Person	// Person 클래스 정의
{
private:
	char* name;		// 문자열을 저장하기 위한 포인터 멤버
	int age;		// 나이를 저장하는 정수형 멤버
public:
	Person(const char* myname, int myage)		// 입력 2개를 갖는 생성자(이름과 나이를 받아서 객체를 초기화)
	{
		int len = strlen(myname) + 1;	// strlen()은 문자열 길이 구하는 함수 , 문자열을 나타내려면 +1 해야함(문자만 나타내면 상관없음)
		name = new char[len];			// 동적 할당하여 name 포인터에 저장
		strcpy(name, myname);			// 받은 이름을 name에 복사
		age = myage;					// 나이를 설정
	}
	void ShowPersonInfo() const			// 정보를 출력하는 함수
	{
		cout << "이름: " << name << endl;
		cout << "나이: " << age << endl;
	}
	~Person()							// 소멸자: 동적으로 할당된 메모리를 해제
	{
		delete[]name;					// name 포인터가 가리키는 메모리를 해제
		cout << "called destructor!" << endl;	// 소멸자가 호출됨을 알리는 메시지 출력
	}
};

int main(void)							// 메인 함수
{
	Person man1("Lee dong woo", 29);	// Person 클래스의 객체 생성 및 초기화
	Person man2("Jang dong gun", 41);
	man1.ShowPersonInfo();				// 객체의 정보 출력
	man2.ShowPersonInfo();
	return 0;
}
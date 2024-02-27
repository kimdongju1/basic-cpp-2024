#include <iostream>
using namespace std;

class AAA	// AAA 클래스 정의
{
public:
	AAA()	// AAA 클래스의 기본 생성자
	{
		cout << "empty object" << endl;		// 객체 생성시 "empty object" 출력
	}
	void ShowYourName()		// AAA 클래스의 멤버 함수
	{
		cout << "I'm class AAA" << endl;	// AAA 클래스 이름 출력
	}
};

class BBB	// BBB 클래스의 정의
{
private:
	AAA& ref;		// AAA 클래스의 참조를 멤버로 가짐
	const int& num;		// 정수형 상수의 참조를 멤버로 가짐

public:
	BBB(AAA &r, const int &n)	// BBB 클래스의 생성자
		: ref(r), num(n)		// 초기화 리스트를 사용하여 멤버 변수 초기화
	{ // empty constructor body (비어있는 생성자 본체)
	}
	void ShowYourName()		// BBB 클래스의 멤버 함수
	{
		ref.ShowYourName();		// AAA 객체의 ShowYourName() 함수 호출하여 AAA 클래스 이름 출력
		cout << "and" << endl;	// "and" 출력
		cout << "I ref num" << num << endl;	// 정수형 상수 참조 값 출력
	}
};

int main(void)
{
	AAA obj1;	// AAA 클래스의 객체 생성
	BBB obj2(obj1, 20);	// BBB 클래스의 객체 생성. obj1을 참조하고, 정수형 상수 20을 전달함
	obj2.ShowYourName();	// BBB 클래스의 ShowYourName() 함수 호출
	return 0;
}
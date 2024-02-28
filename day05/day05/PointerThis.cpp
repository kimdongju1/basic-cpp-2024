#include <iostream>
#include <cstring>
using namespace std;

class SoSimple
{
private:
	int num;		// 정수형 멤버 변수
public:
	SoSimple(int num) 		// 생성자: 정수를 입력 받아 객체를 초기화하고, 객체의 주소와 값을 출력
	{
		this->num = num;		// this는 객체 자기 자신을 가리킴
		cout << "num=" << num << ", ";		// 객체의 멤버 변수 num 출력
		cout << "address=" << this << endl;		// 객체의 주소 출력
	}
	void ShowSimpleDate()		// 객체의 num 값을 출력하는 메서드 // 기존에 있는 멤버 함수(멤버함수는 1개) 공유
	{
		cout << num << endl;		// 객체의 멤버 변수 num 출력
	}
	SoSimple* GetThisPointer()		// 객체의 주소를 반환하는 메서드
	{
		return this;		// 객체의 주소 반환
	}
};

int main(void)
{
	SoSimple sim1(100);		// SoSimple 클래스의 객체 sim1 생성
	SoSimple* ptr1 = sim1.GetThisPointer();		// sim1 객체의 주소 값 저장
	cout << ptr1 << ",";		// sim1 객체의 주소 출력
	ptr1->ShowSimpleDate();		// sim1 객체의 멤버 변수 num 출력

	SoSimple sim2(200);		// SoSimple 클래스의 객체 sim2 생성
	SoSimple* ptr2 = sim2.GetThisPointer();		// sim2 객체의 주소 값 저장
	cout << ptr2 << ", ";		// sim2 객체의 주소 출력
	ptr2->ShowSimpleDate();		// sim2 객체의 멤버 변수 num 출력
	return 0;
}
#include <iostream>
using namespace std;

class SelfRef		// SelfRef 클래스 정의
{
private:
	int num;		// 정수를 저장하는 멤버 변수
public:
	SelfRef(int n) : num(n)		// 생성자: 정수를 입력받아 멤버 변수에 저장
	{	
		cout << "객체생성" << endl;		// 객체 생성 메시지 출력
	}
	SelfRef& Adder(int n)		// 정수를 입력받아 멤버 변수에 더한 후 객체의 참조를 반환하는 함수
	{
		num += n;		// 입력받은 정수를 멤버 변수에 더함
		return *this;		// 객체의 참조를 반환, this 포인터가 저장하는값은 자기 주소값,  
	}
	SelfRef& ShowTwoNumber()		// 객체에 저장된 정수를 출력한 후 객체의 참조를 반환하는 함수
	{
		cout << num << endl;		// 멤버 변수를 출력
		return *this;		// 객체의 참조를 반환
	}
};

int main(void)
{
	SelfRef obj(3);		// SelfRef 클래스의 객체 생성 및 초기화
	SelfRef& ref = obj.Adder(2);		// Adder 함수를 호출하여 객체의 멤버 변수를 조작하고, 참조를 반환하여 ref에 저장

	obj.ShowTwoNumber();		// 객체의 멤버 변수 출력
	ref.ShowTwoNumber();

	ref.Adder(1).ShowTwoNumber().Adder(2).ShowTwoNumber();	// Adder와 ShowTwoNumber 함수를 연속적으로 호출하여 객체의 멤버 변수를 조작하고 출력
	return 0;
}
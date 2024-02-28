#include <iostream>
using namespace std;

class TwoNumber		// TwoNumber 클래스 정의

{
private:
	int num1;		// 첫 번째 정수를 저장하는 멤버 변수
	int num2;		// 두 번째 정수를 저장하는 멤버 변수
public:
	TwoNumber(int num1, int num2)		// 생성자: 두 개의 정수를 입력받아 멤버 변수에 저장
	{
		this->num1 = num1;		// 입력받은 첫 번째 정수를 멤버 변수에 저장
		this->num2 = num2;		// 입력받은 두 번째 정수를 멤버 변수에 저장
	}
	/*
	TwoNumber(int num1, int num2)
		: num1(num1), num2(num2)
	{
		//empty
	}
	*/
	void ShowTwoNumber()		// 두 개의 정수를 출력하는 멤버 함수
	{
		cout << this->num1 << endl;		// 첫 번째 정수 출력
		cout << this->num2 << endl;		// 두 번째 정수 출력
	}
};

int main(void)
{
	TwoNumber two(2, 4);		// TwoNumber 클래스의 객체 생성 및 초기화
	two.ShowTwoNumber();		// 객체의 두 정수 출력
	return 0;
}
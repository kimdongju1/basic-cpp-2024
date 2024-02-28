#include <iostream>
using namespace std;


class AA	// AA 클래스 정의
{
	int a;		// 정수형 멤버 변수 a
	int b;		// 정수형 멤버 변수 b
public:	
	AA(int a, int b) // 생성자: 두 개의 정수를 입력받아 멤버 변수를 초기화
	{
		this->a = a;	// 입력 받은 첫 번째 정수를 멤버 변수 a에 저장
		this->b = b;	// 입력 받은 두 번째 정수를 멤버 변수 b에 저장
	}
	void AAInfo()	 // 멤버 함수: 객체의 멤버 변수 a와 b를 출력
	{
		cout << a << " " << b << endl;		// 멤버 변수 a와 b를 출력
	}
};
int main()
{
	AA obj1(10, 20);		 // AA 클래스의 객체 obj1 생성 및 초기화
	obj1.AAInfo();			// obj1 객체의 멤버 변수 값을 출력
	AA obj2(obj1);			// 복사 생성자를 이용하여 obj1 객체로부터 obj2 객체를 생성 및 초기화
	obj2.AAInfo();			// obj2 객체의 멤버 변수 값을 출력
	return 0;
}
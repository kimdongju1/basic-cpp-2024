#include <iostream>
using namespace std;

class AAA
{
private:
	int num;	// 정수형 멤버 변수
public:
	AAA() : num(0) {}	// 기본 생성자: num을 0으로 초기화 , num(0) : 이니셜라이즈 
	//~AAA() {};  // 소멸자: 객체가 소멸할때 자동으로 호출 
	AAA& CreateInitObj(int n) const		// 객체를 동적으로 생성하고 초기화하는 함수
	{
		AAA* ptr = new AAA(n);	// AAA 객체를 동적으로 할당하고 n으로 초기화한 후 포인터로 반환
		return *ptr;
	}
	void ShowNum() const { cout << num << endl; }	// 멤버 변수 num 출력 함수
private: // 싱글톤 : 생성자를 통해서 여러번 호출이 되더라도 인스턴스를 새로 생성하지 않고 최초 호출 시에 만들어두었던 인스턴스를 재활용하는 패턴
	AAA(int n) : num(n) {}	 // 생성자: num을 인자로 받아 초기화
};

int main(void)
{
	AAA base;	// AAA 클래스 객체 base 생성 및 출력
	base.ShowNum();

	AAA& obj1 = base.CreateInitObj(3);	 // base를 참조하여 AAA 객체를 동적으로 생성하고 3으로 초기화한 뒤, 참조 변수 obj1에 할당
	obj1.ShowNum();

	AAA& obj2 = base.CreateInitObj(12);	 // base를 참조하여 AAA 객체를 동적으로 생성하고 12로 초기화한 뒤, 참조 변수 obj2에 할당
	obj2.ShowNum();

	delete& obj1;	// 동적으로 생성된 객체들을 삭제
	delete& obj2;
	return 0;
}
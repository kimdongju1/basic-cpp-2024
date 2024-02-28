#include <iostream>
using namespace std;

class SoSimple
{
private:
	int num;
public:
	SoSimple(int n) : num(n)
	{ }
	SoSimple& AddNum(int n)
	{
		num += n;
		return *this;
	}
	void SimpleFunc()
	{
		cout << "SimpleFunc: " << num << endl;
	}
	void SimpleFunc() const
	{
		cout << "const SimpleFunc: " << num << endl;
	}
};

void YourFunc(const SoSimple& obj)
{
	obj.SimpleFunc();
}

int main(void)
{
	SoSimple obj1(2);		// 일반 객체 생성
	const SoSimple obj2(7);		// const 객체 생성

	obj1.SimpleFunc();		// 16행 일반 멤버함수 호출
	obj2.SimpleFunc();		// 26행 const 객체 대상 함수 호출

	YourFunc(obj1);		// 26행 YourFunc 함수 전달되는 인자를 참조자로, 그것도 const 참조자로 받는다.
	YourFunc(obj2);		// 참조자를 이용한 28행의 함수호출 결과로 20행의 const 멤버함수가 호출.
	return 0;
}

#include <iostream>
using namespace std;

class SoSimple
{
private:
	int num1;
	mutable int num2;		// const 함수에 대해 예외를 둔다!(num2가 mutable로 선언, 이 변수는 const 함수 내에서의 변경이 허용된다.)
public:
	SoSimple(int n1, int n2)
		: num1(n1), num2(n2)
	{ }
	void ShowSimpleData() const
	{
		cout << num1 << ", " << num2 << endl;
	}
	void CopyToNum2() const
	{
		num2 = num1;		// const 함수 내에서 num2에 저장된 값을 변경하고 있다. 이는 num2가 mutable로 선언되었기 때문에 가능하다.
	}
};

int main(void)
{
	SoSimple sm(1, 2);
	sm.ShowSimpleData();
	sm.CopyToNum2();
	sm.ShowSimpleData();
	return 0;
}
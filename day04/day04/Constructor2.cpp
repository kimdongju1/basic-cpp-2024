#include <iostream>
using namespace std;

class SimpleClass
{
private:
	int num1;
	int num2;
public:
	SimpleClass(int n1 = 0, int n2 = 0)
	{
		num1 = n1;
		num2 = n2;
	}
	void ShowDate() const
	{
		cout << num1 << ' ' << num2 << endl;
	}
};

int main(void)
{
	SimpleClass sc1();		// 함수(sc1)의 원형 선언!, 29행에 정의되어있는 함수 호출을 위한것.
	SimpleClass mysc = sc1();		// sc1 함수를 호출하여, 이 때 반환되는 객체의 값으로 mysc객체를 초기화하고 있다.
	mysc.ShowDate();
	return 0;
}

SimpleClass sc1()
{
	SimpleClass sc(20, 30);		// sc객체 생성, 입력값 2개, 타입 SimpleClass 
	return sc;
}
#include <iostream>
using namespace std;

class First
{
public:
	virtual void MyFunc() { cout << "FirstFunc" << endl; }	// MyFunc 함수가 virtual로 선언되었으니. 13, 19행의 함수에는 굳이 virtual 선언을 
};															// 추가하지않아도 가상함수가 된다. 그러나 이렇게 virtual 선언을 넣어서 함수가
															// 가상함수임을 알리는 것이 좋다.
class Second : public First
{
public:
	virtual void MyFunc() { cout << "SecondFunc" << endl; }	
};													

class Third : public Second
{
public:
	virtual void MyFunc() { cout << "ThirdFunc" << endl; }	
};

int main(void)
{
	Third* tptr = new Third();		// Third 객체를 생성한 다음, Third형, Second형, 그리고 First형 포인터 변수로 이를 참조하고 있다.
	Second* sptr = tptr;
	First* fptr = sptr;

	/* 객체포인터 타입을 기준으로 접근 범위가 결정된다.오버라이딩된 경우는 부모것은 자식것으로 가려진다.
	각 포인터 형 변수를 이용해서 MyFunc 함수를 호출하고 있다.
	*/
	fptr->MyFunc();
	sptr->MyFunc();
	tptr->MyFunc();
	delete tptr;
	return 0;
}
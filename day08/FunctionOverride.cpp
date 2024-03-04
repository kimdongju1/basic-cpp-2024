#include <iostream>
using namespace std;

class First
{
public:
	void MyFunc() { cout << "FirstFunc" << endl; }	// 총 3개의 클래스가 상속관계로 연결되어 있으며, 
};													// 이들은 모두 MyFunc함수를 통해서 오버라이딩 관계를 형성하고 있다.

class Second : public First
{
public:
	void MyFunc() { cout << "SecondFunc" << endl; }	// 총 3개의 클래스가 상속관계로 연결되어 있으며, 
};													// 이들은 모두 MyFunc함수를 통해서 오버라이딩 관계를 형성하고 있다.

class Third : public Second
{
public:
	void MyFunc() { cout << "ThirdFunc" << endl; }	// 총 3개의 클래스가 상속관계로 연결되어 있으며, 
};													// 이들은 모두 MyFunc함수를 통해서 오버라이딩 관계를 형성하고 있다.

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

	tptr->Second::MyFunc();

	delete tptr;
	return 0;
}
#include <iostream>
using namespace std;

int simObjCnt = 0;		// 전역변수 , SoSimple의 객체 수를 세기 위한 것
int cmxObjCnt = 0;		// 전역변수 , SoComplex의 객체 수를 세기 위한 것

class SoSimple
{
public:
	SoSimple()
	{
		simObjCnt++;		// 객체가 생성 될때마다 해당 전역변수의 값이 증가하도록, 생성자 내에서 증가연산
		cout << simObjCnt << "번째 SoSimple 객체" << endl;
	}
};

class SoComplex
{
public:
	SoComplex() 
	{
		cmxObjCnt++;		// 객체가 생성 될때마다 해당 전역변수의 값이 증가하도록, 생성자 내에서 증가연산
		cout << cmxObjCnt << "번? SoComplex 객체" << endl;
	}
	SoComplex(SoComplex& copy)
	{
		cmxObjCnt++;		// 객체가 생성 될때마다 해당 전역변수의 값이 증가하도록, 생성자 내에서 증가연산
		cout << cmxObjCnt << "번? SoComplex 객체" << endl;
	}
};

int main(void)
{
	SoSimple sim1;		// 객체 변수
	SoSimple sim2;

	SoComplex com1;		
	SoComplex com2 = com1;
	SoComplex();		// 임시 객체 생성

	return 0;
}
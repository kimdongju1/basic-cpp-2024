#include <iostream>
using namespace std;

class SoSimple
{
private:
	static int simObjCnt;		// SoSimple 내에 선언된 static 변수이니, SoSimple 객체에 의해서 공유된다.
public:
	SoSimple()
	{
		simObjCnt++;		// 이렇듯 SoSimple의 멤버함수(생성자) 내에서는 마치 멤버변수인 것처럼 접근이 가능하다. 
		cout << simObjCnt << "번째 SoSimple 객체" << endl;	//	그렇다고 static 변수를 멤버변수로 오해하면 안된다.
	}
};
int SoSimple::simObjCnt = 0;	// static 변수의 초기화 방법을 보이고 있따.

class SoComplex
{
private:
	static int cmxObjCnt;		// SoComplex 내에 선언된 static 변수이니, SoComplex 객체에 의해서 공유된다.
public:
	SoComplex()
	{
		cmxObjCnt++;			// 이렇듯 SoComplex의 멤버함수(생성자) 내에서는 마치 멤버변수인 것처럼 접근이 가능하다. 
		cout << cmxObjCnt << "번째 SoComplex 객체" << endl;
	}
	SoComplex(SoComplex& copy)
	{
		cmxObjCnt++;			// 이렇듯 SoComplex의 멤버함수(생성자) 내에서는 마치 멤버변수인 것처럼 접근이 가능하다. 
		cout << cmxObjCnt << "번째 SoComplex 객체" << endl;
	}
};
int SoComplex::cmxObjCnt = 0;		// SoComplex에 선언된 static 변수를 초기화하고 있다.

int main(void)
{
	SoSimple sim1;
	SoSimple sim2;

	SoComplex cmx1;
	SoComplex cmx2 = cmx1;
	SoComplex();
	return 0;
}
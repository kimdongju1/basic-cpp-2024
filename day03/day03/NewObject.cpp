#include<iostream>
#include<stdlib.h>
using namespace std;

class Simple
{
public:
	Simple()		// 생성자(클래스이름과 같은 메서드)
	{
		cout << "I'm simple constructor!" << endl; // 생성자 호출 시 출력
	}
};

int main(void)
{
	cout << "case 1: ";
	Simple* sp1 = new Simple;		// Simple 클래스의 객체를 동적으로 생성하여 포인터에 할당
	//Aaa *ap = new Aaa; //Aaa 클래스의 객체를 동적으로 생성하는 것으로 보임

	cout << "case 2: ";
	Simple* sp2 = (Simple*)malloc(sizeof(Simple) * 1);

	cout << endl << "end of main" << endl;	// 메인 함수 종료 메시지 출력
	delete sp1;								// 동적으로 할당된 객체를 삭제
	free(sp2);								// malloc으로 할당된 메모리를 해제

	return 0;
		
}
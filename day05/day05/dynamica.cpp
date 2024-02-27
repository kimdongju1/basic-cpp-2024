/*

	메모리 동적할당 : new 연산자 사용 
	동적 : 프로그램 실행 중에 메모리를 할당 받는다.
*/
#include <iostream>
using namespace std;

int main()
{
	cout << "int size: " << sizeof(int) << endl;
	int *pi = new int;	// *: 포인터변수 나타냄	// new 연산자를 통해서 힙 영역에 int(4byte) 크기만큼 메모리공간 할당받고 할당받은 
						// 메모리의 주소를 리턴시켜준다.
	*pi = 10; // * : 포인터가 가리키는 곳에 데이터(저장공간)을 나타냄
	cout << "Pi가 가리키는 곳에 저장된 값: " << *pi << endl;
	
	delete pi;		// 힙 영역에 메모리 공간을 할당받았으면 무조건 반환해야됨(동적 할당받은 메모리 공간을 반환한다.), C++만해당

	int *pary = new int[10];	// new 연산자를 통해서 할당되있는 메모리 주소를 크기가 10인 정수형 배열형태로 할당하고 pary에 저장
	cout << sizeof(pary) << endl;
	for (int i = 0; i < sizeof(pary); i++) {
		pary[i] = i + 10;		// 배열의 각 방에 원소(요소)값을 집어 넣는다.ex) pary[0] = 10
	}

	for (int i = 0; i < 10; i++) {
		printf("pary[%d] : %d\n", i, pary[i]);
	}

	delete []pary;			// 배열로 동적할당한 메모리를 반환한다.

	return 0;
}


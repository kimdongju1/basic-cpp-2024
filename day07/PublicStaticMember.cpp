#include <iostream>
using namespace std;

class SoSimple
{
public:							// 접근제한이 public
	static int simObjCnt;		// static 멤버변수가 public으로 선언되었다.(클래스 멤버)
public:		// 불필요하지만 변수와 함수의 구분을 목적으로 삽입하기도 함
	SoSimple()
	{
		simObjCnt++;
	}
};
int SoSimple::simObjCnt = 0;		// static 멤버변수는 항상 이렇게 초기화를 진행한다.

int main(void)
{
	cout << SoSimple::simObjCnt << "번째 SoSimple 객체" << endl;		// 현재 SoSimple 객체를 하나도 생성하지 않은 상태,
	// 그럼에도 불구하고 클래스의 이름을 이용해서 simObjCnt에 접근하고 있다(static 멤버변수가 객체 내에 존재하지않음을 증명하는 내용이다.)
	// 즉, public으로 선언된 static 멤버는 이런 식으로 어디서든 접근이 가능하다.		
	SoSimple sim1;
	SoSimple sim2;

	cout << SoSimple::simObjCnt << "번째 SoSimple 객체" << endl;
	cout << sim1.simObjCnt << "번째 SoSimple 객체" << endl;		// sim1,sim2를 이용해서도 static 멤버변수에 접근이 가능하다.
	cout << sim2.simObjCnt << "번쨰 SoSimple 객체" << endl;		// 하지만 이러한 형태의 접근은 추천하지않는다. 멤버변수에 접근하는 것과 같은 오해를 불러일으키기 때문.
	return 0;
}
#include <iostream>
#include "Filedivi.h"

AClass::AClass(int anum) {
	num = anum;

}
void AClass::AInfo() {
	std::cout << "AClass::num" << num << std::endl;

}
int main()
{
	

	Human h("홍길동", 50, "백수");		// 객체생성방법
	h.humanInfo();			// 나는 50살인 백수 홍길동입니다.
	
	
	return 0;
}
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
	

	Human h("ȫ�浿", 50, "���");		// ��ü�������
	h.humanInfo();			// ���� 50���� ��� ȫ�浿�Դϴ�.
	
	
	return 0;
}
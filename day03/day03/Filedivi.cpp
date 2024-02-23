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
	AClass a(10);
	a.AInfo();

	return 0;
}
#include <iostream>
using namespace std;

class CountryArea		// const static 상수는 하나의 클래스에 둘 이상 모이는 것이 보통이다.
{
public:
	const static int RUSSIA = 1707540;
	const static int CANADA = 998467;
	const static int CHINA = 957290;
	const static int SOUTH_KOREA = 9922;
};

int main(void)
{
	cout << "러시아 면적: " << CountryArea::RUSSIA << "㎢" << endl;		// 굳이 객체를 생성할 필요는 없다.
	cout << "캐나다 면적: " << CountryArea::CANADA << "㎢" << endl;		// 이렇듯 클래스의 이름을 통해서 접근하는 것이 편하기도 하고,
	cout << "중국 면적: " << CountryArea::CHINA << "㎢" << endl;		// 접근하는 대상에 대한 정보를 쉽게 노출하는 방법이 되기도 한다.
	cout << "한국 면적: " << CountryArea::SOUTH_KOREA << "㎢" << endl;
	return 0;
}
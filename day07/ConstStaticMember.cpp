#include <iostream>
using namespace std;

class CountryArea		// const static ����� �ϳ��� Ŭ������ �� �̻� ���̴� ���� �����̴�.
{
public:
	const static int RUSSIA = 1707540;
	const static int CANADA = 998467;
	const static int CHINA = 957290;
	const static int SOUTH_KOREA = 9922;
};

int main(void)
{
	cout << "���þ� ����: " << CountryArea::RUSSIA << "��" << endl;		// ���� ��ü�� ������ �ʿ�� ����.
	cout << "ĳ���� ����: " << CountryArea::CANADA << "��" << endl;		// �̷��� Ŭ������ �̸��� ���ؼ� �����ϴ� ���� ���ϱ⵵ �ϰ�,
	cout << "�߱� ����: " << CountryArea::CHINA << "��" << endl;		// �����ϴ� ��� ���� ������ ���� �����ϴ� ����� �Ǳ⵵ �Ѵ�.
	cout << "�ѱ� ����: " << CountryArea::SOUTH_KOREA << "��" << endl;
	return 0;
}
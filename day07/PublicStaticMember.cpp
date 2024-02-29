#include <iostream>
using namespace std;

class SoSimple
{
public:							// ���������� public
	static int simObjCnt;		// static ��������� public���� ����Ǿ���.(Ŭ���� ���)
public:		// ���ʿ������� ������ �Լ��� ������ �������� �����ϱ⵵ ��
	SoSimple()
	{
		simObjCnt++;
	}
};
int SoSimple::simObjCnt = 0;		// static ��������� �׻� �̷��� �ʱ�ȭ�� �����Ѵ�.

int main(void)
{
	cout << SoSimple::simObjCnt << "��° SoSimple ��ü" << endl;		// ���� SoSimple ��ü�� �ϳ��� �������� ���� ����,
	// �׷����� �ұ��ϰ� Ŭ������ �̸��� �̿��ؼ� simObjCnt�� �����ϰ� �ִ�(static ��������� ��ü ���� �������������� �����ϴ� �����̴�.)
	// ��, public���� ����� static ����� �̷� ������ ��𼭵� ������ �����ϴ�.		
	SoSimple sim1;
	SoSimple sim2;

	cout << SoSimple::simObjCnt << "��° SoSimple ��ü" << endl;
	cout << sim1.simObjCnt << "��° SoSimple ��ü" << endl;		// sim1,sim2�� �̿��ؼ��� static ��������� ������ �����ϴ�.
	cout << sim2.simObjCnt << "���� SoSimple ��ü" << endl;		// ������ �̷��� ������ ������ ��õ�����ʴ´�. ��������� �����ϴ� �Ͱ� ���� ���ظ� �ҷ�����Ű�� ����.
	return 0;
}
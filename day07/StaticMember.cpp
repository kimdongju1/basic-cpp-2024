#include <iostream>
using namespace std;

class SoSimple
{
private:
	static int simObjCnt;		// SoSimple ���� ����� static �����̴�, SoSimple ��ü�� ���ؼ� �����ȴ�.
public:
	SoSimple()
	{
		simObjCnt++;		// �̷��� SoSimple�� ����Լ�(������) �������� ��ġ ��������� ��ó�� ������ �����ϴ�. 
		cout << simObjCnt << "��° SoSimple ��ü" << endl;	//	�׷��ٰ� static ������ ��������� �����ϸ� �ȵȴ�.
	}
};
int SoSimple::simObjCnt = 0;	// static ������ �ʱ�ȭ ����� ���̰� �ֵ�.

class SoComplex
{
private:
	static int cmxObjCnt;		// SoComplex ���� ����� static �����̴�, SoComplex ��ü�� ���ؼ� �����ȴ�.
public:
	SoComplex()
	{
		cmxObjCnt++;			// �̷��� SoComplex�� ����Լ�(������) �������� ��ġ ��������� ��ó�� ������ �����ϴ�. 
		cout << cmxObjCnt << "��° SoComplex ��ü" << endl;
	}
	SoComplex(SoComplex& copy)
	{
		cmxObjCnt++;			// �̷��� SoComplex�� ����Լ�(������) �������� ��ġ ��������� ��ó�� ������ �����ϴ�. 
		cout << cmxObjCnt << "��° SoComplex ��ü" << endl;
	}
};
int SoComplex::cmxObjCnt = 0;		// SoComplex�� ����� static ������ �ʱ�ȭ�ϰ� �ִ�.

int main(void)
{
	SoSimple sim1;
	SoSimple sim2;

	SoComplex cmx1;
	SoComplex cmx2 = cmx1;
	SoComplex();
	return 0;
}
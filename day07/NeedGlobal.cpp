#include <iostream>
using namespace std;

int simObjCnt = 0;		// �������� , SoSimple�� ��ü ���� ���� ���� ��
int cmxObjCnt = 0;		// �������� , SoComplex�� ��ü ���� ���� ���� ��

class SoSimple
{
public:
	SoSimple()
	{
		simObjCnt++;		// ��ü�� ���� �ɶ����� �ش� ���������� ���� �����ϵ���, ������ ������ ��������
		cout << simObjCnt << "��° SoSimple ��ü" << endl;
	}
};

class SoComplex
{
public:
	SoComplex() 
	{
		cmxObjCnt++;		// ��ü�� ���� �ɶ����� �ش� ���������� ���� �����ϵ���, ������ ������ ��������
		cout << cmxObjCnt << "���� SoComplex ��ü" << endl;
	}
	SoComplex(SoComplex& copy)
	{
		cmxObjCnt++;		// ��ü�� ���� �ɶ����� �ش� ���������� ���� �����ϵ���, ������ ������ ��������
		cout << cmxObjCnt << "���� SoComplex ��ü" << endl;
	}
};

int main(void)
{
	SoSimple sim1;		// ��ü ����
	SoSimple sim2;

	SoComplex com1;		
	SoComplex com2 = com1;
	SoComplex();		// �ӽ� ��ü ����

	return 0;
}
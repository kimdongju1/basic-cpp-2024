#include<iostream>
#include<stdlib.h>
using namespace std;

class Simple
{
public:
	Simple()		// ������(Ŭ�����̸��� ���� �޼���)
	{
		cout << "I'm simple constructor!" << endl; // ������ ȣ�� �� ���
	}
};

int main(void)
{
	cout << "case 1: ";
	Simple* sp1 = new Simple;		// Simple Ŭ������ ��ü�� �������� �����Ͽ� �����Ϳ� �Ҵ�
	//Aaa *ap = new Aaa; //Aaa Ŭ������ ��ü�� �������� �����ϴ� ������ ����

	cout << "case 2: ";
	Simple* sp2 = (Simple*)malloc(sizeof(Simple) * 1);

	cout << endl << "end of main" << endl;	// ���� �Լ� ���� �޽��� ���
	delete sp1;								// �������� �Ҵ�� ��ü�� ����
	free(sp2);								// malloc���� �Ҵ�� �޸𸮸� ����

	return 0;
		
}
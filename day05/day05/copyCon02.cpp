#include <iostream>
using namespace std;


class AA	// AA Ŭ���� ����
{
	int a;		// ������ ��� ���� a
	int b;		// ������ ��� ���� b
public:	
	AA(int a, int b) // ������: �� ���� ������ �Է¹޾� ��� ������ �ʱ�ȭ
	{
		this->a = a;	// �Է� ���� ù ��° ������ ��� ���� a�� ����
		this->b = b;	// �Է� ���� �� ��° ������ ��� ���� b�� ����
	}
	void AAInfo()	 // ��� �Լ�: ��ü�� ��� ���� a�� b�� ���
	{
		cout << a << " " << b << endl;		// ��� ���� a�� b�� ���
	}
};
int main()
{
	AA obj1(10, 20);		 // AA Ŭ������ ��ü obj1 ���� �� �ʱ�ȭ
	obj1.AAInfo();			// obj1 ��ü�� ��� ���� ���� ���
	AA obj2(obj1);			// ���� �����ڸ� �̿��Ͽ� obj1 ��ü�κ��� obj2 ��ü�� ���� �� �ʱ�ȭ
	obj2.AAInfo();			// obj2 ��ü�� ��� ���� ���� ���
	return 0;
}
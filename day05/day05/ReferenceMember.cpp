#include <iostream>
using namespace std;

class AAA	// AAA Ŭ���� ����
{
public:
	AAA()	// AAA Ŭ������ �⺻ ������
	{
		cout << "empty object" << endl;		// ��ü ������ "empty object" ���
	}
	void ShowYourName()		// AAA Ŭ������ ��� �Լ�
	{
		cout << "I'm class AAA" << endl;	// AAA Ŭ���� �̸� ���
	}
};

class BBB	// BBB Ŭ������ ����
{
private:
	AAA& ref;		// AAA Ŭ������ ������ ����� ����
	const int& num;		// ������ ����� ������ ����� ����

public:
	BBB(AAA &r, const int &n)	// BBB Ŭ������ ������
		: ref(r), num(n)		// �ʱ�ȭ ����Ʈ�� ����Ͽ� ��� ���� �ʱ�ȭ
	{ // empty constructor body (����ִ� ������ ��ü)
	}
	void ShowYourName()		// BBB Ŭ������ ��� �Լ�
	{
		ref.ShowYourName();		// AAA ��ü�� ShowYourName() �Լ� ȣ���Ͽ� AAA Ŭ���� �̸� ���
		cout << "and" << endl;	// "and" ���
		cout << "I ref num" << num << endl;	// ������ ��� ���� �� ���
	}
};

int main(void)
{
	AAA obj1;	// AAA Ŭ������ ��ü ����
	BBB obj2(obj1, 20);	// BBB Ŭ������ ��ü ����. obj1�� �����ϰ�, ������ ��� 20�� ������
	obj2.ShowYourName();	// BBB Ŭ������ ShowYourName() �Լ� ȣ��
	return 0;
}
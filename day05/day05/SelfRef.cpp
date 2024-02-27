#include <iostream>
using namespace std;

class SelfRef		// SelfRef Ŭ���� ����
{
private:
	int num;		// ������ �����ϴ� ��� ����
public:
	SelfRef(int n) : num(n)		// ������: ������ �Է¹޾� ��� ������ ����
	{	
		cout << "��ü����" << endl;		// ��ü ���� �޽��� ���
	}
	SelfRef& Adder(int n)		// ������ �Է¹޾� ��� ������ ���� �� ��ü�� ������ ��ȯ�ϴ� �Լ�
	{
		num += n;		// �Է¹��� ������ ��� ������ ����
		return *this;		// ��ü�� ������ ��ȯ, this �����Ͱ� �����ϴ°��� �ڱ� �ּҰ�,  
	}
	SelfRef& ShowTwoNumber()		// ��ü�� ����� ������ ����� �� ��ü�� ������ ��ȯ�ϴ� �Լ�
	{
		cout << num << endl;		// ��� ������ ���
		return *this;		// ��ü�� ������ ��ȯ
	}
};

int main(void)
{
	SelfRef obj(3);		// SelfRef Ŭ������ ��ü ���� �� �ʱ�ȭ
	SelfRef& ref = obj.Adder(2);		// Adder �Լ��� ȣ���Ͽ� ��ü�� ��� ������ �����ϰ�, ������ ��ȯ�Ͽ� ref�� ����

	obj.ShowTwoNumber();		// ��ü�� ��� ���� ���
	ref.ShowTwoNumber();

	ref.Adder(1).ShowTwoNumber().Adder(2).ShowTwoNumber();	// Adder�� ShowTwoNumber �Լ��� ���������� ȣ���Ͽ� ��ü�� ��� ������ �����ϰ� ���
	return 0;
}
#include <iostream>
using namespace std;

class TwoNumber		// TwoNumber Ŭ���� ����

{
private:
	int num1;		// ù ��° ������ �����ϴ� ��� ����
	int num2;		// �� ��° ������ �����ϴ� ��� ����
public:
	TwoNumber(int num1, int num2)		// ������: �� ���� ������ �Է¹޾� ��� ������ ����
	{
		this->num1 = num1;		// �Է¹��� ù ��° ������ ��� ������ ����
		this->num2 = num2;		// �Է¹��� �� ��° ������ ��� ������ ����
	}
	/*
	TwoNumber(int num1, int num2)
		: num1(num1), num2(num2)
	{
		//empty
	}
	*/
	void ShowTwoNumber()		// �� ���� ������ ����ϴ� ��� �Լ�
	{
		cout << this->num1 << endl;		// ù ��° ���� ���
		cout << this->num2 << endl;		// �� ��° ���� ���
	}
};

int main(void)
{
	TwoNumber two(2, 4);		// TwoNumber Ŭ������ ��ü ���� �� �ʱ�ȭ
	two.ShowTwoNumber();		// ��ü�� �� ���� ���
	return 0;
}
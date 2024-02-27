#include <iostream>
#include <cstring>
using namespace std;

class SoSimple
{
private:
	int num;		// ������ ��� ����
public:
	SoSimple(int num) 		// ������: ������ �Է� �޾� ��ü�� �ʱ�ȭ�ϰ�, ��ü�� �ּҿ� ���� ���
	{
		this->num = num;		// this�� ��ü �ڱ� �ڽ��� ����Ŵ
		cout << "num=" << num << ", ";		// ��ü�� ��� ���� num ���
		cout << "address=" << this << endl;		// ��ü�� �ּ� ���
	}
	void ShowSimpleDate()		// ��ü�� num ���� ����ϴ� �޼��� // ������ �ִ� ��� �Լ�(����Լ��� 1��) ����
	{
		cout << num << endl;		// ��ü�� ��� ���� num ���
	}
	SoSimple* GetThisPointer()		// ��ü�� �ּҸ� ��ȯ�ϴ� �޼���
	{
		return this;		// ��ü�� �ּ� ��ȯ
	}
};

int main(void)
{
	SoSimple sim1(100);		// SoSimple Ŭ������ ��ü sim1 ����
	SoSimple* ptr1 = sim1.GetThisPointer();		// sim1 ��ü�� �ּ� �� ����
	cout << ptr1 << ",";		// sim1 ��ü�� �ּ� ���
	ptr1->ShowSimpleDate();		// sim1 ��ü�� ��� ���� num ���

	SoSimple sim2(200);		// SoSimple Ŭ������ ��ü sim2 ����
	SoSimple* ptr2 = sim2.GetThisPointer();		// sim2 ��ü�� �ּ� �� ����
	cout << ptr2 << ", ";		// sim2 ��ü�� �ּ� ���
	ptr2->ShowSimpleDate();		// sim2 ��ü�� ��� ���� num ���
	return 0;
}
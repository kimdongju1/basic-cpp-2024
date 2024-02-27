#include <iostream>
using namespace std;

class AAA
{
private:
	int num;	// ������ ��� ����
public:
	AAA() : num(0) {}	// �⺻ ������: num�� 0���� �ʱ�ȭ , num(0) : �̴ϼȶ����� 
	//~AAA() {};  // �Ҹ���: ��ü�� �Ҹ��Ҷ� �ڵ����� ȣ�� 
	AAA& CreateInitObj(int n) const		// ��ü�� �������� �����ϰ� �ʱ�ȭ�ϴ� �Լ�
	{
		AAA* ptr = new AAA(n);	// AAA ��ü�� �������� �Ҵ��ϰ� n���� �ʱ�ȭ�� �� �����ͷ� ��ȯ
		return *ptr;
	}
	void ShowNum() const { cout << num << endl; }	// ��� ���� num ��� �Լ�
private: // �̱��� : �����ڸ� ���ؼ� ������ ȣ���� �Ǵ��� �ν��Ͻ��� ���� �������� �ʰ� ���� ȣ�� �ÿ� �����ξ��� �ν��Ͻ��� ��Ȱ���ϴ� ����
	AAA(int n) : num(n) {}	 // ������: num�� ���ڷ� �޾� �ʱ�ȭ
};

int main(void)
{
	AAA base;	// AAA Ŭ���� ��ü base ���� �� ���
	base.ShowNum();

	AAA& obj1 = base.CreateInitObj(3);	 // base�� �����Ͽ� AAA ��ü�� �������� �����ϰ� 3���� �ʱ�ȭ�� ��, ���� ���� obj1�� �Ҵ�
	obj1.ShowNum();

	AAA& obj2 = base.CreateInitObj(12);	 // base�� �����Ͽ� AAA ��ü�� �������� �����ϰ� 12�� �ʱ�ȭ�� ��, ���� ���� obj2�� �Ҵ�
	obj2.ShowNum();

	delete& obj1;	// �������� ������ ��ü���� ����
	delete& obj2;
	return 0;
}
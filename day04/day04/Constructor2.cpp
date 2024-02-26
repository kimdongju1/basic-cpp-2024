#include <iostream>
using namespace std;

class SimpleClass
{
private:
	int num1;
	int num2;
public:
	SimpleClass(int n1 = 0, int n2 = 0)
	{
		num1 = n1;
		num2 = n2;
	}
	void ShowDate() const
	{
		cout << num1 << ' ' << num2 << endl;
	}
};

int main(void)
{
	SimpleClass sc1();		// �Լ�(sc1)�� ���� ����!, 29�࿡ ���ǵǾ��ִ� �Լ� ȣ���� ���Ѱ�.
	SimpleClass mysc = sc1();		// sc1 �Լ��� ȣ���Ͽ�, �� �� ��ȯ�Ǵ� ��ü�� ������ mysc��ü�� �ʱ�ȭ�ϰ� �ִ�.
	mysc.ShowDate();
	return 0;
}

SimpleClass sc1()
{
	SimpleClass sc(20, 30);		// sc��ü ����, �Է°� 2��, Ÿ�� SimpleClass 
	return sc;
}
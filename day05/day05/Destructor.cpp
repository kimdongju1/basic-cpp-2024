#include <iostream>
#include <cstring>
using namespace std;

class Person	// Person Ŭ���� ����
{
private:
	char* name;		// ���ڿ��� �����ϱ� ���� ������ ���
	int age;		// ���̸� �����ϴ� ������ ���
public:
	Person(const char* myname, int myage)		// �Է� 2���� ���� ������(�̸��� ���̸� �޾Ƽ� ��ü�� �ʱ�ȭ)
	{
		int len = strlen(myname) + 1;	// strlen()�� ���ڿ� ���� ���ϴ� �Լ� , ���ڿ��� ��Ÿ������ +1 �ؾ���(���ڸ� ��Ÿ���� �������)
		name = new char[len];			// ���� �Ҵ��Ͽ� name �����Ϳ� ����
		strcpy(name, myname);			// ���� �̸��� name�� ����
		age = myage;					// ���̸� ����
	}
	void ShowPersonInfo() const			// ������ ����ϴ� �Լ�
	{
		cout << "�̸�: " << name << endl;
		cout << "����: " << age << endl;
	}
	~Person()							// �Ҹ���: �������� �Ҵ�� �޸𸮸� ����
	{
		delete[]name;					// name �����Ͱ� ����Ű�� �޸𸮸� ����
		cout << "called destructor!" << endl;	// �Ҹ��ڰ� ȣ����� �˸��� �޽��� ���
	}
};

int main(void)							// ���� �Լ�
{
	Person man1("Lee dong woo", 29);	// Person Ŭ������ ��ü ���� �� �ʱ�ȭ
	Person man2("Jang dong gun", 41);
	man1.ShowPersonInfo();				// ��ü�� ���� ���
	man2.ShowPersonInfo();
	return 0;
}
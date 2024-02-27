#include <iostream>
#include <cstring>
using namespace std;

class Person
{
private:
	char* name;		// ���ڿ��� �����ϱ� ���� ������ ���
	int age;		// ���̸� �����ϴ� ������ ���
public:
	Person(char* myname, int myage)		// ������: �̸��� ���̸� �޾� ��ü�� �ʱ�ȭ
	{
		int len = strlen(myname) + 1;
		name = new char[len];
		strcpy(name, myname);
		age = myage;
	}
	Person()		// ����Ʈ ������: �̸��� NULL��, ���̸� 0���� �ʱ�ȭ
	{
		name = NULL;
		age = 0;
		cout << "called Person()" << endl;		// ��ü�� ������ �� ȣ����� �˸��� �޽��� ���
	}
	void SetPersonInfo(char* myname, int myage)		 // ���� ���� �Լ�
	{
		name = myname;
		age = myage;
	}
	void ShowPersonInfo() const				 // ���� ��� �Լ�
	{
		cout << "�̸�: " << name << ", ";
		cout << "����: " << age << endl;
	}
	~Person()								// �Ҹ���: �������� �Ҵ�� �޸𸮸� ����
	{
		delete[]name;						// �������� �Ҵ�� �޸� ����
		cout << "called destructor!" << endl;	// �Ҹ��ڰ� ȣ����� �˸��� �޽��� ���
	}
};

int main(void)
{
	Person * parr[3];				// Person Ŭ������ ��ü ������ �迭 ����(3�� ����)
	char namestr[100];			// ���ڹ迭
	int age;

	for (int i = 0; i < 3; i++)		// ����ڷκ��� �� ���� ��� ���� �Է� ����
	{
		cout << "�̸�: ";
		cin >> namestr;
		cout << "����: ";
		cin >> age;
		parr[i] = new Person(namestr, age);		// �������� Person ��ü�� �������� �����Ͽ� �迭�� ����
	}

	parr[0]->ShowPersonInfo();	// ��ü�����͸� ������ ����� �����Ѵ�.(->)
	parr[1]->ShowPersonInfo();
	parr[2]->ShowPersonInfo();
	delete parr[0];				// �������� ������ ��ü �迭�� �޸� ����
	delete parr[1];
	delete parr[2];
	return 0;
}
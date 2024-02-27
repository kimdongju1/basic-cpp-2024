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
	Person parr[3];				// Person Ŭ������ ��ü �迭 ����(3�� ����)
	char namestr[100];			// ���ڹ迭
	char* strptr;				// char Ÿ���� �����ͺ��� 
	int age;
	int len;

	for (int i = 0; i < 3; i++)		// ����ڷκ��� �� ���� ��� ���� �Է� ����
	{
		cout << "�̸�: ";
		cin >> namestr;
		cout << "����: ";
		cin >> age;
		len = strlen(namestr) + 1;
		strptr = new char[len];
		strcpy(strptr, namestr);
		parr[i].SetPersonInfo(strptr, age);
	}							// �Է¹��� �� ���� ��� ���� ���
	parr[0].ShowPersonInfo();
	parr[1].ShowPersonInfo();
	parr[2].ShowPersonInfo();
	return 0;
}
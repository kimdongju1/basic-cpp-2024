/*
	��ü�迭
*/
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

class Human {
private:
	char name[30];
	int age;

public:
	Human(const char * pname, int aage) {
		cout << "������ ȣ��" << endl;
		strcpy(name, pname);
		age = aage;

	}
	void HumanInfo() {
		cout << "�̸�: " << name << " ";
		cout << "����: " << age << endl;

	}
	~Human() {
		cout << "�Ҹ��� ȣ��" << endl;
	}
	
};


int main()
{
	Human h[3] = { Human("ȫ�浿", 50), Human("������", 30), Human("�󸶹�", 40)};		// ��ü �迭 

	for (int i = 0; i < 3; i++) {
		h[i].HumanInfo();
	
	}
	Human *h1 = new Human("�����", 60);		// ���� �Ҵ����� ������ Human h1 ������ ��ü ����/ ��ü �����ͷ� ��� ����
	Human h2("��īŸ", 35);						// ��ü�� �������
	
	h1->HumanInfo();							// HumanInfo�� ���� ��� 
	h2.HumanInfo();

	delete h1;

	return 0;
}
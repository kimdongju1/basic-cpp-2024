/*
	C++ Ŭ���� : Ŭ���� ����� ��� ������ ��� �Լ��� ������
*/
#include <iostream>

class human {		// human Ŭ����(�������� ���� ����� ���� �ڷ���)
public:

	char name[20];	// �Ӽ�; �������(name, age, job)
	int age;
	char job[20];


	void showHuman() // ��� �Լ� 
	{
		printf("name: %s age: %d job: %s\n", name, age, job);
	}
}Human;				// ������ human ����ü�� Human ���� ����ϰڴ�.

int main()
{
int a = 10;
//human h1 = { "ȫ�浿", 50, "����" };		// HumanŸ���� ������ �����ϰ� �ʱ�ȭ�� ��Ų��.
//h1.showHuman();
human h1 = { "ȫ�浿", 50, "����" };
h1.showHuman();

	return 0;
}
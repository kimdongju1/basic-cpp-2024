/*
	C Ÿ���� ����ü : ����ü ����� ������ ������.
*/
#include <stdio.h>

typedef struct human {		// human ����ü(�������� ���� ����� ���� �ڷ���)
	char name[20];	// �Ӽ�; �������(name, age, job)
	int age;
	char job[20];	
}Human;				// ������ human ����ü�� Human ���� ����ϰڴ�.

void showHuman(Human h)
{
	printf("name: %s age: %d job: %s\n", h.name, h.age, h.job);
}

int main()
{
	int a = 10;
	human h1 = { "ȫ�浿", 50, "����" };		// HumanŸ���� ������ �����ϰ� �ʱ�ȭ�� ��Ų��.
	showHuman(h1);

	return 0;
}
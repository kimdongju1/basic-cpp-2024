#pragma once

/*
	Filedivi.h ������� : ���� 
*/
class AClass {
private:
	int num;

public:				// ��������������
	char name[20];
	int age;
	char job[20];

	void showHuman()
	{
		printf("name: %s age: %d job: %s\n", name, age, job);
	}
	
}Human;
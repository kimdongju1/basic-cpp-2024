#pragma once

/*
	Filedivi.h 헤더파일 : 선언 
*/
class AClass {
private:
	int num;

public:				// 접근제어지시자
	char name[20];
	int age;
	char job[20];

	void showHuman()
	{
		printf("name: %s age: %d job: %s\n", name, age, job);
	}
	
}Human;
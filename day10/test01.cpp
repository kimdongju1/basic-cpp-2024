#include <iostream>
#include <cstring>
using namespace std;

class Grade
{private:
	char* name;
	int kr;
	int math;
	int english;
public:
	Grade(const char* StudentName, int Gkr, int Gmath, int Genglish)
	{
		int len = strlen(StudentName) + 1;
		name = new char[len];
		strcpy(name, StudentName);
		int kr = Gkr;
		int math = Gmath;
		int english = Genglish;
	}
	~Grade()
	{
		delete[] name;
	}

	int Total() const
	{
		return kr + math + english;
	}
	double Average() const
	{
		return Total()/ 3.0;
	}
	
	
};



int main()
{
	int StdentNumber = 5;
	Grade m1("������", 80, 80, 80);
	Grade m2("�ھ�", 70, 70, 70);
	Grade m3("�̾�", 60, 60, 60);
	Grade m4("ȫ�浿", 100, 100, 100);
	Grade m5("�达", 0, 20, 50);

	int kr;
	std::cout << " ���� ���� : ";
	std::cin >> kr;

	int math;
	std::cout << "���� ���� : ";
	std::cin >> math;

	int english;
	std::cout << " ���� ���� : ";
	std::cin >> english;

	int result = kr + math + english;
	std::cout << " ���� �� : " << kr + math + english << std::endl;

	int average = (kr + math + english) / 3;
	std::cout << " ��� ���� : " << (kr + math + english) / 3 << std::endl;
	return 0;
}
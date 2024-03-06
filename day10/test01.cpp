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
	Grade m1("°¡³ª´Ù", 80, 80, 80);
	Grade m2("¹Ú¾¾", 70, 70, 70);
	Grade m3("ÀÌ¾¾", 60, 60, 60);
	Grade m4("È«±æµ¿", 100, 100, 100);
	Grade m5("±è¾¾", 0, 20, 50);

	int kr;
	std::cout << " ±¹¾î ¼ºÀû : ";
	std::cin >> kr;

	int math;
	std::cout << "¼öÇÐ ¼ºÀû : ";
	std::cin >> math;

	int english;
	std::cout << " ¿µ¾î ¼ºÀû : ";
	std::cin >> english;

	int result = kr + math + english;
	std::cout << " ¼ºÀû ÇÕ : " << kr + math + english << std::endl;

	int average = (kr + math + english) / 3;
	std::cout << " Æò±Õ Á¡¼ö : " << (kr + math + english) / 3 << std::endl;
	return 0;
}
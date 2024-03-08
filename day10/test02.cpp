/*
	5명의 이름과 국,영,수 3과목을 입력받아 학생별 총점과 평균, 그리고 과목별 총점과 평균을 구하시오.
*/

#include <iostream>
#include <vector>
using namespace std;

class Grade
{
	char* name;			// 포인터를 사용하고 있다.
	int ko;
	int eng;
	int math;
public:
	Grade(const char* name, int ko, int eng, int math)
	{
		name = new char[strlen(name) + 1];
		strcpy(this->name, name);
		this->ko = ko;
		this->eng = eng;
		this->math = math;
	}
	Grade()
	{
		cout << "생성자 호출" << endl;
		
	}
	~Grade()
	{
		printf("소멸자 호출\n");
		delete[] name;
	}
	int getKo()
	{
		return ko;
	}
	int getEng()
	{
		return eng;
	}
	int getMath()
	{
		return math;
	}
	int sum()
	{
		int sum = ko + math + eng;
		return sum;
	}
	double avr()
	{
		double avr = sum() / 3.0;
		return avr;
	}



};



int main()
{	// 1. 입력을 받는다.
	//Grade* gradeAry[3];		// 객체 포인터 배열 
	//Grade gradeAry[3];		// 객체 배열

	char name[20];
	int inKo;
	int inEng;
	int inMath;
	int kosum = 0;
	int engsum = 0;
	int mathsum = 0;
	int num;

	cout << "성적처리 학생수 : " << endl;
	cin >> num;
	vector<Grade> gradeAry(num);			// 동적으로 배열을 할당 받는다. 
	

	// 1. 입력을 받는다. ----> 5개 입력
	for (int i = 0; i < num; i++) {
		cout << "이름 : ";
		cin >> name;
		cout << "국어 점수 : ";
		cin >> inKo;
		cout << "영어 점수 : ";
		cin >> inEng;
		cout << "수학 점수 : ";
		cin >> inMath;

		cout << name << inKo << inEng << inMath << endl;
		// 2. 객체생성 : 5개의 객체를 생성(2). 객체배열 or 객체 포인터 배열
		gradeAry[i] = Grade(name, inKo, inEng, inMath);
	}


	for (int i = 0; i < num; i++) {
		cout << "총점 : " << gradeAry[i].sum() << " 평점 : " << gradeAry[i].avr() << endl;
		printf("%d번째 학생 총점 : %d,  평점 : %.1lf\n", i + 1, gradeAry[i].sum(), gradeAry[i].avr());
	}
	for (int i = 0; i < num; i++) {
		kosum += gradeAry[i].getKo();
		engsum += gradeAry[i].getEng();
		mathsum += gradeAry[i].getMath();

	}

	cout << " 국어성적 총점 : %d" << kosum << "국어성적 평균 : %.1lf\n" << endl;
	cout << " 영어성적 총점 : %d" << engsum << "영어성적 평균 : %.1lf\n" << endl;
	cout << " 수학성적 총점 : %d" << mathsum << "수학성적 평균 : %.1lf\n" << endl;


	for (int i = 0; i < num; i++) {
		printf("객체 할당 소멸자 호출");
	}
	return 0;
}
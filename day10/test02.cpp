/*
	5���� �̸��� ��,��,�� 3������ �Է¹޾� �л��� ������ ���, �׸��� ���� ������ ����� ���Ͻÿ�.
*/

#include <iostream>
#include <vector>
using namespace std;

class Grade
{
	char* name;			// �����͸� ����ϰ� �ִ�.
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
		cout << "������ ȣ��" << endl;
		
	}
	~Grade()
	{
		printf("�Ҹ��� ȣ��\n");
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
{	// 1. �Է��� �޴´�.
	//Grade* gradeAry[3];		// ��ü ������ �迭 
	//Grade gradeAry[3];		// ��ü �迭

	char name[20];
	int inKo;
	int inEng;
	int inMath;
	int kosum = 0;
	int engsum = 0;
	int mathsum = 0;
	int num;

	cout << "����ó�� �л��� : " << endl;
	cin >> num;
	vector<Grade> gradeAry(num);			// �������� �迭�� �Ҵ� �޴´�. 
	

	// 1. �Է��� �޴´�. ----> 5�� �Է�
	for (int i = 0; i < num; i++) {
		cout << "�̸� : ";
		cin >> name;
		cout << "���� ���� : ";
		cin >> inKo;
		cout << "���� ���� : ";
		cin >> inEng;
		cout << "���� ���� : ";
		cin >> inMath;

		cout << name << inKo << inEng << inMath << endl;
		// 2. ��ü���� : 5���� ��ü�� ����(2). ��ü�迭 or ��ü ������ �迭
		gradeAry[i] = Grade(name, inKo, inEng, inMath);
	}


	for (int i = 0; i < num; i++) {
		cout << "���� : " << gradeAry[i].sum() << " ���� : " << gradeAry[i].avr() << endl;
		printf("%d��° �л� ���� : %d,  ���� : %.1lf\n", i + 1, gradeAry[i].sum(), gradeAry[i].avr());
	}
	for (int i = 0; i < num; i++) {
		kosum += gradeAry[i].getKo();
		engsum += gradeAry[i].getEng();
		mathsum += gradeAry[i].getMath();

	}

	cout << " ����� ���� : %d" << kosum << "����� ��� : %.1lf\n" << endl;
	cout << " ����� ���� : %d" << engsum << "����� ��� : %.1lf\n" << endl;
	cout << " ���м��� ���� : %d" << mathsum << "���м��� ��� : %.1lf\n" << endl;


	for (int i = 0; i < num; i++) {
		printf("��ü �Ҵ� �Ҹ��� ȣ��");
	}
	return 0;
}
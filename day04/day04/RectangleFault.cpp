#include<iostream>
using namespace std;

class Point		// 점을 표현한 Point 클래스의 멤버변수 x, y는 public으로 선언되어서 어디서든 접근이 가능하다.
{
public:
	int x;		// x좌표의 범위는 0이상 100이하
	int y;		// y좌표의 범위는 0이상 100이하
};

class Rectangle		// Rectangle 클래스는 직사각형을 표현. 그런데 직사각형은 두 개의 점으로 표현가능, 두 개의 Point 객체를 멤버로 두었다.
{
public:
	Point upLeft;
	Point lowRight;

public:
	void ShowRecInfo()
	{
		cout << "좌 상단: " << '[' << upLeft.x << ", ";
		cout << upLeft.y << ']' << endl;
		cout << "우 하단: " << '[' << lowRight.x << ", ";
		cout << lowRight.y << ']' << endl << endl;
	}
};

int main(void)
{
	Point pos1 = { -2, 4 };		// 직사각형을 표현할 두개의 Point 객체 생성. 멤버변수가 public으로 선언되면, 
	Point pos2 = { 5, 9 };		// 구조체 변수를 초기화하듯이 초기화 가능
	Rectangle rec = { pos2, pos1 };		// 위에서 생성한 Point객체를 이용해 Rectangle 객체 생성 및 초기화
	rec.ShowRecInfo();
	return 0;
}
#include <iostream>
using namespace std;

class Point;	// 14, 15 행을 컴파일 하기 위해서 Point가 클래스이름임을 별도로 컴파일러에게 알려줘야함.

class PointOP
{
private:
	int opcnt;
public:
	PointOP() : opcnt(0)
	{ }

	Point PointAdd(const Point&, const Point&);		// 함수 선언에서는 매개변수의 이름은 생략 가능하다.
	Point PointSub(const Point&, const Point&);		// 매개변수 타입은 생략할 수 없다.
	~PointOP()
	{
		cout << "Operation times: " << opcnt << endl;
	}
};

class Point
{
private:
	int x;
	int y;
public:
	Point(const int &xpos, const int &ypos) : x(xpos), y(ypos)
	{ }
	friend Point PointOP::PointAdd(const Point&, const Point&);		// PointOP 클래스의 멤버함수 PointAdd와
	friend Point PointOP::PointSub(const Point&, const Point&);		// PointSub에 대해 friend 선언 
	friend void ShowPointPos(const Point&);		// 58행에 정의된 함수 ShowPointPos에 대해 friend 선언
};

Point PointOP::PointAdd(const Point& pnt1, const Point& pnt2)
{
	opcnt++;
	return Point(pnt1.x + pnt2.x, pnt1.y + pnt2.y);	// PointAdd와 PointSub 함수는 Point 클래스의 friend로 선언되었기 때문에 private 멤버에 접근가능.
}

Point PointOP::PointSub(const Point& pnt1, const Point& pnt2)
{
	opcnt++;
	return Point(pnt1.x - pnt2.x, pnt1.y - pnt2.y);	// PointAdd와 PointSub 함수는 Point 클래스의 friend로 선언되었기 때문에 private 멤버에 접근가능.
}

int main(void)
{
	Point pos1(1, 2);
	Point pos2(2, 4);
	PointOP op;

	ShowPointPos(op.PointAdd(pos1, pos2));
	ShowPointPos(op.PointSub(pos2, pos1));
	return 0;
}

void ShowPointPos(const Point& pos)
{
	cout << "x: " << pos.x << ", ";	// ShowPointPos 함수도 Point 클래스와 friend로 선언되었기 때문에 private 멤버에 접근가능
	cout << "y: " << pos.y << endl;	// ShowPointPos 함수도 Point 클래스와 friend로 선언되었기 때문에 private 멤버에 접근가능
}
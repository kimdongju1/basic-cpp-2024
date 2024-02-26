#include<iostream>
using namespace std;

class Point		// ���� ǥ���� Point Ŭ������ ������� x, y�� public���� ����Ǿ ��𼭵� ������ �����ϴ�.
{
public:
	int x;		// x��ǥ�� ������ 0�̻� 100����
	int y;		// y��ǥ�� ������ 0�̻� 100����
};

class Rectangle		// Rectangle Ŭ������ ���簢���� ǥ��. �׷��� ���簢���� �� ���� ������ ǥ������, �� ���� Point ��ü�� ����� �ξ���.
{
public:
	Point upLeft;
	Point lowRight;

public:
	void ShowRecInfo()
	{
		cout << "�� ���: " << '[' << upLeft.x << ", ";
		cout << upLeft.y << ']' << endl;
		cout << "�� �ϴ�: " << '[' << lowRight.x << ", ";
		cout << lowRight.y << ']' << endl << endl;
	}
};

int main(void)
{
	Point pos1 = { -2, 4 };		// ���簢���� ǥ���� �ΰ��� Point ��ü ����. ��������� public���� ����Ǹ�, 
	Point pos2 = { 5, 9 };		// ����ü ������ �ʱ�ȭ�ϵ��� �ʱ�ȭ ����
	Rectangle rec = { pos2, pos1 };		// ������ ������ Point��ü�� �̿��� Rectangle ��ü ���� �� �ʱ�ȭ
	rec.ShowRecInfo();
	return 0;
}
#ifndef __POINT_H_
#define __POINT_H_
// ��������� ���𹮸� �ۼ�
class Point
{
private:
	int x;
	int y;

public:
	bool InitMembers(int xpos, int ypos);
	int GetX() const;
	int GetY() const;
	bool SetX(int xpos);
	bool SetY(int ypos);
};
#endif
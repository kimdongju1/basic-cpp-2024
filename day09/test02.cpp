#include <iostream>
using namespace std;

class Point
{
private:
    int apos, bpos;

public:
    Point(int a = 0, int b = 0) : apos(a), bpos(b) 
    { }

    Point operator+(const Point &ref)
    {
        Point result(apos + ref.apos, bpos + ref.bpos);
        return result;
    }

    friend Point operator+(const int &num, const Point &point)
    {
        Point result(num + point.apos, point.bpos);
        return result;
    }

    friend ostream &operator<<(ostream &out, const Point &point)
    {
        out << '[' << point.apos << ", " << point.bpos << ']';
        return out;
    }
    void ViewPoint() const
    {
        cout << '[' << apos << ", " << bpos << ']' << endl;
    }

};

int main()
{
    Point a(10, 20);
    Point b(30, 40);
    Point c = a + b;
    Point d = a + 100;
    Point e = 100 + a;

    a.ViewPoint();
    b.ViewPoint();

    cout << c << endl;
    cout << d << endl;
    cout << e << endl;

    return 0;
}
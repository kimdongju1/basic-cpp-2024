#include <iostream>
using namespace std;

class Myclass
{
private:
	int num;
public:
	Myclass(int a) : num(a)
	{ }
	void ShowNum() const
	{
		cout << 'num' << endl;
	}
	Myclass operator+(const Myclass& ref)
	{
		Myclass num(num + ref.num);
		return num;
	}
};

int main()
{
	Myclass a(10);
				// value : 10

	Myclass b(a);
	b.ShowNum();			// value : 10

	Myclass c = b;
	b.ShowNum();		// value : 10

	Myclass d = a + b + c;		// value : 30
	d.ShowNum();



	return 0;
}
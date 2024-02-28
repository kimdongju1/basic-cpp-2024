#include <iostream>
using namespace std;

class Temporary
{
private:
	int num;
public:
	Temporary(int n) : num(n)
	{
		cout << "create obj: " << num << endl;
	}
	~Temporary()
	{
		cout << "destroy obj: " << num << endl;
	}
	void ShowTempInfo()
	{
		cout << "My num is " << num << endl;
	}
};

int main(void)
{
	Temporary(100); // Temporary t(100); 로 하는 것이 기본인데 코드 오류가 나지않는것은 임시객체(임시객체는 주소가없다)라는 뜻이다.
	cout << "********** after make!" << endl << endl;

	Temporary(200).ShowTempInfo();	// 임시객체를 생성, 이 객체를 대상으로 ShowTempInfo 함수를 호출 
	cout << "********** after make!" << endl << endl;

	const Temporary& ref = Temporary(300);			// 임시객체는 참조가 안됨, const를 붙히면 참조가 된다.
	cout << "********** end of main!" << endl << endl;
	return 0;
}
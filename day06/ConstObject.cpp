#include <iostream>
using namespace std;

class SoSimple
{
private:
	int num;
public:
	SoSimple(int n) : num(n)
	{ }
	SoSimple& AddNum(int n)		// 멤버 함수: 현재 객체에 정수를 더하고 자기 자신을 반환
	{
		num += n;
		return *this;
	}
	void ShowData() const
	{
		cout << "num: " << num << endl;
	}
};

int main(void)
{
	const SoSimple obj(7);	// const 객체 생성 
	// obj.AddNum(20);		// AddNum은 const 함수가 아니기 때문에 호출 불가능
	obj.ShowData();			// ShowData는 const 함수이기 때문에 const 객체를 대상으로 호출 가능 
	return 0;
}
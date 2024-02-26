#include <iostream>
using namespace std;

class MyClass{
	int num;

public:
	MyClass(){ // default 생성자
		cout << "생성자 호출: MyClass()" << endl;
		num = 10;
	}
	MyClass(int anum) {
		cout << "생성자 호출: MyClass(int)" << endl;
		num = anum;
	}
	void MyClassInfo() {
		cout << "num: " << num << endl;
	}
};

int main()
{
	//MyClass *m = new MyClass();
	MyClass m1;		// 객체생성 명령으로 생성자는 자동 호출 된다.
	m1.MyClassInfo();
	MyClass m2(20);	// 12행
	m2.MyClassInfo();
	//MyClass m2();
	// 생성자 만들면 자동으로 디폴드 생성자가 호출된다, 입력을 하나 갖는 생성자 , 입력 값을 갖지않는 객체는 디폴트 생성자가 있어야 생성됨
	return 0;
}
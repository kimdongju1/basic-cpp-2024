#include <iostream>
using namespace std;

class MyClass{
	int num;

public:
	MyClass(){ // default ������
		cout << "������ ȣ��: MyClass()" << endl;
		num = 10;
	}
	MyClass(int anum) {
		cout << "������ ȣ��: MyClass(int)" << endl;
		num = anum;
	}
	void MyClassInfo() {
		cout << "num: " << num << endl;
	}
};

int main()
{
	//MyClass *m = new MyClass();
	MyClass m1;		// ��ü���� ������� �����ڴ� �ڵ� ȣ�� �ȴ�.
	m1.MyClassInfo();
	MyClass m2(20);	// 12��
	m2.MyClassInfo();
	//MyClass m2();
	// ������ ����� �ڵ����� ������ �����ڰ� ȣ��ȴ�, �Է��� �ϳ� ���� ������ , �Է� ���� �����ʴ� ��ü�� ����Ʈ �����ڰ� �־�� ������
	return 0;
}
#include <iostream> // ������� => ������ ����ϴ°�

int main(void){ // ��ȣ�� ��� �� �� = �Է� ��(�Է°� = �ִ� ����), main = �Լ���, int = �Լ��� ���, ��ü= �Լ��� ����
	// �Ӹ� = 3��, ��ü = �Ӹ� �� {} ����, void = ��°� 
	int a = 20;
	std::cout << "Hello World!" << std::endl;
	std::cout << "Hello " <<"World!" << std::endl;
	std::cout << a << ' '<< 'A';
	std::cout << ' ' << 3.14 << std::endl;
	return 0;
}

/* 1. �Լ� ����
* void func() { //�Լ� �̸� = func, �Է� = X, ��� = X
*
*}


* void func1(int a) { //�Լ� �̸� = func1, �Է� = int a, ��� = X
*
* }


* int func2(){ //�Լ� �̸� = func2, �Է� = x, ��� = int, �Ű����� => x
* 
*	return int(����); -> �Լ� ��ȯ�ϴ� ��, return Ű���� ��� => ��ȯ�� �� int(����) ���� -> int�������� ��ȯ
* 
* }

* {} = ������ ����(���̽� �ܿ� �߰�ȣ ����), ���̽� = ����
*/


/* 2. �Լ� ȣ��
* func(); // �Լ��Ӹ����� ��� => ����!
* func1();
* func2();

*/

// num = ���� 10 ����
// ���α׷� ���� => ram�� ����

// int num; // ���� ���� ����, ���� ���� = �޸𸮿� �����Ҽ� �ִ� ����
// num = 10; // ���� <- ���� ����

// �Լ��� ���� ���� = ��ȣ
// ���� ���� ����
// �Լ� ����, �Լ� �����ϰ� ����ϰ�, ȣ���ϱ�
// �Լ� ���� ���� => ����ϱ� ���ؼ� => �Լ� ����  => �Լ� ȣ��
// ���� (�� = �����ϴ� �޸� ����) => �����ϰ� �Լ� �ۼ��� �ؿ� 
// �Լ� => ���� => ȣ�� 
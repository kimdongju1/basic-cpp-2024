/*

	�޸� �����Ҵ� : new ������ ��� 
	���� : ���α׷� ���� �߿� �޸𸮸� �Ҵ� �޴´�.
*/
#include <iostream>
using namespace std;

int main()
{
	cout << "int size: " << sizeof(int) << endl;
	int *pi = new int;	// *: �����ͺ��� ��Ÿ��	// new �����ڸ� ���ؼ� �� ������ int(4byte) ũ�⸸ŭ �޸𸮰��� �Ҵ�ް� �Ҵ���� 
						// �޸��� �ּҸ� ���Ͻ����ش�.
	*pi = 10; // * : �����Ͱ� ����Ű�� ���� ������(�������)�� ��Ÿ��
	cout << "Pi�� ����Ű�� ���� ����� ��: " << *pi << endl;
	
	delete pi;		// �� ������ �޸� ������ �Ҵ�޾����� ������ ��ȯ�ؾߵ�(���� �Ҵ���� �޸� ������ ��ȯ�Ѵ�.), C++���ش�

	int *pary = new int[10];	// new �����ڸ� ���ؼ� �Ҵ���ִ� �޸� �ּҸ� ũ�Ⱑ 10�� ������ �迭���·� �Ҵ��ϰ� pary�� ����
	cout << sizeof(pary) << endl;
	for (int i = 0; i < sizeof(pary); i++) {
		pary[i] = i + 10;		// �迭�� �� �濡 ����(���)���� ���� �ִ´�.ex) pary[0] = 10
	}

	for (int i = 0; i < 10; i++) {
		printf("pary[%d] : %d\n", i, pary[i]);
	}

	delete []pary;			// �迭�� �����Ҵ��� �޸𸮸� ��ȯ�Ѵ�.

	return 0;
}


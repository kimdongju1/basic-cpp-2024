#include <iostream>
using namespace std;

int main(void)
{
	int a = 10;
	int b = 20;
	int c = 30; 
	int ary[3] = {10,20,30}; // ������ ���� a, b, c�� �����ϰ� ���� 10, 20, 30���� �ʱ�ȭ. 
	ary[0] = 1111; //�迭 ary�� 0�� �� => ù ��° ��Ҹ� 1111�� ����.

	for (int i = 0; i < 10; i++) {
		cout << i << endl;
		// for ����: i�� 0���� 9���� �����ϸ鼭 ������ ����.
			//cout << i << endl; : ������ i ���� ����ϰ� �� �ٷ� �̵�.
	}
	return 0;
}

// �� �� for ������ ����Ǹ� 0���� 9������ ���ڸ� ���
// -> ���������� 0�� ��ȯ�Ͽ� ���α׷��� ����
// ary = �迭, [3] -> �� 3�� 
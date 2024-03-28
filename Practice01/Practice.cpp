#include <iostream>

int main() {
    // �ʱ� �迭 ����
    char ary[] = { 'a', 'b', 'c', 'd', 'e', 'f' };
    // �迭�� ���� ���
    int length = sizeof(ary) / sizeof(ary[0]);
    // ���ο� �迭�� ������ �� �迭 ����
    char new_ary[length];
    // �ʱ� �迭�� �ε��� ���� �ʱ�ȭ
    int index = length - 1;

    // �迭�� ������ �����Ͽ� �������� ���Ҹ� ���ο� �迭�� ����
    int new_index = 0; // ���ο� �迭�� �ε��� ���� �ʱ�ȭ
    while (index >= 0) {
        // ���� �ε����� ���Ҹ� ���ο� �迭�� ����
        new_ary[new_index] = ary[index];
        // ���� �ε����� �̵�
        new_index++;
        index--;

        // �迭�� ������ �������� �� while ������ ����
        if (index ==-1) // ���⼭ ���� �߻�
            break;
    }

    // ��� ���
    std::cout << "Original Array: ";
    int i = 0;
    while (i < length) {
        std::cout << ary[i] << " ";
        i++;
    }
    std::cout << std::endl;

    std::cout << "New Array: ";
    i = 0;
    while (i < length) {
        std::cout << new_ary[i] << " ";
        i++;
    }
    std::cout << std::endl;

    return 0;
}

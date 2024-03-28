#include <iostream>

int main() {
    // 초기 배열 정의
    char ary[] = { 'a', 'b', 'c', 'd', 'e', 'f' };
    // 배열의 길이 계산
    int length = sizeof(ary) / sizeof(ary[0]);
    // 새로운 배열을 저장할 빈 배열 생성
    char new_ary[length];
    // 초기 배열의 인덱스 변수 초기화
    int index = length - 1;

    // 배열의 끝부터 시작하여 역순으로 원소를 새로운 배열에 저장
    int new_index = 0; // 새로운 배열의 인덱스 변수 초기화
    while (index >= 0) {
        // 현재 인덱스의 원소를 새로운 배열에 저장
        new_ary[new_index] = ary[index];
        // 다음 인덱스로 이동
        new_index++;
        index--;

        // 배열의 끝까지 도달했을 때 while 루프를 종료
        if (index ==-1) // 여기서 오류 발생
            break;
    }

    // 결과 출력
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

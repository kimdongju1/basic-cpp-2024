#include<iostream>
#include<string.h>
#include<stdlib.h>

//#define _CRT_SECURE_NO_WARNINGS

using namespace std;

char* MakeStrAdR(int len)
{
	char* str = (char*)malloc(sizeof(char) * len); // C:heap영역에 20Byte크기로 메모리 할당
	printf("char size: %llu\n", sizeof(char));
	return str;
}

int main(void)
{
	char* str = MakeStrAdR(20);
	strcpy(str, "I am so happy~");
	cout << str << endl;
	free(str);
	return 0;
}
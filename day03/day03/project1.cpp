#include<iostream>
#include<string.h>
#include<stdlib.h>

//#define _CRT_SECURE_NO_WARNINGS

using namespace std;

char* MakeStrAdR(int len)
{
	char* str = (char*)malloc(sizeof(char) * len); // C:heap������ 20Byteũ��� �޸� �Ҵ�
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
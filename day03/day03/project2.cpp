#include<iostream>
#include<string.h>


//#define _CRT_SECURE_NO_WARNINGS

using namespace std;

char* MakeStrAdR(int len)
{
	//char* str = (char*)malloc(sizeof(char) * len); 
	char* str = new char[len];				// C++: 힙영역에 len 크기만큼 메모리 공간 할당 
	return str;
}

int main(void)
{
	char* str = MakeStrAdR(20);
	strcpy(str, "I am so happy~");
	cout << str << endl;
	//free(str);
	delete []str;					// C++: 할당받은 메모리를 반환
	return 0;
}
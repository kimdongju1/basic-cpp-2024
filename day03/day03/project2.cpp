#include<iostream>
#include<string.h>


//#define _CRT_SECURE_NO_WARNINGS

using namespace std;

char* MakeStrAdR(int len)
{
	//char* str = (char*)malloc(sizeof(char) * len); 
	char* str = new char[len];				// C++: �������� len ũ�⸸ŭ �޸� ���� �Ҵ� 
	return str;
}

int main(void)
{
	char* str = MakeStrAdR(20);
	strcpy(str, "I am so happy~");
	cout << str << endl;
	//free(str);
	delete []str;					// C++: �Ҵ���� �޸𸮸� ��ȯ
	return 0;
}
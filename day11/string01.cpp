/*
	C-Style ���ڿ�
	���ڿ��� �������� �ι��ڰ� �ٴ´�.
*/


#include <iostream>
using namespace std;




int main()
{
	//int code = 97;
	//cout << code << endl;
	//cout << (char)code << endl;
	//cout << "============================" << endl;
	//char ary[6] = { 'a', 'b', 'c', 'd', 'e' };				// ���ڿ� Ÿ���� �迭 ����
	//cout << ary << endl;
	//printf("=============================================\n");	
	//char ary1[] = { 'a', 'b', 'c', '\0', 'e' };				// �ι���-���ڿ��� ���� �˸���.
	//cout << ary1 << endl;
	//cout << sizeof(ary1) << endl;							// ��ü ���� ũ��
	//cout << strlen(ary1) << endl;							// �ι��� �ձ����� ũ��
	//printf("=============================================\n");
	//char str[] = "string";									// �ڵ����� �ι��ڰ� �ٴ´�.
	//cout << str << endl;
	//cout << sizeof(str) << endl;							// �ι��ڰ� ���Ե� ũ�Ⱑ ���ϵȴ�. 
	//cout << strlen(str) << endl;
	//str[0] = 'S';
	//cout << str << endl;
	//printf("=============================================\n");
	//const char* pstr = "STRING";
	//cout << pstr << endl;
	//cout << sizeof(pstr) << endl;							// pstr �������� ũ��
	//cout << strlen(pstr) << endl;
	//// pstr[0] = 's';										// ���ڿ��� �����ͷ� ����ϴ� ���� ������ �Ұ����ϴ�.

	//printf("=============================================\n");
	//printf("=============================================\n");


	/*
		C++ - style : heap ������ �����Ѵ�.
	*/
	string s = "string";
	cout << s << endl;
	cout << sizeof(s) << endl;						
	//cout << strlen(s) << endl;
	cout << s.size() << endl;

	string s1 = "Hongkildong";
	cout << s1 << endl;
	cout << sizeof(s1) << endl;
	cout << s1.size() << endl;


	return 0;
}
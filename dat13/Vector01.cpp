#include <iostream>
#include <vector>
using namespace std;





int main(void)
{
	/*
	vector<int> v;	// intŸ�� vector ���� 
	
	for (int i = 0; i < 10; i++)
    {
      v.push_back(i + 1);
      printf("v[%d]: %d\n", i, v[i]);
      printf("v.size(): %d\n", v.size());                  // ���Ұ���
      printf("v.capacity(): %d\n", v.capacity());            // �޸� ����
    }

	v.push_back(20);
	v.push_back(21);
	/*
	for (vector<int>::size_type i = 0; i < v.size(); i++)
	{
		//v.push_back(i + 1);
		printf("v[%d]: %d\n", i, v[i]);
		printf("v.at(i): %d\n", v.at(i));
	}

	 for (int i = 0; i < v.size(); i++)
    {
	  //v.push_back(i + 1);
	  printf("v[%d]: %d\n", i, v[i]);
	  printf("v.at(i) : %d\n", v.at(i));
    }


	cout << "iterator: �ݺ���" << endl;
	vector<int>::iterator iter;
	for (iter = v.begin(); iter != v.end(); iter++)
	{
		cout << "*iter: " << *iter << endl;
	}
	*/
	vector<string> vs;

	vs.push_back("Hi");
	vs.push_back('Hello');
	vs.push_back("Hongkildong");
	cout << "vs.front()" << vs.front() << endl;
	cout << "vs.back()" << vs.back() << endl;
	vector<string>::iterator it;
	for (it = vs.begin(); it != vs.end(); it++)
	{
		cout << *it << endl;
	}

	vector<int> v1;			// ũ�Ⱑ 0�� ���Ͱ� ����
	vector<int> v2(5);		// ũ�Ⱑ 5�� ���Ͱ� ����(0���� �ʱ�ȭ)
	vector<int> v3 = { 10, 20, 30 };
	vector<int> v4(10, 7);	// ũ�Ⱑ 10�̰�, 7�� �ʱ�ȭ

	return 0;
}
#include <iostream>
#include <vector>
using namespace std;

int main(void)
{
	
	vector<int> v;	// int타입 vector 생성 
	int inKey;
	int sum = 0;

	while (true)
	{
		cout << "정수 한개 입력(0 종료): ";
		cin >> inKey;
		if (!inKey)
		{
			break;
		}
		v.push_back(inKey);
		for (int i = 0; i < v.size(); i++)
		{
			cout << v.at(i) << endl;
		}
		sum += inKey;
		cout << sum / v.size() << endl;
	}

	cout << "프로그램을 종료합니다. " << endl;

	return 0;
	
}
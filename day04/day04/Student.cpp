#include <iostream>
#include <cstring>
using namespace std;


class StudentClass
{
	int ID;				// �й��� ���ȭ
	char name[20];		// ���ڿ� �迭�� �����ϰ� �ٷ� �ʱ�ȭ���� �ʴ� ���� strcpy()�� ���Ͽ� �ʱ�ȭ�Ѵ�.
	char major[20];
	int age;

public:
	// ���ڿ��� �ּұ� ������ ������ ������ �־ ����Ѵ�. - ���ڿ��� ù��° ���� �ּҰ� ����ȴ�.
	// ����̴ϼȶ������ ��ü ������ �ʱ�ȭ�����ʴ� ������� �ʱ�ȭ�Ҷ� ����Ѵ�. �� ��ü������ ������� �̸� �ʱ�ȭ�� �Ǵ� ����鿡 �ʱ�ȭ
	StudentClass(int aID, const char* pname, const char* pmajor, int aage) 
		: ID(aID), age(aage){ // ��� �̴ϼȶ�����
		strcpy(name, pname);		// ���ڿ��迭�� �����ϰ� �ٷ� �ʱ�ȭ���� �ʴ°��� strcpy()�� ���Ͽ� �ʱ�ȭ�Ѵ�.
		strcpy(major, pmajor);		// 
		
	}
	void ShowData() const
	{
		cout << ID << ' ' << name << ' ' << major << ' ' << age << endl;
	}
};

int main(void)
{
	StudentClass s1(2052455, "ȫ�浿", "���ڰ��а�", 29);		// ��ü�� �����ϸ� �����ڸ� ȣ���ؾ� �Ѵ�.
	s1.ShowData();
	

	return 0;
}
#include <iostream>
using namespace std;

class PermanentWorkter
{
private:
	char name[100];
	int salary;		// �Ŵ� �����ؾ� �ϴ� �޿���
public:
	PermanentWorkter(const char* name, int money)
		: salary(money)
	{
		strcpy(this->name, name);
	}
	int GetPay() const
	{
		return salary;
	}
	void ShowSalaryInfo() const
	{
		cout << "name: " << name << endl;
		cout << "salary: " << GetPay() << endl << endl;
	}
};

class EmployeeHandler
{
private:
	PermanentWorkter* empList[50];		// ��ü������ �迭 
	int empNum;
public:
	EmployeeHandler() : empNum(0)
	{ }
	void AddEmployee(PermanentWorkter* emp)		// ������ ��ü�� �����͸� �޾Ƽ� empList �迭�� ����ִ´�.
	{
		empList[empNum++] = emp;
	}
	void ShowAllSalaryInfo() const
	{
		for (int i = 0; i < empNum; i++)
			empList[i]->ShowSalaryInfo();	// empList�迭�� ��Ұ�(��ü�ּ�)�� ���ؼ� ����Լ��� ���� 
	}
	void ShowTotalSalary() const
	{
		int sum = 0;
		for (int i = 0; i < empNum; i++)
			sum += empList[i]->GetPay();
		cout << "salary sum: " << sum << endl;
	}
	~EmployeeHandler()
	{
		for (int i = 0; i < empNum; i++)
			delete empList[i];
	}
};

int main(void)
{
	// ���������� �������� ����� ��Ʈ�� Ŭ������ ��ü����
	EmployeeHandler handler;

	// ���� ���
	handler.AddEmployee(new PermanentWorkter("KIM", 1000));		// �� ������ ����
	handler.AddEmployee(new PermanentWorkter("LEE", 1500));
	handler.AddEmployee(new PermanentWorkter("JUN", 2000));

	// �̹� �޿� �����ؾ� �� �޿��� ����
	handler.ShowAllSalaryInfo();

	// �̹� �޿� �����ؾ� �� �޿��� ����
	handler.ShowTotalSalary();
	return 0;
}
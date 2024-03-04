#include <iostream>
#include <cstring>
using namespace std;

class Employee
{
private:
	char name[100];
public:
	Employee(const char* name)
	{
		strcpy(this->name, name);
	}
	void ShowYourName() const
	{
		cout << "name: " << name << endl;
	}
	virtual int GetPay() const				// 차이점
	{
		return 0;
	}
	virtual void ShowSalaryInfo() const		// 차이점
	{ }

};

class PermanentWorker : public Employee		// 이전의 PermanentWorker 클래스와 차이점은 Employee 클래스를 상속한다는 점이다. 
{											//때문에 이름과 관련된 멤버는 모두 제거함.
private:
	int salary;		// 월 급여
public:
	PermanentWorker(const char* name, int money)
		: Employee(name), salary(money)
	{ }
	int GetPay() const
	{
		return salary;
	}
	void ShowSalaryInfo() const
	{
		ShowYourName();
		cout << "salary: " << GetPay() << endl << endl;
	}
};

class TemporaryWorker : public Employee		// 이전의 PermanentWorker 클래스와 차이점은 Employee 클래스를 상속한다는 점이다. 
{											//때문에 이름과 관련된 멤버는 모두 제거함.
private:
	int workTime;		// 이 달에 일한 시간의 합계
	int payPerHour;		// 시간당 급여
public:
	TemporaryWorker(const char* name, int pay)
		: Employee(name), workTime(0), payPerHour(pay)
	{ }
	void AddWorkTime(int time)		// 일한 시간의 추가
	{
		workTime += time;
	}
	int GetPay() const		// 이 달의 급여
	{
		return workTime * payPerHour;
	}
	void ShowSalaryInfo() const
	{
		ShowYourName();
		cout << "salary: " << GetPay() << endl << endl;
	}
};

class SalesWorker : public PermanentWorker		// 이전의 PermanentWorker 클래스와 차이점은 Employee 클래스를 상속한다는 점이다. 
{											//때문에 이름과 관련된 멤버는 모두 제거함.
private:
	int salesResult;		// 월 판매실적
	double bonusRatio;		// 상여금 비율
public:
	SalesWorker(const char* name, int money, double ratio)
		: PermanentWorker(name, money), salesResult(0), bonusRatio(ratio)
	{ }
	void AddSalesResult(int value)
	{
		salesResult += value;
	}
	int GetPay() const
	{
												// 오버라이딩된 멤버함수는 자식것이 실행된다
		return PermanentWorker::GetPay()		// 따라서 재정의된 부모것을 호출할려면 PermanentWorker(부모)의 GetPay 함수 호출
			+ (int)(salesResult * bonusRatio);
	}
	void ShowSalaryInfo() const
	{
		ShowYourName();
		cout << "salary: " << GetPay() << endl << endl;		// SalesWorker의 GetPay 함수가 호출됨
	}
};

class EmployeeHandeler		// 저장의 대상이 PermanentWorker 객체에서 Employee 객체로 변경. 
{							// 그러나 PermanentWorker 객체 역시 Employee 객체의 일종이므로 저장 가능.
private:
	Employee* empList[50];		// 객체포인터 배열 
	int empNum;
public:
	EmployeeHandeler() : empList(), empNum(0)	// empList()- nullptr 초기화 = empList{}
	{ }
	void AddEmployee(Employee* emp)		// AddEmployee 함수의 인자로 Employee 객체의 주소 값을 전달해야 한다. 
	{									// 따라서 Employee 클래스를 상속하는 PermanentWorker 객체의 주소 값도 전달 가능.
		empList[empNum++] = emp;
	}
	void ShowAllSalaryInfo() const
	{
		
		for(int i=0; i<empNum; i++)
			empList[i]->ShowSalaryInfo();	// 함수호출문이 컴파일 에러를 일으키기 때문에 주석처리
		
	}
	void ShowTotalSalary() const
	{
		int sum = 0;
		
		for (int i = 0; i < empNum; i++)
			sum += empList[i]->GetPay();	// 함수 호출문이 컴파일 에러를 일으키기 때문에 주석처리
		
		cout << "salary sum: " << sum << endl;
	}
	~EmployeeHandeler()
	{
		for (int i = 0; i < empNum; i++)
			delete empList[i];
	}
};

int main(void)
{
	// 직원관리를 목적으로 설계된 컨트롤 클래스의 객체생성
	EmployeeHandeler handler;

	// 정규직 등록
	handler.AddEmployee(new PermanentWorker("KIM", 1000));
	handler.AddEmployee(new PermanentWorker("LEE", 1500));

	// 임시직 등록
	TemporaryWorker* alba = new TemporaryWorker("Jung", 700);
	alba->AddWorkTime(5);		// 5시간 일한결과 등록
	handler.AddEmployee(alba);

	// 영업직 등록
	SalesWorker* seller = new SalesWorker("Hong", 1000, 0.1);
	seller->AddSalesResult(7000);		// 영업실적 7000
	handler.AddEmployee(seller);

	// 이번 달에 지불해야 할 급여의 정보
	handler.ShowAllSalaryInfo();

	// 이번 달에 지불해야 할 급여의 총합
	handler.ShowTotalSalary();
	return 0;
}
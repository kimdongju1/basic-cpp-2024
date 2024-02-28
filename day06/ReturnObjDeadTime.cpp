#include <iostream>
using namespace std;

class SoSimple
{
private:
	int num;	// 沥荐屈 糕滚 函荐 
public:
	SoSimple(int n) : num(n)
	{
		cout << "New Object: " << this << endl;		
	}
	SoSimple(const SoSimple& copy) : num(copy.num)
	{
		cout << "New Copy obj: " << this << endl;
	}
	~SoSimple()
	{
		cout << "Destroy obj: " << this << endl;
	}
};

SoSimple SimpleFuncObj(SoSimple ob)
{
	cout << "Parm ADR: " << &ob << endl;		// &ob : 按眉 ob狼 林家
	return ob;
}

int main(void)												
{
	SoSimple obj(7);									
	SimpleFuncObj(obj);		

	cout << endl;
	SoSimple tempRef = SimpleFuncObj(obj);
	cout << "Retrun Obj " << &tempRef << endl;
	return 0;
}	/*
	New Object: 0000003E0FEFF814 : 按眉obj 林家
	New Copy obj: 0000003E0FEFF914 : 按眉 ob 林家
	Parm ADR: 0000003E0FEFF914 : 按眉 ob 林家	
	New Copy obj: 0000003E0FEFF954 : 烙矫按眉 林家
	Destroy obj: 0000003E0FEFF914 : 按眉ob 家戈 
	Destroy obj: 0000003E0FEFF954 : 烙矫按眉 家戈

	New Copy obj: 0000003E0FEFF974 : 按眉 ob 积己
	Parm ADR: 0000003E0FEFF974 : 按眉 ob 林家
	New Copy obj: 0000003E0FEFF834 : 烙矫按眉 林家
	Destroy obj: 0000003E0FEFF974 : 按眉 ob 家戈
	Retrun Obj 0000003E0FEFF834 : 烙矫按眉 林家
	Destroy obj: 0000003E0FEFF834 : 烙矫按眉 家戈
	Destroy obj: 0000003E0FEFF814 : 按眉obj 家戈 
	*/
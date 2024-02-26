#include <iostream>
using namespace std;		// 이런 공간(27,28행)을 사용

class FruitSellar		
{
private:
	int APPLE_PRICE;
	int numOfApples;
	int myMoney;

public:
	void InitMembers(int price, int num, int money)		//----> 생성자(기능 : 객체를 생성하고 초기화한다.)
	{
		APPLE_PRICE = price;		// 위에 값들(7-9행) 초기화 
		numOfApples = num;
		myMoney = money;
	}
	int SaleApples(int money)
	{
		int num = money / APPLE_PRICE;		// 판매개수
		numOfApples -= num;					// 남은 사과갯수, numOfApples = numOfApples - num;
		myMoney += money;					// 번 돈, myMoney = myMoney + money; 
		return num;
	}
	void ShowSalesResult()
	{
		cout << "남은 사과: " << numOfApples << endl;
		cout << "판매 수익: " << myMoney << endl << endl;
	}
};

class FruitBuyer
{
	int myMoney;		// private:		//클래스 내에서 접근제어 지시자가 생략되었으니, 이 둘은 private으로 간주
	int numOfApples;		// private:		//클래스 내에서 접근제어 지시자가 생략되었으니, 이 둘은 private으로 간주

public:
	void InitMembers(int money)
	{
		myMoney = money;
		numOfApples = 0;
	}
	void BuyApples(FruitSellar &refseller, int money)		// int& num = n;
	{
		numOfApples += refseller.SaleApples(money);	// 과일장수를 대상으로 과일의 구매를 목적으로 SaleApples 함수를 호출
		myMoney -= money;
	}
	void ShowBuyResult()
	{
		cout << "현재 잔액: " << myMoney << endl;
		cout << "사과 개수: " << numOfApples << endl << endl;
	}
};

int main(void)
{
	FruitSellar seller;
	seller.InitMembers(1000, 20, 0);
	FruitBuyer buyer;
	buyer.InitMembers(5000);
	buyer.BuyApples(seller, 2000);		// 과일의 구매!	// 사과를 구매하는데 필요한 두가지 '구매대상', '구매금액'

	cout << "과일 판매자의 현황" << endl;
	seller.ShowSalesResult();
	cout << "과일 구매자의 현황" << endl;
	buyer.ShowBuyResult();
	return 0;
}
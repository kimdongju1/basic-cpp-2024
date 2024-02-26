#include <iostream>
using namespace std;		// �̷� ����(27,28��)�� ���

class FruitSellar		
{
private:
	int APPLE_PRICE;
	int numOfApples;
	int myMoney;

public:
	void InitMembers(int price, int num, int money)		//----> ������(��� : ��ü�� �����ϰ� �ʱ�ȭ�Ѵ�.)
	{
		APPLE_PRICE = price;		// ���� ����(7-9��) �ʱ�ȭ 
		numOfApples = num;
		myMoney = money;
	}
	int SaleApples(int money)
	{
		int num = money / APPLE_PRICE;		// �ǸŰ���
		numOfApples -= num;					// ���� �������, numOfApples = numOfApples - num;
		myMoney += money;					// �� ��, myMoney = myMoney + money; 
		return num;
	}
	void ShowSalesResult()
	{
		cout << "���� ���: " << numOfApples << endl;
		cout << "�Ǹ� ����: " << myMoney << endl << endl;
	}
};

class FruitBuyer
{
	int myMoney;		// private:		//Ŭ���� ������ �������� �����ڰ� �����Ǿ�����, �� ���� private���� ����
	int numOfApples;		// private:		//Ŭ���� ������ �������� �����ڰ� �����Ǿ�����, �� ���� private���� ����

public:
	void InitMembers(int money)
	{
		myMoney = money;
		numOfApples = 0;
	}
	void BuyApples(FruitSellar &refseller, int money)		// int& num = n;
	{
		numOfApples += refseller.SaleApples(money);	// ��������� ������� ������ ���Ÿ� �������� SaleApples �Լ��� ȣ��
		myMoney -= money;
	}
	void ShowBuyResult()
	{
		cout << "���� �ܾ�: " << myMoney << endl;
		cout << "��� ����: " << numOfApples << endl << endl;
	}
};

int main(void)
{
	FruitSellar seller;
	seller.InitMembers(1000, 20, 0);
	FruitBuyer buyer;
	buyer.InitMembers(5000);
	buyer.BuyApples(seller, 2000);		// ������ ����!	// ����� �����ϴµ� �ʿ��� �ΰ��� '���Ŵ��', '���űݾ�'

	cout << "���� �Ǹ����� ��Ȳ" << endl;
	seller.ShowSalesResult();
	cout << "���� �������� ��Ȳ" << endl;
	buyer.ShowBuyResult();
	return 0;
}
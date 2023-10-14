#include "FileName.h"



int FruitSeller::SaleApples(int money)
{
	int num = money / APPLE_PRICE;
	numOfApples -= num;
	myMoney += money;
	return num;
}
void FruitSeller::ShowSalesResult() const
{
	cout << "남은 사과: " << numOfApples << endl;
	cout << "판매 수익: " << myMoney << endl << endl;
}


void FruitBuyer::BuyApples(FruitSeller& seller, int money)
{
	if (money < 0) {
		cout << "money less than 0" << endl;
		return;
	}
	numOfApples += seller.SaleApples(money);
	myMoney -= money;
}
void FruitBuyer::ShowBuyResult() const
{
	cout << "현재 잔액: " << myMoney << endl;
	cout << "사과 개수: " << numOfApples << endl << endl;
}


int main(void)
{
	Ring ring;
	ring.Init(1, 1, 4, 2, 2, 9);
	ring.ShowRingInfo();
	return 0;
}


/*

	FruitSeller seller(1000, 20, 0);
	FruitBuyer buyer(5000);
	buyer.BuyApples(seller, 2000);

	cout << "과일 판매자의 현황" << endl;
	seller.ShowSalesResult();
	cout << "과일 구매자의 현황" << endl;
	buyer.ShowBuyResult();

*/
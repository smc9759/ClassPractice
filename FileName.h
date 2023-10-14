#pragma once
#include <iostream>
using namespace std;

class SimpleClass
{
private:
	int num;

public:
	void InitNum(int n)
	{
		num = n;
	}
	int GetNum() const {
		return num;
	}
	void ShowNum() const
	{
		cout << GetNum() << endl;
	}
};

class FruitSeller
{
	int APPLE_PRICE;
	int numOfApples;
	int myMoney;

public:
	FruitSeller(int price, int num, int money) {
		APPLE_PRICE = price;
		numOfApples = num;
		myMoney = money;
	}
	int SaleApples(int money);
	void ShowSalesResult() const;
};

class FruitBuyer
{
	int myMoney;
	int numOfApples;
public:
	FruitBuyer(int money)
	{
		myMoney = money;
		numOfApples = 0;
	}
	void BuyApples(FruitSeller& seller, int money);
	void ShowBuyResult() const;
};

class Point
{
private:
	int xpos, ypos;
public:
	void Init(int x, int y) {
		xpos = x;
		ypos = y;
	}
	void ShowPointInfo()const
	{
		cout << "[" << xpos << ", " << ypos << "]" << endl;
	}
};

class Circle {
private:
	Point point;
	int radius;
public:
	void Init(int xpos, int ypos, int radius) {
		this->radius = radius;
		point.Init(xpos, ypos);
	}
	void ShowCircleInfo()const
	{
		cout << "radius: " << radius << endl;
		point.ShowPointInfo();
		
	}
};

class Ring {
private:
	Circle Inner_Circle;
	Circle Outer_Circle;
public:
	void Init(int inner_xpos, int inner_ypos, int inner_radius, int outer_xpos, int outer_ypos, int outer_radius)
	{
		Inner_Circle.Init(inner_xpos, inner_ypos, inner_radius);
		Outer_Circle.Init(outer_xpos, outer_ypos, outer_radius);
	}
	void ShowRingInfo()
	{
		cout << "Inner Circle Info..." << endl;
		Inner_Circle.ShowCircleInfo();
		cout << "Outer Circle Info..." << endl;
		Outer_Circle.ShowCircleInfo();
	}
};
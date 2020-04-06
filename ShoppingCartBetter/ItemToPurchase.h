#pragma once
#include <string>
#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

class ItemToPurchase
{
public:
	ItemToPurchase(string newName = "none", string newDescription = "none", double newPrice = 0, int newQuantity = 0);
	~ItemToPurchase();

	int GetQuantity();
	void SetQuantity(int newQuantity);

	string GetName();
	void SetName(string newName);

	double GetPrice();
	void SetPrice(double newPrice);

	string GetDescription();
	void SetDescription(string newDescription);

	void PrintCost();

	void PrintDescription();

private:
	int itemQuantity;
	string itemName;
	double itemPrice;
	string itemDescription;
};


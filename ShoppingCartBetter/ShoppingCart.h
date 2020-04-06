#pragma once
#include "ItemToPurchase.h"

class ShoppingCart
{
public:
	ShoppingCart(string userName = "none", string userDate = "January 1, 2016");
	~ShoppingCart();

	void SetCustomerName(string customerName);

	void SetDate(string userDate);

	void AddItemToPurchase(ItemToPurchase newItem);

	void RemoveItem(ItemToPurchase newItem);

	void UpdateQuantity(ItemToPurchase newItem, int newQuantity);

	int ReturnQuantity(ItemToPurchase newItem);

	void ReturnNumberYCost();

	void PrintDescription();
private:
	string customerName = "none";
	string dateCreated = "January 1, 2016";
	vector<ItemToPurchase> itemVectors;
};


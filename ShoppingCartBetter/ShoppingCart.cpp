#include "ShoppingCart.h"

ShoppingCart::ShoppingCart(string userName, string userDate)
{
	customerName = userName;
	dateCreated = userDate;
}
ShoppingCart::~ShoppingCart()
{
}

void ShoppingCart::SetCustomerName(string userName)
{
	customerName = userName;
}

void ShoppingCart::SetDate(string userDate)
{
	dateCreated = userDate;
}

void ShoppingCart::AddItemToPurchase(ItemToPurchase newItem)
{
	for (unsigned int i = 0; i < itemVectors.size(); ++i) {
		if (itemVectors.at(i).GetName() == newItem.GetName()) {
			cout << "Item is already in cart. Nothing added.";
			return;
		}
	}
	itemVectors.push_back(newItem);
}

void ShoppingCart::RemoveItem(ItemToPurchase newItem)
{
	for (unsigned int i = 0; i < itemVectors.size(); ++i) {
		if (itemVectors.at(i).GetName() == newItem.GetName()) {
			itemVectors.erase(itemVectors.begin() + i);
			return;
		}
	}
	cout << "Item not found in cart. Nothing removed.";
}

void ShoppingCart::UpdateQuantity(ItemToPurchase newItem, int newQuantity)
{
	for (unsigned int i = 0; i < itemVectors.size(); ++i) {
		if (itemVectors.at(i).GetName() == newItem.GetName()) {
			itemVectors.at(i).SetQuantity(newQuantity);
			return;
		}
	}
	cout << "Item not found in cart. Nothing modified.";
}

int ShoppingCart::ReturnQuantity(ItemToPurchase newItem)
{
	int returnQuantity = 0;
	for (unsigned int i = 0; i < itemVectors.size(); ++i) {
		if (itemVectors.at(i).GetName() == newItem.GetName()) {
			returnQuantity = itemVectors.at(i).GetQuantity();
		}
	}
	return returnQuantity;
}

void ShoppingCart::ReturnNumberYCost()
{
	
	cout << customerName << "'s Shopping Cart - " << dateCreated << endl;
	if (itemVectors.size() == 0) {
		cout << "Shopping cart is empty." << endl << endl;
		return;
	}
	int numOfItems = 0;
	cout << "Number of items: ";
	for (unsigned int i = 0; i < itemVectors.size(); ++i) {
		numOfItems = numOfItems + itemVectors.at(i).GetQuantity();
	}
	cout << numOfItems << endl << endl;

	for (unsigned int i = 0; i < itemVectors.size(); ++i) {
		cout << fixed << setprecision(2) << itemVectors.at(i).GetName() << " " << itemVectors.at(i).GetQuantity() << " @ $" << itemVectors.at(i).GetPrice() << " = $" << itemVectors.at(i).GetQuantity() * itemVectors.at(i).GetPrice() << endl;
	}
	cout << endl;
	double cartTotal = 0;
	for (unsigned int i = 0; i < itemVectors.size(); ++i) {
		cartTotal = cartTotal + (itemVectors.at(i).GetQuantity() * itemVectors.at(i).GetPrice());
	}
	cout << fixed << setprecision(2) << "Total: $" << cartTotal;
	cout << endl << endl;
}

void ShoppingCart::PrintDescription()
{
	cout << customerName << "'s Shopping Cart - " << dateCreated << endl;
	if (itemVectors.size() == 0) {
		cout << "Shopping cart is empty." << endl << endl;
		return;
	}

	cout << "Item Descriptions" << endl;
	for (unsigned int i = 0; i < itemVectors.size(); ++i) {
		cout << itemVectors.at(i).GetName() << ": " << itemVectors.at(i).GetDescription() << endl;
		cout << endl;
	}
}

#include "ItemToPurchase.h"

ItemToPurchase::ItemToPurchase(string newName, string newDescription, double newPrice, int newQuantity)
{
}
ItemToPurchase::~ItemToPurchase()
{
}

int ItemToPurchase::GetQuantity()
{
	return itemQuantity;
}
void ItemToPurchase::SetQuantity(int newQuantity)
{
	itemQuantity = newQuantity;
}

std::string ItemToPurchase::GetName()
{
	return itemName;	
}
void ItemToPurchase::SetName(std::string newName)
{
	itemName = newName;
}

double ItemToPurchase::GetPrice()
{
	return itemPrice;
}
void ItemToPurchase::SetPrice(double newPrice)
{
	itemPrice = newPrice;
}

string ItemToPurchase::GetDescription()
{
	return itemDescription;
}
void ItemToPurchase::SetDescription(string newDescription)
{
	itemDescription = newDescription;
}

void ItemToPurchase::PrintCost()
{
	cout << fixed << setprecision(2) << itemName << " " << itemQuantity << " @ $" << itemPrice << " = $" << itemQuantity * itemPrice << endl;
}

void ItemToPurchase::PrintDescription()
{
	cout << itemName << ": " << itemDescription << endl;
}
#include "ShoppingCart.h"

int main() {
	string userName;
	string userDate;
	string newName;
	string newDescription;
	int newQuantity;
	double newPrice;
	string userOption = "options";

	cout << "Enter Customer's Name: ";
	getline(cin, userName);
	cout << endl;

	cout << "Enter Today's Date: ";
	getline(cin, userDate);
	cout << endl << endl;

	ShoppingCart userCart(userName, userDate);

	cout << "Enter option:";
	cin >> userOption;
	cin.clear();
	cin.ignore(10000, '\n');

	cout << endl;

	while (userOption != "quit") {

		if (userOption == "add") {
			ItemToPurchase item1;
			cout << "Enter the item name: ";
			getline(cin, newName);
			item1.SetName(newName);
			cout << endl;

			cout << "Enter the item description: ";
			getline(cin, newDescription);
			item1.SetDescription(newDescription);
			cout << endl;

			cout << "Enter the item price: ";
			cin >> newPrice;
			cin.clear();
			cin.ignore(10000, '\n');
			item1.SetPrice(newPrice);
			cout << endl;

			cout << "Enter the item quantity: ";
			cin >> newQuantity;
			cin.clear();
			cin.ignore(10000, '\n');
			item1.SetQuantity(newQuantity);
			cout << endl << endl;

			userCart.AddItemToPurchase(item1);
		}

		if (userOption == "remove") {
			ItemToPurchase item1;
			cout << "Enter name of the item to remove:";
			getline(cin, newName);
			item1.SetName(newName);
			cout << endl << endl;

			userCart.RemoveItem(item1);
		}

		if (userOption == "change") {
			int changeQuantity;
			ItemToPurchase item1;
			cout << "Enter the item name:";
			getline(cin, newName);
			item1.SetName(newName);
			cout << endl;
			cout << "Enter the new quantity: ";
			cin >> changeQuantity;
			cin.clear();
			cin.ignore(10000, '\n');
			cout << endl << endl;
			userCart.UpdateQuantity(item1, changeQuantity);
		}

		if (userOption == "descriptions") {
			userCart.PrintDescription();
		}

		if (userOption == "cart") {
			userCart.ReturnNumberYCost();
		}

		if ((userOption != "add") && (userOption != "remove") && (userOption != "change") && (userOption != "descriptions") && (userOption != "cart")) {
			cout << "MENU" << endl;
			cout << "add - Add item to cart" << endl;
			cout << "remove - Remove item from cart" << endl;
			cout << "change - Change item quantity" << endl;
			cout << "descriptions - Output items' descriptions" << endl;
			cout << "cart - Output shopping cart" << endl;
			cout << "options - Print the options menu" << endl;
			cout << "quit - Quit" << endl << endl;
		}

		cout << "Enter option:" << endl;
		cin >> userOption;
		cin.clear();
		cin.ignore(10000, '\n');
	}
	cout << "Goodbye.";

	//system("pause");

	return 0;
}
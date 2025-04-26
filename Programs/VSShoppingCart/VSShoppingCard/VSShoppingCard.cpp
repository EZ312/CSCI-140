#include <iostream>
#include <iomanip>
using namespace std;

#include "ShoppingCart.h"

void PrintMenu() {
	cout << "MENU" << endl;
	cout << "a - Add item to cart" << endl;
	cout << "d - Remove item from cart" << endl;
	cout << "c - Change item quantity" << endl;
	cout << "i - Output items' descriptions" << endl;
	cout << "o - Output shopping cart" << endl;
	cout << "q - Quit" << endl;
}

void ExecuteMenu(char option, ShoppingCart& theCart) {
	if (option == 'a') {
		cout << "ADD ITEM TO CART" << endl;
		string name;
		string description;
		int price;
		int quantity;
		cout << "Enter the item name:" << endl;
		cin.ignore();
		getline(cin, name);
		cout << "Enter the item description:" << endl;
		getline(cin, description);
		cout << "Enter the item price:" << endl;
		cin >> price;
		cout << "Enter the item quantity:" << endl;
		cin >> quantity;
		ItemToPurchase addingitem(name, description, price, quantity);
		theCart.AddItem(addingitem);
	}else if (option == 'd') {
		cout << "REMOVE ITEM FROM CART" << endl;
		string name;
		cout << "Enter name of item to remove:" << endl;
		cin.ignore();
		getline(cin, name);
		theCart.RemoveItem(name);
	}else if (option == 'c') {
		cout << "CHANGE ITEM QUANTITY" << endl;
		string name;
		int quantity;
		cout << "Enter the item name:" << endl;
		cin.ignore();
		getline(cin, name);
		cout << "Enter the new quantity:" << endl;
		cin >> quantity;
		ItemToPurchase changingitem(name, "none", 0, quantity);
		theCart.ModifyItem(changingitem);
	}else if (option == 'i') {
		cout << "OUTPUT ITEMS' DESCRIPTIONS" << endl;
		theCart.PrintDescriptions();
	}else if (option == 'o') {
		cout << "OUTPUT SHOPPING CART" << endl;
		theCart.PrintTotal();
	}
}

int main() {
	string name;
	string date;
	char choice;
	cout << "Enter customer's name:" << endl;
	getline(cin, name);
	cout << "Enter today's date:" << endl;
	getline(cin, date);
	cout << endl;
	ShoppingCart cart(name, date);
	cout << "Customer name: " << name << endl;
	cout << "Today's date: " << date << endl;
	cout << endl;
	PrintMenu();
	cout << endl;
	cout << "Choose an option:" << endl;
	cin >> choice;
	while (choice != 'q') {
		ExecuteMenu(choice, cart);
		cout << endl;
		PrintMenu();
		cout << endl;
		cout << "Choose an option:" << endl;
		cin >> choice;
	}
	return 0;
}
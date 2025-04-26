#include <iostream>
#include <vector>
using namespace std;

#include "ShoppingCart.h"

ShoppingCart::ShoppingCart() {
    customerName = "none";
    currentDate = "January 1, 2016";
}
ShoppingCart::ShoppingCart(string name, string date) {
    customerName = name;
    currentDate = date;
}
string ShoppingCart::GetCustomerName() const {
    return customerName;
}
string ShoppingCart::GetDate() const {
    return currentDate;
}
void ShoppingCart::AddItem(ItemToPurchase item) {
    cartItems.push_back(item);
}
void ShoppingCart::RemoveItem(string name) {
    for (int i = 0; i < cartItems.size(); ++i) {
        if (cartItems.at(i).GetName() == name) {
            cartItems.erase(cartItems.begin() + i);
            return;
        }
    }
    cout << "Item not found in cart. Nothing removed." << endl;
}
void ShoppingCart::ModifyItem(ItemToPurchase item) {
    for (int i = 0; i < cartItems.size(); ++i) {
        if (cartItems.at(i).GetName() == item.GetName()) {
            if (item.GetDescription() != "none")
                cartItems.at(i).SetDescription(item.GetDescription());
            if (item.GetPrice() != 0)
                cartItems.at(i).SetPrice(item.GetPrice());
            if (item.GetQuantity() != 0)
                cartItems.at(i).SetQuantity(item.GetQuantity());
            return;
        }
    }
    cout << "Item not found in cart. Nothing modified." << endl;
}
int ShoppingCart::GetNumItemsInCart() const {
    int totalnumber = 0;
    for (int i = 0; i < cartItems.size(); ++i) {
        totalnumber += cartItems.at(i).GetQuantity();
    }
    return totalnumber;
}
int ShoppingCart::GetCostOfCart() {
    int totalcost = 0;
    for (int i = 0; i < cartItems.size(); ++i) {
        totalcost += cartItems.at(i).GetPrice()*cartItems.at(i).GetQuantity();
    }
    return totalcost;
}
void ShoppingCart::PrintTotal() {
    cout << customerName << "'s Shopping Cart - " << currentDate << endl;
    int totalnumber = 0;
    for (int i = 0; i < cartItems.size(); ++i) {
        totalnumber += cartItems.at(i).GetQuantity();
    }
    cout << "Number of Items: " << totalnumber << endl << endl;
    int totalcost = 0;
    if (cartItems.empty())
        cout << "SHOPPING CART IS EMPTY" << endl;
    else {
        
        for (int i = 0; i < cartItems.size(); ++i) {
            cartItems.at(i).PrintItemCost();
            totalcost += cartItems.at(i).GetPrice() * cartItems.at(i).GetQuantity();
        }
    }
    cout << endl;
    cout << "Total: $" << totalcost << endl;
}
void ShoppingCart::PrintDescriptions() {
    cout << customerName << "'s Shopping Cart - " << currentDate << endl << endl;
    cout << "Item Descriptions" << endl;
    if (cartItems.empty())
        cout << "SHOPPING CART IS EMPTY" << endl;
    else {
        for (int i = 0; i < cartItems.size(); ++i) {
            cartItems.at(i).PrintItemDescription();
        }
    }
}
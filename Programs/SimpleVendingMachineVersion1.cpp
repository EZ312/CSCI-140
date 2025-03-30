/*  Program: Simple Vending Machine Version 1 for Exercise 4, PA Submission 2
    Author: Ean Zheng
    Class: CSCI 140   
    Date: 3/8/2025
    Description: 
    I certify that the code below is my own work.
    Exception(s): N/A
*/
#include <iostream>

using namespace std;

int main()
{
    cout << "Author: Ean Zheng" << endl;
    int purchaseamount;
    int change;
    int quarters = 0;
    int dimes = 0;
    int nickels = 0;
    cout << "Vending Machine Version 1 by Ean Zheng" << endl;
    cout << "There are 2 quarters, 2 dimes, and 2 nickels." << endl << endl;
    cout << "Enter a purchase amount [0 - 100] --> ";
    cin >> purchaseamount;
    cout << "You entered a purchase amount of " << purchaseamount << " cents." << endl;
    if(purchaseamount < 0 || purchaseamount > 100){
        cout << "You entered an invalid amount (not between 0 and 100).";
        return 0;
    }
    change = 100-purchaseamount;
    if(change%5 != 0){
        cout << "Your change of " << change;
        if(change%5 <= 2)
            change -= change%5;
        else if(change%5 >= 3)
            change += 5 - (change%5);
        cout << " cents is rounded to " << change << " cents." << endl;
    }
    int remainingchange = change;
    while(quarters != 2 && remainingchange>=25){
        quarters++;
        remainingchange -= 25;
    }
    while(dimes != 2 && remainingchange>=10){
        dimes++;
        remainingchange -= 10;
    }
    while(nickels != 2 && remainingchange>=5){
        nickels++;
        remainingchange -= 5;
    }
    if(remainingchange == 0){
        cout << "Your change of " << change << " cents is given as:" << endl;
        cout << "quarter(s): " << quarters << endl;
        cout << "dime(s): " << dimes << endl;
        cout << "nickel(s): " << nickels << endl;
    }else{
        cout << "Insufficient coins. Your change of " << change << " cents cannot be processed." << endl;
    }
    return 0;
}

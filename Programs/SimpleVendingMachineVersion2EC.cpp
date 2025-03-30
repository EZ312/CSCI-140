/*  Program: Simple Vending Machine Version 2 for Extra Credit, PA Submission 3
    Author: Ean Zheng
    Class: CSCI 140   
    Date: 3/16/2025
    Description: 
    I certify that the code below is my own work.
    Exception(s): N/A
*/
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    cout << "Author: Ean Zheng" << endl;
    int purchaseamount;
    int change;
    int quarters;
    int dimes;
    int nickels;
    int dollars = 0;
    cout << "Vending Machine Version 2 by Ean Zheng" << endl << endl;
    cout << "Enter number of quarters, dimes, and nickels -->";
    cin >> quarters >> dimes >> nickels;
    cout << "Number of quarters: " << quarters << endl;
    cout << "Number of dimes: " << dimes << endl;
    cout << "Number of nickels: " << nickels << endl;
    cout << "Machine balance: $" << fixed << setprecision(2)<< (quarters*0.25)+(dimes*0.1)+(nickels*0.05) << endl << endl;
    cout << "Only one-dollar bill will be accepted." << endl;
    cout << "Only amount between 0 to 100 is accepted." << endl;
    cout << "Enter 0 to stop the program." << endl;

    do{
        int givenquarters = 0;
        int givendimes = 0;
        int givennickels = 0;
        cout << "Enter a purchase amount [0 - 100] --> ";
        cin >> purchaseamount;
        if(purchaseamount < 0 || purchaseamount > 100){
            cout << "You entered a purchase amount of " << purchaseamount << " cents." << endl;
            cout << "Invalid amount (outside valid range). Try again." << endl << endl;
        }
        else if (purchaseamount != 0){
            cout << "You entered a purchase amount of " << purchaseamount << " cents." << endl;
            cout << "Inserting one-dollar bill." << endl;
            cout << "Processing your purchase..." << endl;
            change = 100-purchaseamount;
            if(change%5 != 0){
                cout << "Your change of " << change;
                if(change%5 <= 2)
                    change -= change%5;
                else if(change%5 >= 3)
                    change += 5 - (change%5);
                cout << " cents is rounded to " << change << " cents." << endl;
            }
            for(givenquarters = 0; (givenquarters <= quarters && givenquarters <= 4)&&((givenquarters*25)+(givendimes*10)+(givennickels*5)!=change); givenquarters++){
                for(givendimes = 0; (givendimes <= dimes && givendimes <= 10)&&((givenquarters*25)+(givendimes*10)+(givennickels*5)!=change); givendimes++){
                    for(givennickels = 0; (givennickels <= nickels && givennickels <= 20)&&((givenquarters*25)+(givendimes*10)+(givennickels*5)!=change); givennickels++){
                        if((givenquarters*25)+(givendimes*10)+(givennickels*5)==change)break;
                    }
                    if(givennickels > nickels || givennickels > 20)givennickels = 0;
                    if((givenquarters*25)+(givendimes*10)+(givennickels*5)==change)break;
                }
                if(givendimes > dimes || givendimes > 10)givendimes = 0;
                if((givenquarters*25)+(givendimes*10)+(givennickels*5)==change)break;
            }
            if((givenquarters*25)+(givendimes*10)+(givennickels*5)==change){
                dollars++;
                quarters = quarters - givenquarters;
                dimes = dimes - givendimes;
                nickels = nickels - givennickels;
                cout << "Your change of " << change << " cents is given as:" << endl;
                cout << "\tquarter(s): " << givenquarters << endl;
                cout << "\tdime(s): " << givendimes << endl;
                cout << "\tnickel(s): " << givennickels << endl;
            }else{
                cout << "Insufficient changes!" << endl;
                cout << "Your transaction cannot be processed." << endl;
                cout << "Please take back your dollar bill." << endl;
            }
            cout << endl;
        }
    }while(purchaseamount != 0);
    cout << "Number of dollars: " << dollars << endl;
    cout << "Number of quarters: " << quarters << endl;
    cout << "Number of dimes: " << dimes << endl;
    cout << "Number of nickels: " << nickels << endl;
    cout << "Machine balance: $" << fixed << setprecision(2)<< dollars+(quarters*0.25)+(dimes*0.1)+(nickels*0.05) << endl << endl;
    return 0;
}

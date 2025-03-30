/*  Program: Large Integers Program for Exercise 4, PA Submission 4
    Author: Ean Zheng
    Class: CSCI 140   
    Date: 3/23/2025
    Description: 
    I certify that the code below is my own work.
    Exception(s): N/A
*/
#include <cstring>
#include <iostream>

using namespace std;

int main()
{
    cout << "Author: Ean Zheng" << endl;
    int array[25];
    char cstring[26];

    cout << "Enter a large integer up to 25 digits ---> ";
    cin >> cstring;

    if(strlen(cstring)>25){
        cout << "Error: too many digits";
        return 0;
    }

    for (int i = 0; i < strlen(cstring); i++){
        array[i] = cstring[strlen(cstring)-1-i]-48;
    }

    for (int i = strlen(cstring); i < 25; i++){
        array[i] = 0;
    }

    cout << "Digits: ";
    for (int i = 0; i < 25; i++){
        cout << array[i] << " ";
    }
    
    cout << endl << "Number of digits: " << strlen(cstring);
    return 0;
}

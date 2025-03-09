/*  Program: Extra Credit for PA 1
    Author: Ean Zheng
    Class: CSCI 140   
    Date: 3/2/2025
    Description: 
    I certify that the code below is my own work.
    Exception(s): N/A
*/
#include <iostream>


using namespace std;

int main()
{
    cout << "Author: Ean Zheng" << endl;
    int input;
    cin >> input;
    input++;
    while(input != 1){
        if(input%2==0){
            input/=2;
        }else if(input%2!=0){
            cout << "no";
            return 0;
        }
    }
    cout << "yes";
    return 0;
}

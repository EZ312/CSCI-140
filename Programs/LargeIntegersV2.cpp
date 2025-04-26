/*  Program: Large Integers Program Version 2 for Exercise 4, PA Submission 5
    Author: Ean Zheng
    Class: CSCI 140   
    Date: 3/30/2025
    Description: 
    I certify that the code below is my own work.
    Exception(s): N/A
*/
#include <cstring>
#include <iostream>

using namespace std;

void convertToArray(string value, int array[]){
    for (int i = 0; i < value.length(); i++)
    {
        array[i] = value.at(value.length()-1-i)-48;
    }
    for (int i = value.length(); i < 25; i++){
        array[i] = 0;
    }
}

bool addNumbers(int number1[], int number2[], int result[]){
    int addon = 0;
    for (int i = 0; i < 25; i++)
    {
        result[i] = number1[i] + number2[i] + addon;
        addon = result[i]/10;
        result[i] = result[i]%10;
        if(i == 24 && addon != 0)
            return false;
    }
    return true;
}

void outputNumber(int number[]){
    bool reached = false;
    for (int i = 24; i >= 0; i--)
    {
        if(reached == false && number[i] != 0){
            reached = true;
            cout << number[i];
        }
        else if(reached == true){
            cout << number[i];
        }
    }
}

int main()
{
    cout << "Author: Ean Zheng" << endl;
    
    string value1;
    string value2;
    char sign = ' ';
    int array1[25];
    int array2[25];
    int result[25];
    while(value1 != "0" && sign != '%' && value2 != "0"){
        cout << "Enter an expression --> ";
        cin >> value1 >> sign >> value2;
        if(sign == '+' && value1.length()<=25 && value2.length()<=25){
            convertToArray(value1, array1);
            convertToArray(value2, array2);
            outputNumber(array1);
            cout << " + ";
            outputNumber(array2);
            cout << " = ";
            if(addNumbers(array1, array2, result))
                outputNumber(result);
            else
                cout << "overflow";
            cout << endl << endl;
        }else if (value1 != "0" && sign != '%' && value2 != "0"){
            cout << "Invalid operand(s)" << endl << endl;
        }
    }
    cout << "Thank you for using my program.";
    return 0;
}
/*  Program: Height Class
Author: Ean Zheng
Class : CSCI 140
Date : 4 / 13 / 2025
Description :
    I certify that the code below is my own work.
    Exception(s) : N / A
    */
#include <iostream>
    using namespace std;

#include "Height.h"

int main() {
     // Create some Height objects
     Height h3(5, 8); // feet: 5, inches: 8
     Height h4(-1, 5); // feet: 0, inches: 5 (invalid feet so set to 0)
     Height h5(6, 15); // feet: 6, inches: 0 (invalid inches so set to 0)
     // Print height h3
     cout << "h3: ";
     h3.print(); // h3: 5’ 8”
     cout << endl;
     // Add more code below to print h4 and h5 like h3 above
     // Perform various operations
     h3.setFeet(-2); // feet: 5, inches: 8, feet stay the same
     h3.setInches(10); // feet: 5, inches: 10
     cout << "feet: " << h3.getFeet() << ", inches: " << h3.getInches() << endl; // 5 10
     h4.setFeet(6); // feet: 6, inches: 5
     h4.setInches(12); // feet: 6, inches: 5, inches stay the same
     cout << "feet: " << h4.getFeet() << ", inches: " << h4.getInches() << endl; // 6 5
     h5.setInches(10); // feet: 6, inches: 10
     h5.increment(); // feet: 6, inches: 11
     h5.increment(); // feet: 7, inches: 0
     cout << "h5: ";
     h5.print(); // h3: 7’ 0”
    cout << endl;
     //Add more test cases if needed
}
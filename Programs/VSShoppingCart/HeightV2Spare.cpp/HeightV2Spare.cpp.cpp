/*  Program: Height Class Version 2
    Author: Ean Zheng
    Class : CSCI 140
    Date : 4/20/2025
    Description :
    I certify that the code below is my own work.
    Exception(s) : N/A
*/
#include <iostream>
using namespace std;

#include "Height.h"

int main() {
    // Create 2 Height objects
    Height h1; // feet: 0, inches: 0
    Height h2(5); // feet: 5, inches: 0
    // Create some Height objects (same as original version)
    Height h3(5, 8); // feet: 5, inches: 8
    Height h4(-1, 5); // feet: 0, inches: 5 (invalid feet so set to 0)
    Height h5(6, 15); // feet: 6, inches: 0 (invalid inches so set to 0)
    // Print height h3
    Height array[]{ h1, h2, h3, h4, h5 };
    for (int i = 0; i < 5; ++i) {
        array[i].print();
    }
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
    Height h6(0, 5); // feet: 0, inches: 5
    // Print height (add code to label height and new line as needed)
    cout << "h6: ";
    h6.print(); // h6: 0’ 5”
    h6.increment(12); // ignore, feet: 0, inches: 5
    h6.increment(-3); // ignore, feet: 0, inches: 5
    h6.increment(); // feet: 0, inches: 6
    h6.increment(10); // feet: 1, inches: 4
    cout << "Total inches : " << h6.totalInches() << endl; // 16
    // Print height (add code to label height and new line as needed)
    cout << "h6: ";
    h6.print(); // h6: 1’ 4”
    if (h3 == h6)
        cout << "h3 is the same as h6" << endl;
    else
        cout << "h3 is not the same as h6" << endl;
    // should output: h3 is not the same as h6
}

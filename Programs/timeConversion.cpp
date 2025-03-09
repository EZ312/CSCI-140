/*  Program: First Scratch Program for Exercise 7, PA Submission 1
    Author: Ean Zheng
    Class: CSCI 140   
    Date: 3/2/2025
    Description: 
    I certify that the code below is my own work.
    Exception(s): N/A
*/
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    cout << "Author: Ean Zheng" << endl;
    int input;
    int seconds;
    int minutes;
    int hours;
    cin >> input;
    minutes = floor(input/60);
    seconds = input%60;
    hours = floor(minutes/60);
    minutes = minutes%60;
    cout << hours << " hours, " << minutes << " minutes, and " << seconds << " seconds." << endl;
    return 0;
}

/*  Program: Height Class
    Author: Ean Zheng
    Class: CSCI 140   
    Date: 4/13/2025
    Description: 
    I certify that the code below is my own work.
    Exception(s): N/A
*/
#include <iostream>
using namespace std;

#include "Height.h"

Height::Height(int f, int i): feet(f), inches(i){
    if(feet < 0)feet = 0;
    if(inches < 0 || inches > 11) inches = 0;
}
void Height::setFeet(int f){
    feet = f;
    if(feet < 0)feet = 0;
}

void Height::setInches(int i){
    inches = i;
    if(inches < 0 || inches > 11) inches = 0;
}

int Height::getFeet() const{
    return feet;
}

int Height::getInches() const{
    return inches;
}

void Height::print() const{
    cout << feet << "' " << inches << "\"";
}

void Height::increment(){
    ++inches;
    if(inches == 12){
        inches = 0;
        ++feet;
    }
}
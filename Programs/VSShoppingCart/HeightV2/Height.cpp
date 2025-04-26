/*  Program: Height Class Version 2 Extra Credit Ver.
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

Height::Height(int f, int i) : feet(f), inches(i) {
    if (feet < 0)feet = 0;
    if (inches < 0 || inches > 11) inches = 0;
}
void Height::setFeet(int f) {
    if (f >= 0)feet = f;
}

void Height::setInches(int i) {
    if (i >= 0 && i <= 11) inches = i;
}

int Height::getFeet() const {
    return feet;
}

int Height::getInches() const {
    return inches;
}

void Height::print() const {
    cout << feet << "' " << inches << "\"" << endl;
}

void Height::increment() {
    ++inches;
    if (inches == 12) {
        inches = 0;
        ++feet;
    }
}

void Height::increment(int inches) {
    if (inches > 0 && inches < 12) {
        this->inches = this->inches + inches;
        if (this->inches >= 12) {
            this->inches -= 12;
            ++feet;
        }
    }
}

int Height::totalInches() const {
    return (feet * 12) + inches;
}

bool Height::operator==(const Height& r) const {
    if (feet == r.getFeet() && inches == r.getInches())
        return true;
    else if (feet != r.getFeet() || inches != r.getInches())
        return false;
}

Height Height::operator+(Height rhs) {
    int tempfeet = feet + rhs.getFeet();
    int tempinches = inches + rhs.getInches();
    if (tempinches >= 12) {
        tempinches -= 12;
        ++tempfeet;
    }
    Height result(tempfeet, tempinches);
    return result;
}

Height Height::operator-(Height rhs) {
    int tempfeet = max(feet, rhs.getFeet()) - min(feet, rhs.getFeet());
    int tempinches = max(inches, rhs.getInches()) - min(inches, rhs.getInches());
    if (tempinches < 0) {
        tempinches = 12 + tempinches;
        --tempfeet;
    }
    Height result(tempfeet, tempinches);
    return result;
}
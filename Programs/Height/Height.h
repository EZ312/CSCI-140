/*  Program: Height Class
    Author: Ean Zheng
    Class: CSCI 140   
    Date: 4/13/2025
    Description: 
    I certify that the code below is my own work.
    Exception(s): N/A
*/
#ifndef HEIGHT_H
#define HEIGHT_H

#include <string>
using namespace std;

class Height{
    private:
    int feet;
    int inches;
    public:
    Height(int f = 0, int i = 0);
    void setFeet(int f = 0);
    void setInches(int i = 0);
    int getFeet() const;
    int getInches() const;
    void print() const;
    void increment();
};

#endif
//
//  BinaryNumber.hpp
//  Unit 5 Lab: Binary Number
//
//  Created by Coleton Watt on 10/4/21.
//

#ifndef BinaryNumber_hpp
#define BinaryNumber_hpp

#include <iostream>
#include <cmath>
//#include <math.h>
#include <bitset>

using namespace std;

class BinaryNumber{
public:
    BinaryNumber();
    BinaryNumber(int);
    BinaryNumber(string);
    BinaryNumber operator +(BinaryNumber);
    BinaryNumber operator -(BinaryNumber);
    
    friend ostream& operator<< (ostream &out, BinaryNumber&b);

    
    
    
private:
    int decimalNumber;

};


#endif /* BinaryNumber_hpp */

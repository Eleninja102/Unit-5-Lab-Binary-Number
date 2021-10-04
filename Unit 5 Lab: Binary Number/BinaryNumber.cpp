//
//  BinaryNumber.cpp
//  Unit 5 Lab: Binary Number
//
//  Created by Coleton Watt on 10/4/21.
//

#include "BinaryNumber.hpp"
//#include <iostream>
using namespace std;

BinaryNumber::BinaryNumber(){
    decimalNumber = 0;
    
}
BinaryNumber::BinaryNumber(int num){
    decimalNumber = num;
    
}
BinaryNumber::BinaryNumber(string num){
    unsigned long long value = bitset<64>(num).to_ullong();
    decimalNumber = (unsigned)value;
    
}

BinaryNumber BinaryNumber::operator +(BinaryNumber b){
    int newNumber = decimalNumber + b.decimalNumber;
    BinaryNumber b3 (newNumber);
    return b3;
}

ostream& operator<< (ostream &out, BinaryNumber&b){
    int n = b.decimalNumber;
    int a[10],i;
    for(i=0; n>0; i++){
        a[i]=n%2;
        n= n/2;
    }
    for(i=i-1 ;i>=0 ;i--){
        out << a[i];
    }
    
    return out;
}

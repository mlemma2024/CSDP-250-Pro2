
//  decimalToBinary.h
//  Convert a decimal number to a binary number
//  Created by meadi lemma on 10/29/24.

#ifndef DECIMALTOBINARY_H
#define DECIMALTOBINARY_H

#include <string>
#include <stack>
#include <queue>
using namespace std;

class DecimalToBinaryConverter
{
public:
    string convertIntegerToBinary(int integerPart);
    string convertFractionToBinary(double fractionPart);
};

#endif // DECIMALTOBINARY_H

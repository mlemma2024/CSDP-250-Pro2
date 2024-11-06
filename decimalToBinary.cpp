//
//  decimalToBinary.cpp
//  Convert a decimal number to a binary number
//
//  Created by meadi lemma on 11/4/24.
//

#include "DecimalToBinary.h"
using namespace std;

string DecimalToBinaryConverter::convertIntegerToBinary(int integerPart)
{
    stack<int> binaryStack;
    while (integerPart > 0)
    {
        binaryStack.push(integerPart % 2);
        integerPart /= 2;
    }

    string binaryResult;
    while (!binaryStack.empty())
    {
        binaryResult += to_string(binaryStack.top());
        binaryStack.pop();
    }
    return binaryResult;
}

string DecimalToBinaryConverter::convertFractionToBinary(double fractionPart)
{
    queue<int> binaryQueue;
    int precision = 5;
    while (fractionPart > 0 && precision > 0)
    {
        fractionPart *= 2;
        int bit = static_cast<int>(fractionPart);
        binaryQueue.push(bit);
        fractionPart -= bit;
        precision--;
    }

    string binaryResult;
    while (!binaryQueue.empty())
    {
        binaryResult += to_string(binaryQueue.front());
        binaryQueue.pop();
    }
    return binaryResult;
}

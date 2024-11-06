//
//  main.cpp
//  Convert a decimal number to a binary number
//
//  Created by meadi lemma on 11/2/24.
//

#include <iostream>
#include "DecimalToBinary.h"
using namespace std;
int main()
{
    DecimalToBinaryConverter converter;
    int integerPart;
    double fractionalPart;

    cout << "Enter the integer part: ";
    cin >> integerPart;

    cout << "Enter the fractional part ";
    cin >> fractionalPart;

   string integerBinary = converter.convertIntegerToBinary(integerPart);

    
    string fractionBinary = converter.convertFractionToBinary(fractionalPart);

   
    cout << "Binary representation: " << integerBinary << "." << fractionBinary <<endl;

    return 0;
}

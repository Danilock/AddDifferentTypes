// AddDifferentTypes.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int int1, int2, totalInt;
float float1, float2, float3, totalFloat;
double double1, double2, double3, double4, totalDouble;

int main()
{
#pragma region Adding two integer values
    cout << "=====Add two integer values===== \n";
    cout << "Value #1: ";
    cin >> int1;
    cout << "Value #2: ";
    cin >> int2;
    totalInt = int1 + int2;
#pragma endregion

#pragma region Adding three float values
    cout << "\n=====Add three float values===== \n";
    cout << "Value#1: ";
    cin >> float1;
    cout << "Value#2: ";
    cin >> float2;
    cout << "Value#3: ";
    cin >> float3;
    totalFloat = float1 + float2 + float3;
#pragma endregion


#pragma region Adding four double values
    cout << "\n=====Add four double values===== \n";
    cout << "Value#1: ";
    cin >> double1;  
    cout << "Value#2: ";
    cin >> double2; 
    cout << "Value#3: ";
    cin >> double3;  
    cout << "Value#4: ";
    cin >> double4;
    totalDouble = double1 + double2 + double3 + double4;
#pragma endregion

    cout << "Int values total:" << totalInt << "\n";
    cout << "Float values total:" << totalFloat << "\n";
    cout << "Double values total:" << totalDouble << "\n";
}

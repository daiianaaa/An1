/*
 Horvath Daiana, E_2012
 This program defines several symbolic constants of different types (integer numbers, real numbers, arrays of characters) and returns their values using cout and the << operator.
 */
#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
int main()
{
    const int a=5;
    const float b=5.64;
    const char chrt[100]="Example of array of characters";
    cout<<a<<"\n";
    cout<<b<<"\n";
    cout<<chrt<<"\n";
    return 0;
}

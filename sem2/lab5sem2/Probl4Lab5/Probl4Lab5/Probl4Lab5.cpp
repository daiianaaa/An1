/*
 Horvath Daiana, E_2012
 Write a program that implements a class called Number with an attribute of int type, val. In function main(), declare two Number objects and a pointer to one object of this type, used to call a method int sum_nr(Number) from the class that will calculate and return the sum of 2 int numbers read from the keyboard, associated to the instantiated objects (current, parameter). Implement the method inside and outside the class (with different names).
 */
#include<iostream>
#include "Number_probl4.h"
using namespace std;

int main()
{
    Number n, *p;
    p=nullptr;
    int a, b;
    cout<<"Enter the value for the number a: ";
    cin>>a;
    cout<<"Enter the value for the number b: ";
    cin>>b;
    cout<<"The sum using the function inside the class is: "<<n.suma_nr1(a, b);
    cout<<"\nThe sum using the function outside the class and the pointer is: "<<p->suma_nr2(a, b)<<"\n";
}

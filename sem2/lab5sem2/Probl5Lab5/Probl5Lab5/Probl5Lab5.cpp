/*
 Horvath Daiana, E_2012
 Define a class that implements the following methods:
- int plus(int x, int y), which returns the sum of x and y;
- int minus(int x, int y), which returns the difference between x and y;
- int inmultit(int x, int y), which returns the result of x multiplied by y;
- float impartit(int x, int y), which returns the quotient of x and y;
Write the application that uses this class. Consider also the case that the class contains two int attributes, x and y, and the class methods will have no parameters.
Remark: prevent the division of a number by 0. If this situation occurs, display an error message.
 */
#include<iostream>
#include "Calcule_probl5.h"
using namespace std;

int main()
{
    Calcule *p = nullptr;
    int a, b;
    cout<<"Enter a value for a:";
    cin>>a;
    cout<<"\nEnter a value for b:";
    cin>>b;
    cout<<"The sum of the numbers is: "<<p->plus(a, b);
    cout<<"\nThe difference of the nr is: "<<p->minus(a, b);
    cout<<"\nThe product of the two numbers is: "<<p->inmultire(a, b);
    cout<<"\nThe quotient of a and b is: "<<p->impartire(a, b)<<"\n";
    return 0;
    
}

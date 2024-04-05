/*
 Horvath Daiana, E_2012
 Write a program that implements a class named Arithmetics that has two numeric (int, float or double) attributes a and b. The class will contai setter and getter methods for attributes. Inside the class, implement a method named sum( ). The method difference() that also belongs to the class is implemented outside the class, methods that will be called using Arithmetics objects. Create 3 objects instantiated from the Arithmetics class and make use of the defined methods. The methods return the numerical values corresponding to the operation using the two attributes of the class results that will be displayed in main(). For each addition / subtraction operation group, display the values of the object attributes using the getter methods.
 */
#include<iostream>
#include "Arithmetics_probl7.h"
using namespace std;

int main()
{
    Arithmetics a1, a2, a3;
    int x, y;
    cout<<"What numbers do you want to sum? (Obj1)\n";
    cin>>x;
    cin>>y;
    a1.setXY(x, y);
    cout<<"What numbers do you want to sum? (Obj2)\n";
    cin>>x;
    cin>>y;
    a2.setXY(x, y);
    cout<<"What numbers do you want to sum? (Obj3)\n";
    cin>>x;
    cin>>y;
    a3.setXY(x, y);
    cout<<"\nThe sum of the first object is: "<<a1.sum();
    cout<<"\nThe difference of the first object is: "<<a1.difference();
    cout<<"\nGetter values: "<< a1.getX()<<" "<<a1.getY();
    cout<<"\nThe sum of the second object is: "<<a2.sum();
    cout<<"\nThe difference of the second object is: "<< a2.difference();
    cout<<"\nGetter values: " <<a2.getX()<<" "<< a2.getY();
    cout<<"\nThe sum of the third object is: "<<a3.sum();
    cout<<"\nThe difference of the third object is: "<< a3.difference();
    cout<<"\nGetter values: "<< a3.getX()<<" "<< a3.getY()<<"\n";
    return 0;
}

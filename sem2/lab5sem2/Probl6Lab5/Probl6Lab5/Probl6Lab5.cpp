/*
 Horvath Daiana, E_2012
 Define a class that manages complex numbers. Write the program that uses this class considering 2 objects and displays the object’s characteristics and the results of the defined operations. (Use exemple 3 with result in the current object).
 */
#include<iostream>
#include "Complex_probl6.h"
using namespace std;
int main()
{
    
    Complex z1,z2(2,2),z3;
    cout<<"The complex number z1 is: ";
    z1.Afisare();
    cout<<"\nThe modulus of the number is: "<<z1.Modul();
    z1.Set_values(4,6);
    cout<<"\nZ1 with random values is: ";
    z1.Afisare();
    cout<<"\nThe modulus of the number is: "<<z1.Modul();
    cout<<"\nThe number z2 is: ";
    z2.Afisare();
    z3=z1.Suma(z2);
    cout<<"\nThe sum of the 2 numbers is: "<<"\n";
    z3.Afisare();
    
}

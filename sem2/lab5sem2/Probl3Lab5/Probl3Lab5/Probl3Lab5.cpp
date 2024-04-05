/*
 Horvath Daiana, E_2012
 Write a program that reads from the keyboard an array of maximum 10 characters and performs all the operations implemented in the class defined at problem 3.
 a. determine the length of the array of characters received as parameter;
 b. determine the index of the last occurence of a certain character in the array;
 c. return the array of characters received as parameter, all letters being transformed into capital
 letters.
 d. return the number of occurences of a certain character;
 */
#include "String_probl3.h"
#include<iostream>
using namespace std;
int main()
{
    String s1;
    s1.Init();
    int l;
    l=s1.Len();
    cout<<"The length of the array is: "<<l;
    cout<<"\nThe array wrote with capital letters is: ";
    s1.Capital_letter(l);
    cout<<"\nThe index of the last occurence of the character 'a' is: "<<s1.Last_index('a', l);
    cout<<"\nThe number of occurences of the character 'a' is: "<<s1.Nr_app(l, 'a')<<"\n";
    return 0;
}

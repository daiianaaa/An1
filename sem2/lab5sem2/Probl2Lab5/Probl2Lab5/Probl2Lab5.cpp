/*
 Horvath dAIANA, e_2012
 Declare a class called String and store it in a file named strClass.h. The methods in the class perform the following tasks:
 a. determine the length of the array of characters received as parameter;
 b. determine the index of the last occurence of a certain character in the array;
 c. return the array of characters received as parameter, all letters being transformed into capital
 letters.
 d. return the number of occurences of a certain character;
 */
#include<iostream>
#include<string.h>
#include "strClass_probl2.h"
using namespace std;
int main()
{
    String s1;
    int l;
    s1.init();
    l=s1.Len();
    cout<<"The lenght of the string is: "<<l;
    cout<<"\nThe last index of the character b is: "<<s1.Last_index(l, 'b');
    cout<<"\nThe string wrote in capital letters is: ";
    s1.Capital_letter(l);
    cout<<"\nThe number of occurence of the character b is: "<<s1.Nr_App(l, 'b')<<"\n";
    return 0;
}





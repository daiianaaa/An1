/*
 Horvath Daiana,E_2012
 This program defines an array of characters that will be displayed using cout and displays other character arrays using escape sequences.
 */
#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
int main()
{
    char sir1[30] ="Ana are mere";
    char sir2[30] ="\t Ana are mere2";
    char sir3[30] = "\v Ana are mere 3\n";
    cout<< sir1<<"\n"<<sir2<<"\n"<<sir3;
}

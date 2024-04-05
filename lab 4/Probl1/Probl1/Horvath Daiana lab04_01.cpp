/*
 Horvath Daiana, E_2012
 This program determines the average value of 3 non-integer numbers.
 */
#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
int readNumber();
float media(float, float, float);
int main()
{
    float nr1, nr2, nr3;
    nr1=readNumber();
    nr2=readNumber();
    nr3=readNumber();
    scanf("/nYou entered %f, %f, %f\n", &nr1, &nr2, &nr3);
    printf ("The average is: %f\n", media(nr1, nr2, nr3));
    return 0;
}
int readNumber()
{
    float nr;
    printf("Enter a number: ");
    scanf("%f", &nr);
    return nr;
    
}
float media(float a, float b, float c)
{
    float m;
    m=(a+b+c)/3.0f;
    return m;
}

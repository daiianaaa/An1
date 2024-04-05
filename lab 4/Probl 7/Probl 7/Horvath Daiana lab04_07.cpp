/*
 Horvath Daiana, E_2012
 This program defines 3 real numbers named a, b and c and return the value of 1/a + 1/b + 1/c.
 */
#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
int readNumber();
float calcSecv(float, float, float);
int main()
{
    int a, b, c;
    a=readNumber();
    b=readNumber();
    c=readNumber();
    scanf("You entered the numbers %d, %d, %d\n", &a, &b, &c);
    printf ("The value of the sequence is: %f\n", calcSecv(a, b, c));
    return 0;
}
int readNumber()
{
    float nr;
    printf("Enter a number: ");
    scanf("%f", &nr);
    return nr;
    
}
float calcSecv(float c, float d, float e)
{
    float m;
    m=1/c+1/d+1/e;
    return m;
    
}

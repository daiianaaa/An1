/*
 Horvath Daiana, E_2012
 This program reads from the keyboard 2 integer values, a and b, representing the coefficients of the equation ax+b=0 and solves the equation and displays the result.
 */
#define _CRT_SECURE_NO_WARNINGS
#include<cstdio>
int readNumber();
float solEq(float, float);
int main()
{
    int a,b;
    a=readNumber();
    b=readNumber();
    printf ("The two numbers are: %d, %d \n", a, b);
    printf ("The solution of the equation is: %.2f\n", solEq(a,b));
    return 0;
    
}
int readNumber()
{
    int nr;
    printf ("Enter a value: ");
    scanf ("%d", &nr);
    return nr;
}
float solEq(float c, float d)
{
    float x;
    x=d/c;
    return -x;
}


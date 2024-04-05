/*
 Horvath Daiana, E_2012
 This program determines the integer quotient of 2 integer numbers using a series of
 subtractions.
 */
#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
int readNumber();
int main()
{
    int a, b, nr=0;
    a=readNumber();
    b=readNumber();
    while (a>=b)
    {
        nr++;
        a=a-b;
    }
    printf ("The quotient of the numbers is: %d\n", nr);
    return 0;
    
}
int readNumber()
{
    int n;
    printf ("Enter a value: ");
    scanf ("%d", &n);
    return n;
}

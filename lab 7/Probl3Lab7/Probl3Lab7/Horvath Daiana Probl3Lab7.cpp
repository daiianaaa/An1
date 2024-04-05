/*
 Horvath Daiana, E_2012
 This program wites a program that calculates a^n, by repeated multiplications where n is read from the keyboard.
 */
#define _CRT_SECURE_NO_WARNINGS
#include<cstdio>
int calcPower(int ,int);
int readNumber();
int main()
{
    int a, n;
    n=readNumber();
    a=3;
    printf ("The result of the multiplication is: %d\n", calcPower(a, n));
    return 0;
    
}
int readNumber()
{
    int nr;
    printf ("Enter a number: ");
    scanf ("%d",&nr);
    return nr;
}
int calcPower(int a, int n)
{
    int i, p;
    if (n==0)
    {
        return 1;
    }
    p=a;
    for (i=1; i<n; i++)
    {
        a=a*p;
    }
    return a;
}

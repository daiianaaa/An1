/*
 Horvath Daiana, E_2012
 This program determines the least common multiple of 2 integer numbers.
 */
#define _CRT_SECURE_NO_WARNINGS
#include<cstdio>
int readNumber();
int cmmdc(int, int);
int main()
{
    int a, b,c;
    a=readNumber();
    b=readNumber();
    c=(a*b)/cmmdc(a,b);
    printf ("The least common multiple of the numbers is: %d\n", c);
    return 0;
}
int readNumber()
{
    int nr;
    printf ("Enter a value: ");
    scanf ("%d", &nr);
    return nr;
}
int cmmdc(int n, int p)
{
    while (n!=p)
    {
       if (n>p)
       {
           n=n-p;
       }
        else
        {
            p=p-n;
        }
    }
    return n;
}

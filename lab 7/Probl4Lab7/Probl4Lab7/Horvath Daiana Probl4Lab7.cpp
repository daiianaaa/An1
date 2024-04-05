/*
 Horvath Daiana, E_2012
 This program calculates n!.
 */
#define _CRT_SECURE_NO_WARNINGS
#include<cstdio>
int readNumber();
int calcFact(int);
int main()
{
    int n;
    n=readNumber();
    printf ("N factorial is: %d\n", calcFact(n));
    return 0;
    
}
int readNumber()
{
    int nr;
    printf ("Enter the number: ");
    scanf ("%d", &nr);
    return nr;
}
int calcFact(int n)
{
    int i,p=1;
    for (i=1; i<=n; i++)
    {
        p*=i;
    }
    return p;
    
}

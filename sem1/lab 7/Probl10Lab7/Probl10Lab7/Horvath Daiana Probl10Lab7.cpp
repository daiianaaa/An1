/*
 Horvath Daiana, E_2012
 This program determines the number of figures that compose an integer number.
 */
#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
int readNumber();
int main()
{
    int n;
    int nr=0;
    n=readNumber();
    while (n>0)
    {
        nr++;
        n=n/10;
    }
    printf ("The number of figures that compose the number is:%d\n", nr);
    return 0;
}
int readNumber()
{
    int nr;
    printf ("The number is: ");
    scanf ("%d", &nr);
    return nr;
}

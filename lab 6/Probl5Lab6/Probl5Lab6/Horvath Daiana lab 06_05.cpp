/*
 Horvath Daiana, E_2012
 This program writes a program that reads from the standard input an integer number and displays the number of zeroes from it’s binary representation.
 */
#define _CRT_SECURE_NO_WARNINGS
#include<cstdio>
int readNumber();
int calcZeroes(int);
int main()
{
    int n;
    n=readNumber();
    printf ("The number of zeroes from the numbers binary representation is:%d\n", calcZeroes(n));
    return 0;
    
}
int readNumber()
{
    float nr;
    printf("Enter a number: ");
    scanf("%f", &nr);
    return nr;
}
int calcZeroes(int a)
{
    int nr=0;
    while (a>0)
    {
        if (!(a%2))
        {
            nr++;
        }
        a>>=1;
    }
    return nr;
}

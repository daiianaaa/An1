/*
 Horvath Daiana, E_2012
 Calculate the greatest common divider of 2 numbers using a recursive function.
 */
#define _CRT_SECURE_NO_WARNINGS
#include<cstdio>

int cmmdc_rec( int a, int b);

int main()
{
    int a, b;
    printf ("Enter the value for the number a: ");
    scanf ("%d", &a);
    
    printf ("Enter the value for the number b: ");
    scanf ("%d", &b);
    
    printf ("The greatest common dividor of the numbers %d and %d is: %d\n",a, b, cmmdc_rec(a, b));
    
    return 0;
    
}
int cmmdc_rec(int a, int b)
{
    if(a == 0 || b == 0)
    {
        return 0;
    }
    if(a == b)
    {
        return a;
    }
    if(a > b)
    {
        return cmmdc_rec(a - b, b);
    }
    else
    {
        return cmmdc_rec(a, b - a);
    }
}

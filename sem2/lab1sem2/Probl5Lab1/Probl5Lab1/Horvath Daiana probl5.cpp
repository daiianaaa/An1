/*
 Horvath Daiana, E_2012
 Using functions overloading define 3 functions with the same name but with different prams type (int, int*, int&) that will return the square root of the int value. Analyze the calling mechanism by value and reference.
 */
#define _CRT_SECURE_NO_WARNINGS
#include<cstdio>
#include<math.h>

float sqr(int a);
float sqr (int *a);

int main()
{
    int a, b;
    int *p;
    p=&b;
    printf ("Enter the values for a and b: ");
    scanf ("%dx %d", &a, &b);
    printf("The square root of a is %.2f\n", sqr(a));
    printf("The square root of b is %.2f\n", sqr(b));
    return 0;
}
float sqr(int a)
{
    return sqrt((float)a);
}
float sqr(int *b)
{
    int n;
    n=*b;
    return sqrt((float)(n));
    
} float sqr(int &c)
{
    return sqrt((float)(c));
    
}

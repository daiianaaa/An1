/*
 Horvath Daiana, E_2012
 Consider a function with 3 implicit parameters (all) (int, float, double) that returns the product of the values. Call that function with different variants for effective parameters(no pram, 1 param, 2 params, 3 params).
 */
#define _CRT_SECURE_NO_WARNINGS
#include<cstdio>
double product(int a=2, int b=1, float c=1.2)
{
    return a*b*c;
}
int main()
{
    int a,b,c;
    printf ("Enter the numbers:\n");
    scanf ("%d %d %d", &a, &b, &c);
    printf ("The product with no param= %lf\n", product());
    printf ("The product of 1 param= %lf\n", product(a));
    printf ("The product of 2 param= %lf\n", product(a, b));
    printf ("The product of 3 param= %lf\n", product(a, b, c));
}

/*
 Horvath Daiana, E_2012
 Write a program that calculates recursively and non-recursively (two distinct functions) the value of the harmonic series sn=1/1+1/2+1/3+...1/n, where n is a natural number. Call the functions with 2 different values for n.
 */
#define _CRT_SECURE_NO_WARNINGS
#include<cstdio>
float suma_rec(int n);
float sum_nerec(int n);
int main()
{
    int n, m;
    printf ("Enter the value for n: ");
    scanf ("%d", &n);
    
    printf ("Enter the value for m: ");
    scanf ("%d", &m);
    
    printf ("The sum calculatet using a recursive function is: %.2f\n", suma_rec(n));
    printf ("The sum calculated using a non_recursive function is: %.2f\n", sum_nerec(m));
    
}
float suma_rec(int n)
{
    if (n==0) return 0;
else
    return suma_rec(n-1) + 1.0/n;
}
float sum_nerec(int n)
{
    double i, s = 0.0;
      for (i = 1; i <= n; i++)
          s = s + 1/i;
      return s;
}

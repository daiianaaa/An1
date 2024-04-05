/*
 Horvath Daiana, E_2012
 This program reads from the keyboard an integer number n. Read a series of real numbers, until their sum is
 greater than n. Display the sum with a 2 digits precision and how many numbers were introduced.
 */
#define _CRT_SECURE_NO_WARNINGS
#include<cstdio>
int main()
{
    int n, nr=0;
    float a, s=0;
    printf ("Enter a value for n: ");
    scanf ("%d", &n);
    while (s<=n)
    {
        printf ("The real numbers are: ", a);
        scanf ("%f", &a);
        s=s+a;
        nr++;
    }
    printf ("There are %d numbers and their sum is %.2f\n", nr, s);
    return 0;
}

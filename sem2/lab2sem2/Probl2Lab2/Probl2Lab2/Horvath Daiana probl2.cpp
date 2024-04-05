/*
 Horvath Daiana, E_2012
 Write a recursive function that calculates Cnk , where n and k are read from the keyboard,
 k<n.
 (Ck = n Ck ; if n=0, k=0 or if n=k, Ck is 1). Verify the result using the
 n n−k n−1 n
 factorial definition.
 */
#define _CRT_SECURE_NO_WARNINGS
#include<cstdio>

int combinations(int n, int k);
int factorial_verif(int n);

int main()
{
    int n, k;
    printf ("Enter a value for n: ");
    scanf ("%d", &n);
    
    printf ("Enter a value for k: ");
    scanf("%d", &k);
    
    printf ("The value of the CnK is: %d \n", combinations(n, k));
    printf ("The same value using factorial is: %d\n", factorial_verif(n) );
    
    return 0;
    
    
}
int combinations(int n, int k)
{
    if ((n==0 && k==0) || (n==k))
    {
        return 1;
    }
    else if (n>k)
    {
        return (n/n-k ) * combinations(n-1, k);
    }
    return 0;
}
int factorial_verif(int n)
{
    if (n==0)
    {
        return 1;
    }
    else
    {
        return n * factorial_verif(n-1);
    }
}

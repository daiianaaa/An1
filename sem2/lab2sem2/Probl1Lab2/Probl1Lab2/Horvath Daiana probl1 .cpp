/*
 Horvath Daiana, E_2012
 Write a recursive function that calculates Ank , where n and k are read form the keyboard, k<n.
 ( Ank = n  Ank−1 ; if k=1 Ank is n). Verify the result using the factorial definition.
 */
#define _CRT_SECURE_NO_WARNINGS
#include<cstdio>

int aranjamente(int n, int k);
int factorial_verif(int n);

int main()
{
    int n, k;
    printf ("Enter a value for n: ");
    scanf ("%d", &n);
    
    printf ("Enter a value for k: ");
    scanf ("%d", &k);
    
    printf ("The value of the Ank is: %d\n", aranjamente(n, k));
    printf ("The solution using the factorial definition is: %d\n", factorial_verif(n));
    
    return 0;
    
    
}
int aranjamente(int n, int k)
{
    if (n==0)
    {
        return 1;
    }
    else
    {
        return n* aranjamente(n-1, k-1);
    }
}
int factorial_verif(int n)
{
    if (n==0)
    {
        return 1;
    }
    else
    {
        return n* factorial_verif(n-1);
    }
}

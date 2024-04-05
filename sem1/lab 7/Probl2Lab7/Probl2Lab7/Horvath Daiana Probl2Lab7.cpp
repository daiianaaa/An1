/*
 Horvath Daiana, E_2012
 This program verifies if a natural number introduced from the keyboard is a perfect square or not.
 */
#define _CRT_SECURE_NO_WARNINGS
#include<cstdio>
#include<cmath>
int readNumber();
int main()
{
    int nr;
    nr=readNumber();
    ((int)sqrt(nr)==sqrt(nr)) ? printf ("The number is a perfect square\n") : printf("The number is not a perfect square\n");
     return 0;
    
}
int readNumber()
{
    int nr;
    printf("Enter a number: ");
    scanf("%d", &nr);
    return nr;
}

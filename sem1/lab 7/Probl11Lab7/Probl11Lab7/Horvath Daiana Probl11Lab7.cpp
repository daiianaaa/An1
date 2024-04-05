/*
 Horvath Daiana, E_2012
 This program reads from the keyboard n integer numbers and displays all the odd numbers and
 store them in an array.
 */
#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
int main()
{
    int i=0, n,v[100];
    printf ("Enter the number of integer numbers: ");
    scanf("%d", &n);
    for (i=0; i<n; i++)
    {
        printf ("\nThe array is: ");
        scanf ("%d",&v[i]);
    }
    for (i=0; i<n; i++)
    {
        if (v[i]%2!=0)
        {
            printf ("%d \n", v[i]);
        }
    }
    return 0;
}

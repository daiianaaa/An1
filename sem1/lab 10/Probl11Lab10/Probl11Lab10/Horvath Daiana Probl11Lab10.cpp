/*
 Horvath Daiana, E_2012
 This program defines a function for reading from the keyboard the integer type values that form a [n x n] matrix. Write a function that determines the number of negative elements that are located above the secondary diagonal. Display the result in the main function.
 */
#define _CRT_SECURE_NO_WARNINGS
#include<cstdio>
#include<stdlib.h>
void readMatr(int* a, int n);
void displayMatr(int* a, int n);
int negNr(int* a, int n);
int main()
{
    int* a, n;
    printf ("Enter the dimensions of the matrix: ");
    scanf ("%d%d", &n, &n);
    a=(int*)malloc(n*n*sizeof(int));
    readMatr(a, n);
    displayMatr(a, n);
    printf ("The number of negative elements above the secondary diagonal is: %d\n", negNr(a, n));
    free (a);
    return 0;
}
void readMatr(int* a, int n)
{
    int i, j;
    for (i=0; i<n; i++)
    {
        printf ("The row %d: \n", i);
        for (j=0; j<n; j++)
        {
            printf ("a[%d][%d]=", i, j);
            scanf ("%d", (a+i*n+j));
        }
    }
}
void displayMatr(int* a, int n)
{
    int i, j;
    printf ("The matrix is: ");
    for (i = 0; i < n; i++)
        {
            printf("\n\t");
            for (j = 0; j < n; j++)
            {
                printf("%d ", *(a + i * n + j));
            }
        }
}
int negNr(int* a, int n)
{
    int i, j, nr=0;
    for (i=0; i<n; i++)
    {
        for (j=0; j<n; j++)
        {
            if (j<n-i-1 && *(a+i*n+j)<0)
            {
                nr++;
            }
        }
    }
    return nr;
}

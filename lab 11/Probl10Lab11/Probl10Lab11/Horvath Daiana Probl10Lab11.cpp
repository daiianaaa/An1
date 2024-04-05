/*
 Horvath Daiana, E_2012
 Write a C/C++ application that allocates the necessary amount of memory for storing an nxn integer matrix. Write a function that calculates the sum of the positive numbers located below the main diagonal and another function that displays the matrix. Print the matrix and the calculated sum. Free the allocated memory.
 */
#define _CRT_SECURE_NO_WARNINGS
#include<cstdio>
#include<stdlib.h>
void read(int* a, int n);
void display(int* a, int n);
int sum(int* a, int n);
int main()
{
    int *a, n;
    printf ("Enter the dimensions of the matrix: ");
    scanf ("%d %d", &n, &n);
    a=(int*)malloc(n*n*sizeof(int));
    read(a, n);
    printf("The matrix is:\n");
    display(a, n);
    printf ("\n");
    printf ("The sum of the positive numbers located below the main diagonal is: %d\n ", sum(a, n));
    free(a);
    return 0;
}
void read(int* a, int n)
{
    int i, j;
    for (i=0; i<n; i++)
    {
        printf ("The row: %d\n", i);
        for (j=0; j<n; j++)
        {
            printf ("a[%d][%d]=", i, j);
            scanf ("%d", (a+i*n+j));
        }
    }
}
void display(int* a, int n)
{
    int i,j;
    for (i=0; i<n; i++)
    {
        printf ("\t\n");
        for (j=0; j<n; j++)
        {
            printf("%d ", *(a+i*n+j));
        }
    }
}
int sum(int* a, int n)
{
    int i, j, s=0;
    for (i=0; i<n; i++)
    {
        for (j=0; j<n; j++)
        {
            if (i>j && *(a+i*n+j)>0)
            {
                s+=*(a+i*n+j);
            }
        }
    }
    return s;
}

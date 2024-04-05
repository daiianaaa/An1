/*
 Horvath Daiana, E_2012
 This program defines a function for reading from the keyboard the integer type values that form a [n x n] matrix. Write a function that interchanges two lines of the matrix. Use another function for displaying the initial and the processed matrices. Read from the keyboard (in the main function) the dimension (n) of the matrix and the indexes that indicate the rows to be switched.
 */
#define _CRT_SECURE_NO_WARNINGS
#include<cstdio>
#include<stdlib.h>
void read(int* a, int n);
void display(int* a, int n);
void interchange(int* a, int c1, int c2, int n);
int main()
{
    int* a, n, c1, c2;
    printf ("Enter the dimension of the matrix: ");
    scanf("%d%d", &n, &n);
    a=(int*)malloc(n*n*sizeof(int));
    read(a, n);
    display(a, n);
    printf ("\nEnter the rows that you want to interchange: ");
    scanf ("%d%d", &c1, &c2);
    interchange(a, c1, c2, n);
    display(a, n);
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
            scanf("%d", (a+i*n+j));
        }
    }
}
void display(int* a, int n)
{
    int i, j;
    printf ("The matrix is: ");
    for (i=0; i<n; i++)
    {
        printf ("\n\t");
        for (j=0; j<n; j++)
        {
            printf ("%d\t", *(a+i*n+j));
        }
    }
}
void interchange(int* a, int c1, int c2,  int n)
{
    int i, aux=0;
    for (i=0; i<n; i++)
    {
        aux=*(a+c1*n+i);
        *(a+c1*n+i)=*(a+c2*n+i);
        *(a+c2*n+i)=aux;
        
    }
}

/*
 Horvat Daiana, E_2012
 Write a program that allocates the necessary amount of memory for storing the elements from two [m x n] integer matrices. Write a function that calculates the sum of the inital matrices and another one for displaying both the original values and the result.
 */
#define _CRT_SECURE_NO_WARNINGS
#include<cstdio>
#include<stdlib.h>
void read(int*, int, int);
void display(int*, int, int);
int *sum(int*, int*, int, int);
int main()
{
    int n, m;
    int* a;
    int* b;
    printf ("Enter the dimensions of the two matrices: ");
    scanf ("%d %d", &n, &m);
    a=(int*)malloc(n*m*sizeof(int));
    if (a==0)
    {
        printf ("Allocation incorrect!");
        return 1;
    }
    b=(int*)malloc(n*m*sizeof(int));
    if (b==0)
    {
        printf ("Allocation incorrect!");
        return 1;
    }
    read(a, n, m);
    read(b, n, m);
    printf ("The first matrix is: \n");
    display(a, n, m);
    printf ("\n");
    printf ("The second matrix is: \n");
    display(b, n, m);
    int *res=sum(a, b, n, m);
    if (res==NULL)
        {
            return 0;
        }
        else
        {
            printf("\nThe sum of the matrices is: ");
            display(res, m, n);
            printf ("\n");
        }
    
    free(a);
    free(b);
    return 0;
    
}
void read(int* a, int n, int m)
{
    int i, j;
    for (i=0; i<n; i++)
    {
        printf ("The row %d\n", i);
        for (j=0; j<m; j++)
        {
            printf ("a[%d][%d]=", i, j);
            scanf ("%d", (a+i*m+j));
        }
    }
}
void display(int* a, int n, int m)
{
    int i, j;
    for (i=0; i<n; i++)
    {
        printf ("\n\t");
        for (j=0; j<m; j++)
        {
            printf ("%d\t",*(a+i*m+j));
        }
    }
}
int *sum(int*a, int* b, int n, int m)
{
    int *res=(int*)malloc(n*m*sizeof(int));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            *(res+n*i+j)=*(a+n*i+j)+*(b+n*i+j);
        }
    }
    
    return res;
}

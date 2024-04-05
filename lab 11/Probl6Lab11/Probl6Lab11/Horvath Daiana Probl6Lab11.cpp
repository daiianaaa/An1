/*
 Horvath Daiana, E_2012
 Use the dynamic allocation for a matrix of m x n integer values (m, n <7). Initialize the elements of the matrix. If n is equal to m, use the Sarrus method to obtain the value of the “determinant”. Display the result and free the allocated memory.
 */
#define _CRT_SECURE_NO_WARNINGS
#include<cstdio>
#include<stdlib.h>
void read(int* a, int n, int m);
void display(int* a, int n, int m);
int sarrus(int* a, int n);
int main()
{
    int *a, n, m;
    printf ("Enter the dimensions of the matrix: ");
    scanf ("%d%d", &n, &m);
    a=(int*)malloc(n*m*sizeof(int));
    if (!(m==3 && m==n))
    {
        printf ("The determinant can't be calculated using Sarrus!\n");
        return 1;
    }
    
    read(a, n, m);
    printf ("The matrix is: ");
    display(a, n, m);
    printf ("\n");
    printf ("The determinant is equal with: %d\n", sarrus(a, n));
    if (a)
    free (a);
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
            printf ("a[%d][%d]= ", i, j);
            scanf("%d", (a+i*m+j));
        }
    }
}
void display(int* a, int n, int m)
{
    int i, j;
    for (i=0; i<n; i++)
    {
        printf ("\t\n");
        for (j=0; j<m; j++)
        {
            printf ("%d\t", *(a+i*m+j));
        }
    }
}
int sarrus(int* a, int n)
{
    int i, j;
    int diagonal1 = 1,diagonal2 = 1,diagonal3 = 1;
    int diagonal4 = 1,diagonal5 = 1,diagonal6 = 1;
    for(i = 1;i<=n;i++)
    {
            for(j=1;j<=n;j++)
            {
                
                if(i == j)
                {
                    diagonal1*=*(a + (i - 1)*n + j - 1);
                }
                if( ((i*j == 2 || i*j ==6)  && i>j) || (i*j == 3 && i<j) )
                {
                    diagonal2*=*(a + (i - 1)*n + j - 1);
                }
                if(((i*j == 2 || i*j ==6)  && i<j) || (i*j == 3 && i>j))
                {
                   diagonal3*=*(a + (i - 1)*n + j - 1);
                }
            }
        }
        int sum1 = diagonal1 + diagonal2 + diagonal3;
        for(i = 1;i<=n;i++){
            for(j=1;j<=n;j++)
            {
                if(i*j == 3 || i*j == 4)
                {
                   diagonal4*=*(a + (i - 1)*n + j - 1);
                }
                if(i*j == 1 || i*j == 6)
                {
                    diagonal5*=*(a + (i - 1)*n + j - 1);
                }
                if(i*j == 2 || i*j == 9){
                    diagonal6*=*(a + (i - 1)*n + j - 1);
                }
            }
        }
        int sum2 = diagonal4 + diagonal5 + diagonal6;
        return sum1-sum2;
}

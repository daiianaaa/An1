/*
 Horvath Daiana, E_2012
 This program reads from the keyboard the elements of 2 integer matrices. Write a function that receives as parameters the pointers to the matrices and returns the pointer to the sum matrix. The result is to be displayed in function main. Display the elements from the second diagonal of the sum matrix using the returned pointer.
 */
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include<stdlib.h>
using namespace std;
void cit_mat(int*, int, int);
void afis_mat(int*, int, int);
int *matrSum(int*, int*, int, int, int, int);
int main()
{
    int* a, m, n,r, c;
    int* b;
    printf("Enter the number of rows and columns for the first matrix: ");
    scanf("%d%d", &m, &n);
    printf("Enter the number of rows and columns for the second matrix: ");
    scanf("%d%d", &r, &c);
    
    if ((m <= 0) || (n <= 0))
    {
        printf("Error! The numbers must be positive");
        return 1;
    }
    a = (int*)malloc(m * n * sizeof(int));
    if (a == 0)
    {
        printf("\n Allocation error!");
        return 1;
    }
    cit_mat(a, m, n);
    printf("The first matrix is:\n");
    afis_mat(a, m, n);
    b = (int*)malloc(r * c * sizeof(int));
    if (b == 0)
    {
        printf("\n Allocation error!");
        return 1;
    }
    cit_mat(b, r, c);
    printf("The second matrix is:" );
    afis_mat(b, r, c);
    int *res=matrSum(a, b, m, n, r, c);
    
    if (res==NULL)
    {
        return 0;
    }
    else
    {
        printf("\nThe sum of the matrices is: ");
        afis_mat(res, m, n);
        printf ("\n");
    }
   free(a);
   a=NULL;
   return 0;
}
void cit_mat(int* tb, int l, int c)
{
    int i, j;
    for (i = 0; i < l; i++)
    {
        printf("\nLinia %d: ", i);
            for (j = 0; j < c; j++)
                {
                    scanf("%d", &tb[i * c + j]);
                }
    }
}
void afis_mat(int* tb, int l, int c)
{
    int i, j;
    for (i = 0; i < l; i++)
        {
            printf("\n\t");
            for (j = 0; j < c; j++)
            {
                printf("%d ", *(tb + i * c + j));
            }
        }
}
int *matrSum(int* a,int* b, int n, int m, int r, int c)
{
    int *res=(int*)malloc(n*m*sizeof(int));
    if (n != r || m != c)
    {
      printf("\nThe matrices can't be added!\n");
        return NULL;
    }
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            *(res+n*i+j)=*(a+n*i+j)+*(b+n*i+j);
        }
    }
    
    return res;
}


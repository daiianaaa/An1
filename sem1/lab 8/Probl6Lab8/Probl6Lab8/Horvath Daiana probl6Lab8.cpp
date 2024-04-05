/*
 Horvath Daiana, E_2012
 This program defines two matrices of integer values. The matrices’ dimensions and
 their elements are read from the keyboard. Write the functions that display:
 a) the positions of the odd elements in each matrix;
 b) the sum of all even elements in both matrices;
 c) the sum of the two initial matrices;
 */
#define _CRT_SECURE_NO_WARNINGS
#include<cstdio>
#define DIM 30
void oddPosition(int[][DIM], int, int);
void readMatr(int[][DIM], int, int);
int evenSum(int[][DIM], int, int);
void matrSum(int[][DIM],int[][DIM], int, int, int, int);
int main()
{
    int r,c,a,b, dim;
    int x[DIM][DIM], y[DIM][DIM];
    printf ("Enter the number of the elements on the raws: ");
    scanf ("%d", &r);
    printf ("Enter the numbers of the elements on the columns: ");
    scanf ("%d", &c);
    if ((r > DIM || r < 0)&&(c>DIM || c<0))
    {
        printf("The dimension is too big");
        return 1;
    }
    readMatr(x,r,c);
    printf ("Enter the number of the elements on the raws for the second matrix: ");
    scanf ("%d", &a);
    printf ("Enter the numbers of the elements on the columns for the second matrix: ");
    scanf ("%d", &b);
    if ((a > DIM || a < 0)&&(b>DIM || b<0))
    {
        printf("The dimension is too big");
        return 1;
    }
    readMatr(y,a,b);
    oddPosition(x, r, c);
    oddPosition(y, a, b);
    printf ("The sum of the even elements for the first matrix is %d, and for the second one is %d\n", evenSum(x, r, c), evenSum(y, a, b));
    matrSum(x, y, r, c, a, b);
    return 0;
    
    
}
void readMatr(int a[][DIM], int n, int m)
{
    int i,j;
    for (i=0; i<n; i++)
    {
        for (j=0; j<m; j++)
        {
            printf ("a[%d][%d]=", i, j);
            scanf ("%d", &a[i][j]);
            
        }
    }
}
void oddPosition(int a[][DIM], int n, int m)
{
    for (int i=0; i<n; i++)
    {
        for (int j=0; j<m; j++)
        {
            if (a[i][j]%2==0)
            {
                printf ("The position of the odd elements is: %d %d\n", i, j);
            }
        }
    }
    
}
int evenSum(int a[][DIM], int n, int m)
{
    int s=0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (a[i][j] % 2 != 0)
            {
                s=s+a[i][j];
            }
        }
    }
    return s;
    
}
void matrSum(int a[][DIM],int b[][DIM], int n, int m, int r, int c)
{
    if (n != m || r != c)
    {
      printf("The matrices can't be added!");
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
        a[i][j]=a[i][j]+b[i][j];
        }
    }
    printf("The sum of the two initial matrices is:  ");
       for (int i = 0; i < n; i++)
       {
           for (int j = 0; j < n; j++)
           {
               printf("%d\t", a[i][j]);
           }
       }
   
}


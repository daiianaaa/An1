/*
 Horvath Daiana, e_2012
 This program develops the algorithm able to interclass two one-dimensional arrays of int type. Use pointers.
 */
#define _CRT_SECURE_NO_WARNINGS
#include<cstdio>
#include<stdlib.h>
void read(int* v, int n);
void display(int* v, int n);
void interclass(int* a, int* b, int* c, int n, int m);
int main()
{
    int* a, n = 0,m = 0;
    int* b;
    int* c;
    
    a=(int*)malloc(n*sizeof(int));
    b=(int*)malloc(m*sizeof(int));
    c=(int*)malloc(m*sizeof(int));
    
    printf("Enter the dimension of the vector a: " );
    scanf ("%d", &n);
    printf ("The elements of the vector a are:\n ");
    read(a, n);
    
    printf("Enter the dimension of the vector b: " );
    scanf ("%d", &m);
    printf("The elements of the vector b are: \n");
    read(b, m);
    printf ("The new vector is: \n");
    interclass(a, b, c, n, m);
    return 0;
}
void read(int* v, int n)
{
    int i;
    for (i=0; i<n; i++)
    {
        printf ("v[%d]=", i);
        scanf ("%d", (v+i));
    }
}
void display(int* v, int n)
{
    int i;
    for (i=0; i<n; i++)
    {
        printf("%d", *(v+i));
    }
}
void interclass(int* a, int* b, int* c, int n, int m)
{
    int i=0, j=0, k=0, p;
    while(i<n && j<m)
    {
        if (*(a+i)<*(b+j))
        {
            *(c+k)=*(a+i);
            k++;
            i++;
        }
        else
        {
            *(c+k)=*(b+j);
            k++;
            i++;
        }
        
    }
    if(i <= n)
      {
          for( p = i; p < n; p++)
          {
              *(c+k) = *(a+p);
              k++;
          }
      }
      if(j <= m)
      {
          for(p = j; p < m; p++)
          {
              *(c+k) = *(b+p);
              k++;
          }
      }
       for (p=0; p<k; p++)
       {
           printf ("c[%d]=%d\n", p, *(c+p));
       }
    
}

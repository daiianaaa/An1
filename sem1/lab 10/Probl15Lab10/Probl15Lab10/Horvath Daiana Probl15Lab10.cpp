/*
 Horvath Daiana, E_2012
 This program orders in increasing mode a one-dimensional array of integer type introduced from the keyboard using qsort( ) from stdlib.h. Use the same algorithm for float numbers and a decreasing order.
 */
#include <stdio.h>
#include <stdlib.h>
void citire(int* v,int n);
void citiref(float* v, int n);
void afisare(int* v, int n);
void afisaref(float* v, int n);
int cmp (const void * a, const void * b);
int cmpf (const void * a, const void * b) ;

int main()
{
    int n = 0, dim = 0;
    printf ("Enter the dimension of the first vector: ");
    scanf ("%d", &n);
    printf ("Enter the dimension of the second vector: ");
    scanf ("%d", &dim);
    int v[n];
    float x[dim];
    printf("The first matrix is: \n");
    citire(v,n);
    printf("The second matrix is: \n");
    citiref(x, dim);
    printf("The array of integer numbers ordered increasing is:\n ");
    qsort(v, n, sizeof(int), cmp);
    afisare(v,n);
    printf("The array of float numbers ordered decreasing is: \n");
    qsort(x, dim, sizeof(float), cmpf);
    afisaref(x, dim);
    return 0;

    
}
void citire(int* v,int n)
{
    int i;
    for(i=0; i<n; i++)
    {
        printf ("v[%d]=", i);
        scanf("%d", (v+i));
       
    }
}
void citiref(float* v, int n)
{
    int i;
    for(i=0; i<n; i++)
    {
        printf ("v[%d]=", i);
        scanf("%f", (v+i));
    }
}

void afisare(int* v, int n)
{
    int i;
    for(i=0; i<n; i++)
    {
      printf("%d ",*(v+i));
    }
}
void afisaref(float* v, int n)
{
    int i;
    for(i=0; i<n; i++)
      printf("%.2f ",*(v+i));
}

int cmp (const void *a, const void *b)
{
   return ( *(int*)a - *(int*)b );
}
int cmpf (const void * a, const void * b)
{
    float fa = *(const float*) a;
    float fb = *(const float*) b;
    return (fa < fb) - (fa > fb);
}





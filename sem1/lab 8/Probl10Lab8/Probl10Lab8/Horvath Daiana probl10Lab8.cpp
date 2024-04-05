/*
 Horvath Daiana, E_2012
 This program reads the integer elements of a one-dimensional array. Implement a function that builds another array containing the remainders obtained by dividing the values in the initial array to the number of the positive elements.
 */
#define _CRT_SECURE_NO_WARNINGS
#include<cstdio>
#define DIM 30
void buildArr(int[], int[], int, int);
int positiveNr(int[], int);
int main()
{
    int v[DIM], r[DIM];
    int dim, nr;
    printf ("Enter the dimension of the array: ");
    scanf ("%d", &dim);
    if (dim > DIM)
    {
        printf ("The dimension is too big");
    }
    for (int i=0; i<dim; i++)
    {
        printf ("v[%d]=", i);
        scanf ("%d", &v[i]);
    }
    nr=positiveNr(v, dim);
    buildArr(r, v, dim, nr);
    for (int i=0; i<dim; i++)
    {
        printf ("r[%d]=%d; ", i, r[i]);
    }
    return 0;
    
    
        
}
int positiveNr(int v[], int n)
{
    int nr=0;
    for (int i=0; i<n; i++)
    {
        if (v[i] > 0)
        {
            nr++;
        }
    }
    return nr;
}
void buildArr(int a[], int b[], int n, int r)
{
    int i;
    for (i=0; i<n; i++)
    {
        a[i]=b[i]%r;
    }
}


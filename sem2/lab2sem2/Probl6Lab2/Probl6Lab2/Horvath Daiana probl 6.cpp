/*
 Horvath Daiana, E_2012
 Determine the scalar product of 2 vectors using a recursive function (one-dimensional
 array same dimension).
 */
#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#define DIM 30
int prod( int * v1, int * v2, int n );
void read(int *v, int n );


int main()
{
    int v1[DIM], v2[DIM], n;
    printf ("Enter a value for the number of elements n: ");
    scanf ("%d", &n);
    if (n>DIM)
    {
        printf ("The number is incorrect!\n");
        return 1;
    }
    read(v1, n);
    read(v2, n);
    printf ("The scalar product of the 2 vectors is: %d\n", prod(v1, v2, n));
    return 0;
}

int prod( int * v1, int * v2, int n )
{
    if ( n == 0 )
        return 0;
    else
        return v1[n - 1] * v2[n - 1] + prod( v1, v2, n - 1 );
}
void read(int *v, int n )
{
    int i;
    for (i=0; i<n; i++)
    {
        int x;
        printf ("v[%d]=", i);
        scanf ("%d", &x);
        *(v+i)=x;
    }
}

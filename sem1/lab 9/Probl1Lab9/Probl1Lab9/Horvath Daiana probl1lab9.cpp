/*
 Horvath Daiana, E_2012
 This program reads from the keyboard two one dimensional arrays of integers and displays the scalar product of the two arrays. Use a function that reads the elements from the keyboard and another function that calculates the scalar product, using pointers in both functions. Reading and displaying the arrays’ elements should be done in the main function.
 */
#define _CRT_SECURE_NO_WARNINGS
#include<cstdio>
#define DIM 100
void read(int *v, int n);
int calcProd(int *a, int *b, int n);
int main()
{
    int dim1=0, dim2=0;
    int v[dim1], x[dim2];
    printf ("Enter the dimension of the first array:");
    scanf ("%d", &dim1);
    printf ("Enter the dimension of the second array:");
    scanf ("%d", &dim2);
    read(v, dim1);
    read(x, dim2);
    if (dim1>DIM && dim2>DIM)
    {
        printf ("The dimension is too big!");
        return 1;
    }
    if (dim1==dim2)
    {
    printf ("The scalar product of the two arrays is: %d\n", calcProd(v, x, dim1));
    }
    else
    {
        printf("The numbers of elements is not the same\n");
    }
    return 0;
    
    
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
int calcProd(int *a, int *b, int n)
{
    int p=0, i;
    for (i=0; i<n; i++)
    {
        p+=*(a+i)**(b+i);
        
    }
    return p;
}

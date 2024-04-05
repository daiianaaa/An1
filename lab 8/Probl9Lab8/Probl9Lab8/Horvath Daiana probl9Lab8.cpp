/*
 Hovath Daiana, E_2012
This program reads from the keyboard n integer values into a one-dimensional array. Display the number of negative odd elements and their values.
 */
#define _CRT_SECURE_NO_WARNINGS
#include<cstdio>
#define DIM 30
int main()
{
    int dim, nr=0;
    int v[DIM];
    printf ("Enter the dimension: ");
    scanf ("%d", &dim);
    if (dim > DIM)
    {
        printf ("The dimension is too big!");
        return 1;
    }
    for (int i=0; i<dim; i++)
    {
        printf ("v[%d]=", i);
        scanf ("%d", &v[i]);
    }
    for (int i=0; i<dim; i++)
    {
        if (v[i] < 0 && v[i]%2!=0)
        {
            nr++;
            printf ("The odd negative elements are:%d\n", v[i]);
        } 
    }
    
    printf ("The number of odd negative elements is: %d \n", nr);
    return 0;
}

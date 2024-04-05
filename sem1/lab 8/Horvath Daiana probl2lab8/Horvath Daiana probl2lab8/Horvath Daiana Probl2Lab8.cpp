/*
 Horvath Daiana, E_2012
 This program determines the value of the smallest positive element of a one- dimensional array.
 */
#define _CRT_SECURE_NO_WARNINGS
#include<cstdio>
#define DIM 50
int main()
{
    int v[DIM], dim,i,min=-1;
    bool ok=true;
    printf ("Enter the dimension: ");
    scanf ("%d", &dim);
    if (dim > DIM)
    {
        printf ("The dimension is too big!");
    }
    for (i=0; i<dim; i++)
    {
        printf ("v[%d]=", i);
        scanf ("%d", &v[i]);
    }
    
    for (i=0; i<dim && ok; i++)
    {
        if (v[i]>0)
        {
            min=v[i];
            ok=false;
        }
    }
    for (i=0; i<dim; i++)
    {
        if (v[i]>0 && v[i]<min)
        {
         min=v[i];
        }
    }
    if (min==-1)
    {
        printf ("The smallest positive element of the array does not exist\n");
    }
    else
    {
    printf ("The smallest positive element of the array is: %d\n", min);
    }
    
    return 0;
    
}

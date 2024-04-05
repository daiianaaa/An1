/*
 Horvath Daiana, E_2012
 This program resolves minimum 3 problems referring to arrays (from the previous lab number 8), using pointers.
 */
//Probl1. This program determines the mean value of the negative/positive elements from a one-dimensional array.
 
#define _CRT_SECURE_NO_WARNINGS
#include<cstdio>
#include<stdlib.h>
#define DIM 30
float posValue(int*, int);
float negValue(int*, int);
void citire(int* v, int n);
int main()
{
    int* v;
    int dim,i,min=-1, nr=0;
    bool ok=true;
    printf("Enter the dimension: ");
    scanf ("%d", &dim);
    if ( dim > DIM)
    {
        printf ("The dimension is too big:");
        return 1;
    }
    v=(int*)malloc(dim*sizeof(int));
    citire(v, dim);
    printf ("The mean value of the positive numbers is %.2f and the mean value of the negative numbers is %.2f\n ", posValue(v, dim), negValue(v, dim));
//Probl2. This program determines the value of the smallest positive element of a one- dimensional array.

    for (i=0; i<dim && ok; i++)
    {
        if (*(v+i)>0)
        {
            min=*(v+i);
            ok=false;
        }
    }
    for (i=0; i<dim; i++)
    {
        if (*(v+i)>0 && *(v+i)<min)
        {
         min=*(v+i);
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
// 9. This program reads from the keyboard n integer values into a one-dimensional array. Display the number of negative odd elements and their values
    for (int i=0; i<dim; i++)
        {
            if (v[i] < 0 && v[i]%2!=0)
            {
                nr++;
                printf ("The odd negative elements are:%d\n", v[i]);
            }
        }
        
        printf ("The number of odd negative elements is: %d \n", nr);
    free (v);
    return 0;
    
}
void citire(int* v, int n)
{

        int i;
        
        for (i=0; i<n; i++)
        {
            printf ("v[%d]=", i);
            scanf ("%d", (v+i));
            
        }
    
}
float posValue(int* v, int n)
{
    int i, s=0, nrpoz=0;
    for (i=0;i<n;i++)
   {
       if (*(v+i)>0)
    {
        nrpoz++;
        s+=*(v+i);
        
   }
       
   }
    if (nrpoz==0)
    {
        return 0;
    }
    return (float)s/nrpoz;
}
float negValue(int* v, int n)
{
    int i, s2=0, nrneg=0;
    for (i=0;i<n;i++)
   {
       if (*(v+i)<0)
       {
           nrneg++;
        s2+=*(v+i);
       }
   }
    if (nrneg==0)
    {
        return 0;
    }
    return (float)s2/nrneg;
}

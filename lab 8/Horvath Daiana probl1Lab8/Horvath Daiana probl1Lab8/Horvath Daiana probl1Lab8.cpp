/* Horvath Daiana
 E_2012
 This program determines the mean value of the negative/positive elements from a one-dimensional array.
 
 */
#define _CRT_SECURE_NO_WARNINGS
#include<cstdio>
#define DIM 30
float posValue(int[], int);
float negValue(int[], int);
int main()
{
    int v[DIM],dim,i;
    printf("Enter the dimension: ");
    scanf ("%d", &dim);
    if ( dim > DIM)
    {
        printf ("The dimension is too big:");
        return 1;
    }
    for (i=1;i<=dim;i++)
    {
        printf ("v[%d]=", i);
        scanf ("%d", &v[i]);
    }
    printf ("The mean value of the positive numbers is %.2f and the mean value of the negative numbers is %.2f ", posValue(v, dim), negValue(v, dim));
    
}
float posValue(int v[], int n)
{
    int i, s=0, nrpoz=0;
    for (i=0;i<=n;i++)
   {
       if (v[i]>0)
    {
        nrpoz++;
        s+=v[i];
        
   }
       
   }
    
    return (float)s/nrpoz;
}
float negValue(int v[], int n)
{
    int i, s2=0, nrneg=0;
    for (i=0;i<=n;i++)
   {
       if (v[i]<0)
       {
           nrneg++;
        s2+=v[i];
       }
   }
    
    return (float)s2/nrneg;
}

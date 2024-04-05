/*
 Horvath Daiana, E_2012
 Thia program reads from the keyboard an array of 10 integer values. Define and implement a function that receives the array as parameter and then displays its elements, ordered increasingly
 */
#define _CRT_SECURE_NO_WARNINGS
#include<cstdio>
void primire(int[], int);
void sortare(int[], int);
int main()
{
    int i,dim=10,v[dim];
    printf("Enter 10 integer values:\n ");
    for (i=0; i<dim; i++)
    {
        printf ("v[%d]=", i);
        scanf ("%d", &v[i]);
    }
    primire(v,dim);
    return 0;
    
}
void sortare (int v[], int n)
{
    int i,j,aux;
    for (i=0; i<n-1; i++)
    {
        for (j=i+1; j<n; j++)
        {
            if (v[i]>v[j])
            {
                aux=v[i];
                v[i]=v[j];
                v[j]=aux;
            }
        }
    }
}
void primire(int v[], int n)
{
    sortare(v,n);
    int i;
    for (i=0; i<n; i++)
    {
        printf ("%d\n", v[i]);
    }
}

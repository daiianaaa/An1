/*
 Horvath Daiana, E_2012
 This program reads from the keyboard n integer values into a one-dimensional array. Implement a function that calculates their average value. Another function will display the elements from the initial array that are greater than the computed average.
 */
#define _CRT_SECURE_NO_WARNINGS
#include<cstdio>
#define DIM 20
float averageVal(float[], int);
void displayGreater(float[], int, float);
void readVect(float[], int);
int main()
{
    int n, dim;
    float v[DIM];
    printf ("Enter a dimension for the array: ");
    scanf ("%d", &dim);
    if (dim > DIM)
    {
        printf ("The dimension is too big");
        return 1;
    }
    readVect(v, dim);
    float m;
    m=averageVal(v, dim);
    printf ("The average value of the elements is: %.2f\n", m );
    displayGreater(v, dim, m);
    return 0;
    
}
void readVect(float v[], int n)
{
    for (int i=0; i<n; i++)
    {
        printf ("v[%d]=", i);
        int x;
        scanf ("%d", &x);
        v[i]=x;
    }

}
float averageVal(float v[], int n)
{
    float s=0;
    for (int i=0; i<n; i++)
    {
        s=s+v[i];
        
    }
    return s/n;
    
}
void displayGreater(float v[], int n, float a)
{
    printf ("The elements greater than %.2f are:", a);
    for (int i=0; i<n; i++)
    {
        if (v[i] > a)
        {
            printf ("%.1f", v[i]);
        }
    }
   
}

    



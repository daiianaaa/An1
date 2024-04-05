/*
 Horvath Daiana, E_2012
 This program implements a function for reading from the keyboard some integer values. The function stores the values in a one-dimensional array named A. Write another function that fills a different one-dimensional array B, each element being obtained by subtracting the mean value of the initial values from the corresponding element located in the one-dimensional array A. Write a function that displays a one-dimensional array and use it for A and B one-dimensional array
 */
#define _CRT_SECURE_NO_WARNINGS
#include<cstdio>
#include<stdlib.h>
void read(int* a, int n);
void display(int*a, int n);
void displayF(float* b, int n);
void calcMed(int*a, int n, float &s);
void newArr(int*a, float* b, float &med, int n);
int main()
{
    int* a;
    int n;
    float s=0;
    printf ("Enter the dimension of the array: ");
    scanf ("%d", &n);
    float* b;
    a=(int*)malloc(n*sizeof(int));
    b=(float*)malloc(n*sizeof(float));
    read(a, n);
    display(a, n);
    calcMed(a, n, s);
    newArr(a, b, s, n);
    displayF(b, n);
    free (a);
    free (b);
    return 0;
}
void read(int* a, int n)
{
    int i;
    for (i=0; i<n; i++)
    {
        printf ("v[%d]=", i);
        scanf ("%d", (a+i));
    }
}
void display(int* a, int n)
{
    int i;
    printf ("The first array is:\n");
    for (i=0; i<n; i++)
    {
        printf ("v[%d]=%d\n", i, *(a+i));
    }
}
void displayF(float* b, int n)
{
    int i;
    printf ("The second array is: \n");
    for (i=0; i<n; i++)
    {
        printf ("v[%d]=%.2f\n", i, *(b+i));
    }
}
void calcMed(int* a, int n, float&s)
{
    s=0;
    int i;
    for (i=0; i<n; i++)
    {
        s+=*(a+i);
    }
    s/=n;
}
void newArr(int* a, float* b, float &med, int n)
{
    int i;
    for (i=0; i<n; i++)
    {
        *(b+i)=(float)*(a+i)-med;
    }
}

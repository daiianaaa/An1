/*
 Horvath Daiana, E_2012
 Write a C/C++ application that allocates memory for n integer numbers that will be read from the keyboard. Write a function that determines the square root of each number and stores the result into another dynamically allocated array. Display the initial and computed values. Free the allocated memory.
 */
#define _CRT_SECURE_NO_WARNINGS
#include<cstdio>
#include<stdlib.h>
#include<math.h>
void read(int* v, int n);
void display(int* v, int n);
void displayF(float* v, int n);
float* square(int* a, int n);
int main()
{
    int n, *v = nullptr;
    printf("\nIntroduceti dimensiunea tablolului: ");
    scanf("%d", &n);
    v = (int *)malloc(n * sizeof(int));
    read(v, n);
    printf ("The first array is:\n");
    display(v, n);
    float  *calc;
    calc=(float*)malloc(n*sizeof(float));
    calc=square(v, n);
    printf ("\n");
    printf ("The array of the square root of the numbers is:\n ");
    displayF(calc, n);
    printf ("\n");
    free (calc);
    free (v);
    return 0;
    
    
}
void read(int* v, int n)
{
    int i;
    printf("\nIntroduceti elementele tablolului: \n");
    for(i=0; i<n; i++)
    {
        printf("\t elementul %d: ", i);
        scanf("%d", v+i);
    }
    
}
void display(int* v, int n)
{
    int i;
    for (i=0; i<n; i++)
    {
        printf ("v[%d]=%d", i, *(v+i));
    }
}
void displayF(float* v, int n)
{
    int i;
    for (i=0; i<n; i++)
    {
        printf ("v[%d]=%.2f", i, *(v+i));
    }
}
float* square(int* a, int n)
{
    float *b;
    b=(float*)malloc(n*sizeof(float));
    for(int i=0; i<n; i++)
    {
        *(b+i)=sqrt(*(a+i));
    }
    return b;
}

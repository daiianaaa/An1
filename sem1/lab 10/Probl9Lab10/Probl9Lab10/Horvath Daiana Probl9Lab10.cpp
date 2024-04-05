/*
 Horvath Daiana, E_2012
 This program reads from the keyboard the float type elements of a one-
 dimensional array. The values represent the average marks of a group of students. Write a function that determines the number of students having the average mark >= 8. Display the result in the main function. (use pointers, avoid global variables).
 */
#define CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
void read(float* v, int n);
int mark(float*, int n);
int main()
{
    float* v;
    int n;
    printf ("Enter the dimension of the array: ");
    scanf ("%d", &n);
    v=(float*)malloc(n*sizeof(float));
    read(v, n);
    printf ("The number of students that have the mark bigger than 8 is: %d\n", mark(v, n));
    if (v)
        free(v);
    v=NULL;
    return 0;
}
void read(float* v, int n)
{
    int i;
    
    for (i=0; i<n; i++)
    {
        printf ("v[%d]=", i);
        scanf ("%f", (v+i));
        
    }
}
int mark(float* v, int n)
{
    int i, nr=0;
    for (i=0; i<n; i++)
    {
        if (*(v+i)>=8)
        {
            nr++;
        }
        
    }
    return nr;
    
}

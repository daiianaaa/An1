/*
 Horvath Daiana, E_2012
 This program generates 20 random numbers, each smaller than 50 (use srand(), rand() and % operator). Write a function that eliminates the odd elements from the one dimensional array (using pointers). Display both the initial and the final array in the main function.
 */
#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <stdlib.h>
#include <time.h>
void display(int* v, int n);
void elimin(int* v, int &n);
int main()
{
    int v[20], n=20;
    srand(time(0));
    for (int i=0; i<n; i++)
    {
        *(v+i)=rand()%50;
    }
    display(v, n);
    elimin(v, n);
    display(v, n);
    return 0;
}
void display(int* v, int n)
{
    int i;
    printf ("\nThe array is: ");
    for (i=0; i<n; i++)
    {
        printf ("%d ", *(v+i));
    }
}
void elimin(int* v, int &n)
{
int i=0, j;
while (i<n)
{
    if(*(v+i)%2!=0)
    {
        for(j = i ; j < n - 1; j ++)
        {
            *(v+j) = *(v+j+1);
        }
       --n;
    } else i++;
}
}

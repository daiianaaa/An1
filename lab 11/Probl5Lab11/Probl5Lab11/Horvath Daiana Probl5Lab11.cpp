/*
 Horvath Daiana, E_2012
 Declare a global float pointer. In function main(), read an integer value N that represents the dimension of an array of float numbers. Allocate the necessary ammount of memory for storing the array and than read it’s elements from the keyboard. Determine the average value of those N elements and calculate Mn=(sum(pow((xi-xmed),n))/N, where n=1,2,3. Display the results and then free the allocated memory. Use the functions malloc() and free(). In another function, generate the numbers in the array using a library function that generates random numbers and determine the same values. Use new and delete operators.
 */
#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <math.h>
#include <stdlib.h>
#include <time.h>
void read(int n);
void afis(int n);
float sum(float*, int);
float* calc (int n);
float *p;

int main()
{
    int n, i;
    printf ("The number of elements is: ");
    scanf ("%d", &n);
    printf ("The elements of the array are: ");
    read(n);
    afis(n);
    float s=sum(p, n);
    float *v=calc(n);
    for (int i = 0; i < n; i++)
    {
            printf("v[%d]=%.2f\n", i , *(v+i));
    }
    printf ("Mn=(sum(pow((xi-xmed),n))/N for 1, 2, 3 is:\n");
    for (int j=1; j<4; j++)
    {
        s=0;
        for (i=0; i<n; i++)
        {
            s+=pow(v[i], j);
        }
        s/=n;
        printf("When n is %d the result is %.2f\n", j, s);
    }
    free(p);
    free(v);
    return 0;
}
void read(int n)
{
        srand(time(NULL));
        p = (float*)malloc(n*sizeof(float));
        for (int i = 0; i < n; i++)
        {
            p[i]=rand()%100;
        }
}
void afis(int n)
{
        for (int i = 0; i < n; i++)
                printf("v[%d]=%.2f\n", i + 1, p[i]);
}
float sum(float *v, int n)
{
    float s=0;
    for (int i=0; i<n; i++)
    {
        s+=*(v+i);
    }
    return s;
}
float* calc(int n)
{
    float m=sum(p, n)/n;
    float *v=(float*)malloc(n*sizeof(float));
    for (int i=0; i<n; i++)
    {
        v[i]=p[i]-m;
    }
    return v;
}


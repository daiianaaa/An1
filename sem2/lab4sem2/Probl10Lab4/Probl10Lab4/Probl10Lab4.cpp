/*
Horvath Daiana, E_2012
Generate 200 random float values. Store the integer parts (not bigger than 100) into an array. The fractional
parts (limited at 20 as an integer value representing a 0.20 fractional part) are stored into another array with the same size as the first one. The initial values re-calculated by combining the elements stored into the previously described arrays are stored into another vector. Display all the arrays. Use the qsort( ) library function for storing the float values and display the final result.

*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>
#include<stdlib.h>
void write_v1(float* v, int n);
void write_v2(int* v, int n);
int cmp(const void* a, const void* b);
int main()
{
    int n;
    printf("Enter the number of elements you want to generate: ");
    scanf("%d", &n);
    if (n > 200)
    {
        printf("Enter maximum 200 numbers. ");
        return 0;
    }
    float* v1= (float*)malloc(n * sizeof(float));
    float* v2 = (float*)malloc(n * sizeof(float));
    int* v3 = (int*)malloc(n* sizeof(int));
    float* arr_float = (float*)malloc(n * sizeof(float));
    for (int i = 0; i < n; i++)
    {
            *(v1+ i) = rand() % 100+(float)(rand()%20)/100;
    }
    printf("The main array is: \n");
    write_v1(v1, n);
    for (int i = 0; i < n; i++)
    {
            *(v3 + i) = (int)*(v1 + i);
    }
    printf("\nThe separated int values of the array are:\n");
    write_v2(v3, n);
    for (int i = 0; i < n; i++)
    {
            *(arr_float + i) = *(v1+i)-*(v3 + i);
    }
    printf("\nThe fractional values separated are:\n");
    write_v1(arr_float, n);
    for (int i = 0; i < n; i++)
    {
            *(v2 + i) = *(arr_float+i)+ *(v3 + i);
    }
    printf("\nThe values merged are:\n");
    write_v1(v2, n);

    qsort((float*)v2, n, sizeof(float), cmp);
    printf("\nThe sorted array is:\n");
    write_v1(v2, n);
    free(v1);
    free(v2);
    free(v3);
    free(arr_float);
    return 0;
}

void write_v1(float* v, int n)
{
    for (int i = 0; i < n; i++)
    {
            printf("%.2f ", *(v + i));
    }

}

void write_v2(int* v, int n)
{
    for (int i = 0; i < n; i++)
    {
            printf("%d ", *(v + i));
    }
}
int cmp(const void* a, const void* b)
{
    float fa = *(const float*)a;
    float fb = *(const float*)b;
    return (fa > fb) - (fa < fb);
}

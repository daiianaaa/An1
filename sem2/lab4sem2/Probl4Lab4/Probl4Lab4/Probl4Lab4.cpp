/*
 Horvath Daiana, E_2012
 Write a C/C++ application that reads from the keyboard 2 arrays of positive numbers. The program determines a 3-rd array that contains all the elements in the initial arrays, increasingly ordered. The elements that have the same value must appear a single time in the ordered array.
 */
#define _CRT_SECURE_NO_WARNINGS
#include<cstdio>
#include<stdlib.h>
int compare(int *v1, int *v2);
void read(int *v, int n);
void write(int *v, int n);
int main()
{
    int n, m, i = 0, j = 0, k = 0;
    printf ("Enter the dimension for the first array: ");
    scanf ("%d", &n);
    int* sir1=(int*)malloc(n*sizeof(int));
    printf ("Enter the value for the second array: ");
    scanf ("%d", &m);
    int* sir2=(int*)malloc(m*sizeof(int));
    int* sir3=(int*)malloc((m+n)*sizeof(int));
    read(sir1, n);
    read(sir2, m);
    qsort( (int *)sir1, n, sizeof( int ), (int (*) (const void *, const void *)) compare );
    qsort( (int *)sir2, m, sizeof( int ), (int (*) (const void *, const void *)) compare );
    while(i+j<m+n+1)
    {
        if(sir1[i]<sir2[j])
        {
            if(i<n)
            {
                sir3[k++]=sir1[i++];
            }
            else
            {
                sir3[k++]=sir2[j++];
            }
        }
        else
        {
            if(j<m)
            {
                sir3[k++]=sir2[j++];
            }
            else
            {
                sir3[k++]=sir1[i++];
            }
        }
        if(k-1)
            if(sir3[k-1]==sir3[k-2])
                k--;
    }
    printf ("The third array is: ");
    for(int i=0;i<k-1;i++)
    {
        printf("%d, ",sir3[i]);
    }
}
void read(int *v, int n)
{
    for (int i=0; i<n; i++)
    {
        printf ("v[%d]=", i);
        int x;
        scanf ("%d", &x);
        *(v+i)=x;
    }

}
void write(int *v, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", *(v+i));
    }
}
int compare(int *v1,int *v2)
{
    return *v1-*v2;
}

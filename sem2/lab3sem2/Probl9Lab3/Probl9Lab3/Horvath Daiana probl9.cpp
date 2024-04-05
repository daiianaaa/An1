/*
 Horvath Daiana, E_2012
 Write a C/C++ application that generates max 10 integer random values and stores them in an array. Check if another randomly generated value belongs to this array, using _lsearch() function.
 */
#define _CRT_SECURE_NO_WARNINGS
#include<cstdio>
#include<stdlib.h>
int cmp(const void* a, const void* b);
int main()
{
    int *a=(int*)malloc(10*sizeof(int));
    *(a+10) = -1;
    int *l=(int*)malloc(10*sizeof( int));
    int* p = nullptr;

    for (int i = 0; i < 10; i++)
    {
            *(a+i)=rand() % 10;
    }

    printf("The array is:\n");

    for (int i = 0; i < 10; i++)
    {
            printf("%d ", *(a + i));
    }
    int n=rand()%10;
    printf("\nThe generated number is: %d\n",n);
    *l = 10;

   // p = (int*)_lsearch(&n, a, l, sizeof(int), (int(*)(const void*, const void*))cmp); nu pot folosi _lsearch, imi da eroare ca ar trebui folosit bsearch():(

    if (a[10]==-1)
            printf("The randomly generated nr %d is in the array", *p);
    else
            printf("The randomly generated nr %d is not in the array", n);
    free (a);
    free (l);
    return 0;

}

int cmp(const void* a, const void* b)
{
        return (*(int*)a - *(int*)b);
}

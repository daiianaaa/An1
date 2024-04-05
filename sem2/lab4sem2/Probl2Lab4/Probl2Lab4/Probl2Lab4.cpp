/*
 Horvath Daiana, E_2012
 Modify the program that implements the Quick-Sort algorithm so that it will sort decreasingly the initial array of values.
 */
#define _CRT_SECURE_NO_WARNINGS
#include<cstdio>
#include<stdlib.h>
void quickSort (int *p, int prim, int ultim);
void read(int *v, int n);
int main()
{
    int *v, n, i;
    printf ("Enter the dimension of the array: ");
    scanf ("%d", &n);
    v=(int*)malloc(n*sizeof(int));
    read(v, n);
    quickSort(v, 0, n-1);
    printf ("The sorted array is: ");
    for (i=0; i<n; i++)
    {
        printf ("%d ", *(v+i));
    }
    return 0;
}
void read(int *v, int n)
{
    int i;
    for (i=0; i<n; i++)
    {
        printf ("v[%d]= ", i);
        scanf ("%d", (v+i));
    }
}
void quickSort (int *p, int prim, int ultim)
{
  int i, j, pivot, temp;
  i = prim;
  j = ultim;
  pivot = p[ultim];
// partitionare
do {
  while (p[i] > pivot)
    i++;
  while (p[j] > pivot)
    j--;
  if (i < j)
    {
      temp = p[i];
      p[i] = p[j];
      p[j] = temp;
    }
  if (i <= j)
    {
      j--;
      i++;
    }
}while (i < j);

    if(prim < j)
quickSort (p, prim, j);
if (i < ultim)
  quickSort (p, i, ultim);
}

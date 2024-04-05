/*
 Horvath Daiana, E_2012
 Read from the keyboard a one-dimensional array of maximum 20 integer values. Using the binary search mechanism, determine if another value a (also read from the standard input) is part of the array. If so, determine and display all its prime factors.
 */
#define _CRT_SECURE_NO_WARNINGS
#include<cstdio>
#define dim 100
int binary_search(int x[dim], int l, int r, int c);
void ordonare(int x[dim], int n);
void read(int v[], int n);
int main()
{
    int n, v[dim], x, c;
    printf("Introduce the number of elements: " );
    scanf ("%d", &n);
    read(v, n);
    ordonare(v, n);
    printf( "Introduce the element you want to find: ");
    scanf("%d", &x);
    c = binary_search(v, 0, n - 1, x);
    if (c == -1)
    {
        printf( "\nThe element was not found\n");
    }
    else
    {
        printf ("The element was found in the position %d\n", c);
       //search the prime elements
        for (int i = 1; i <= c; i++)
        {
            if (c % i == 0)
            {
                int nr = 0;
                for (int j = 1; j <= i; j++)
                {
                    if (i % j == 0)
                    {
                        nr++;
                    }
                }
                if (nr == 2)
                {
                    printf ("%d", i);
                }
            }
        }
    }
    return 0;
}
void read(int v[], int n)
{
    int i;
    for (i=0;i<n;i++)
    {
        printf ("v[%d]=", i);
        scanf ("%d", &v[i]);
    }
}
int binary_search(int x[], int l, int r, int c)
{
    if (r >= l)
    {
        int mid = l + (r - l) / 2;
        if (x[mid] == c)
            return mid;
        if (x[mid] > c)
            return binary_search(x, l, mid - 1, c);


        return binary_search(x, mid + 1, r, c);
    }

    return -1;
}
void ordonare(int x[dim], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i; j < n; j++)
        {
            if (x[i] > x[j])
            {
                int aux = x[i];
                x[i] = x[j];
                x[j] = aux;
            }
        }
    }
}


/*
 Horvath Daiana, E_2012
 Write a program that uses the „divide et impera” method for determining the greatest common divider of a series of maximum 2000 values stored in an array. All the numbers are entered from the keyboard or read from a previously created file.
 */
#define _CRT_SECURE_NO_WARNINGS
#include<cstdio>
#include<stdlib.h>

void read(int v[], int n);
int cmmdc(int a[100], int s, int d);

int main()
{
    int n, v[100];
    printf ("Enter the dimension of the array: ");
    scanf("%d", &n);
    read(v, n);
    printf ("The greatest common divider of the numbers is: %d\n", cmmdc(v, 1, n));
    return 0;
    
}
void read(int v[], int n)
{
    int i;
    for (i=0; i<n; i++)
    {
        printf ("v[%d]=", i);
        scanf ("%d", &v[i]);
    }
}
int cmmdc(int a[100], int s, int d)
{
    if(s==d)
        return a[s];
    else
        {
        int x,y;
        x=cmmdc(a,s,(s+d)/2);
        y=cmmdc(a,(s+d)/2+1,d);
            while(x!=y)
                if(x>y) x=x-y;
                else y=y-x;
            return x;
        }
}

/*
 Horvath Daiana, E_2012
 This program reads n numbers and displays those who can be divided by 3.
 */
#define _CRT_SECURE_NO_WARNINGS
#include<cstdio>
int main()
{
    int a[100],i,n;
    printf ("Enter a value for n: ");
    scanf ("%d", &n);
    for (i=1;i<=n;i++)
    {
        scanf ("%d", &a[i]);
       
    }
    for (i=1; i<=n; i++)
    {
        if (a[i]%3==0)
        {
            printf ("The numbers who can be divided by 3 are:%d\n", a[i]);
        }
    }
    return 0;

}

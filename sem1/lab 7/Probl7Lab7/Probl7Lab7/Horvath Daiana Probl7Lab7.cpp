/*
 Horvath Daiana, E_2012
 This program determines all the divizors of a number.
 */
#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
int main()
{
    int nr;
    printf ("Enter a value: ");
    scanf ("%d", &nr);
    for (int d=1; d<=nr; d++)
    {
    if (nr%d==0)
    {
        printf ("The divizors are:%d\n",d);
    }
    }
    return 0;
}

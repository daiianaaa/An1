/*
 Horvath Daiana, E_2012
 This program determines the product of two numbers using addition;
 */
#define _CRT_SECURE_NO_WARNINGS
#include<cstdio>
int readNumber();
int main()
{
    int a, b,c;
    a=readNumber();
    b=readNumber();
    c=a;
    for (int i=1; i<b;i++)
    {
        c=c+a;
    }
    printf ("The product is:%d\n", c);
    return 0;
}
int readNumber()
{
    int nr;
    printf ("Enter a value: ");
    scanf("%d", &nr);
    return nr;
}

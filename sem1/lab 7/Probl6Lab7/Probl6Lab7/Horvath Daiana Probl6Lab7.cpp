/*
 Horvath Daiana, E_2012
 This program greatest common divider of 2 integer values
 */
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int readNumber();
int main()
{
    int a,b;
    a=readNumber();
    b=readNumber();
    while(a!=b)
    {
        if(a>b)
        {
            a=a-b;
        }
        else
        {
            b=b-a;
        }
    }
    printf ("The greatest common divider of the numbers is:%d", a);
    return 0;
    
}
int readNumber()
{
    int nr;
    scanf("Enter the number: ");
    scanf("%d", &nr);
    return nr;
}

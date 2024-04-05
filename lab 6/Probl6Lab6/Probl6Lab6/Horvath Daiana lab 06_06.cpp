/*
 Horvath Daiana, E_2012
 This program reads an integer value from the standard input and writes, in decimal format, the value of each byte of the value.
 */
#define _CRT_SECURE_NO_WARNINGS
#include<cstdio>
int readNumber();
int main()
{
    int n;
    n=readNumber();
    while(n>0)
        {
            printf ("The value of each byte is: %d", n&0xff);
            n=n>>8;
        }
    return 0;
    
}
int readNumber()
{
    int nr;
    printf("Enter a value for x: ");
    scanf("%d", &nr);
    return nr;
}

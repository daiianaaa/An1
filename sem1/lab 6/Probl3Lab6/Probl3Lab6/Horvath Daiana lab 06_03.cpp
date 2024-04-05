/*
 Horvath Daiana, E_2012
 This program reads an unsigned char value and displays the binary values resulting after recursively applying the shift right and the % operators.
 */
#define _CRT_SECURE_NO_WARNINGS
#include<cstdio>
void binary(int);
int main()
{
    unsigned char a;
    printf ("A character of ascii code is: ", a);
    scanf("%c", &a);
    binary((int)a);
    return 0;
    
    
}
void binary(int n)
{
    int u;
    u=0;
    if (n>0)
        {
            u=n & 1;
            n=n>>1;
            binary(n);
        }
    printf ("\n The last bit is: %d", u);
}

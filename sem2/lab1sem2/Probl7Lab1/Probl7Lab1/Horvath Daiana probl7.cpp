/*
 Horvath Daiana, E_2012
 Write a program that performs a simple coding operation by increasing with 3 the value of the ASCII code of a character using macro functions. For example, A becomes C, etc.
 */
#define _CRT_SECURE_NO_WARNINGS
#include<cstdio>

#define increase(a, n) ((a)+n)
#define CONST 2

int main()
{
    char a;
    int n= CONST;
    printf ("Give a character: ");
    scanf ("%c", &a);
    printf ("The character a increased with 3 values is: %c\n", increase(a, n));
    return 0;
}


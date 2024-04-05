/*
 Horvath Daiana, E_2012
 This program reads from the keyboard two arrays of characters representing the name and surname of a person. Display them with capital letters, separated by a <Tab> space.
 */
#define _CRT_SECURE_NO_WARNINGS
#include<cstdio>
#include<ctype.h>
int main()
{
    char n[30], s[30];
    printf ("Enter the name of the person: ");
    scanf("%s", n);
    printf ("Enter the surname of the person: ");
    scanf("%s", s);
    n[0]=toupper(n[0]);
    s[0]=toupper(s[0]);
    printf ("%s\t\t%s\n", n, s);
    return 0;
}

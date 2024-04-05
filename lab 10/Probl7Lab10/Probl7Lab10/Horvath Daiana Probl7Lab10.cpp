/*
 Horvath Daiana, E_2012
 This program reads some character arrays from the command line and
 displays the resulting concatenated string.
 */
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
int main(int arg, char *argv[])
{
    char s[20];
    s[0]='\0';
    printf ("The arrays supplied are: %s %s\n" , argv[1], argv[2]);
    for (int i=1; i<arg; i++)
    {
        strcat(s, argv[i]);
    }
    printf ("The resulting string is: %s\n", s);
    return 0;
}

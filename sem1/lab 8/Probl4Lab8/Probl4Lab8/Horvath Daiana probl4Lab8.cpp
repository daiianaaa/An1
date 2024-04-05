/*
 Horvath Daiana, E_2012
 This program defines a password (as a string of characters). The program reads repeatedly the entries from the keyboard until the user enters the right password. Display the number of trials the user entered wrong passwords.
 */
#define _CRT_SECURE_NO_WARNINGS
#include<cstdio>
#include<cstring>
int main()
{
    const char p[50]="password123";
    char c[30];
    int nr=0;
    do
    {
        printf ("Enter a password: ");
        scanf ("%s", c);
        nr++;
            
    }while (strcmp(c,p));
    printf ("The user entered %d wrong passwords\n", nr-1);
}

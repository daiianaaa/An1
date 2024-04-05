/*
 Horvath Daiana, E_2012
 This program reads from the keyboard an array of characters that has more than 7 elements. Use a pointer for displaying the characters that have the indexes 1, 3, 5 and 7.
 */
#define CRT_SECURE_NO_WARNINGS
#include<cstdio>
#include<string.h>
int main()
{
    char s[20];
    printf ("Enter more than 8 characters: ");
    scanf ("%s", s);
    if (strlen(s)<8)
    {
        printf ("There are not enough characters!");
    }
    else
    printf ("The character that has the index 1 is %c, the index 3 is %c, the index 5 is %c and the one that has index 7 is %c\n", *(s+1), *(s+3), *(s+5), *(s+7));
    return 0;
}



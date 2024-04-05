/*
 Horvath Daiana, E_2012
 This program defines an array of pointers to character strings and
 initialize them with different messages. Display the messages.
 */
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
    const char* s[]={"First array", "Second array", "Third array", "Fourth array"};
    for (int i=0; i<4; i++)
    {
        printf ("%s\n", *(s+i));
    }
    return 0;
}

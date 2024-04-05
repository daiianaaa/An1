/*
 Horvath Daiana, E_2012
 Read a string of caracters from the keyboard, one character at a time, using a character
 function. Reverse the string using a recursive function.
 */
#define _CRT_SECURE_NO_WARNINGS
#include<cstdio>
#include<string.h>
#define DIM 10
void reverse(char* str, int n);
void swap(char* x, char* y);

int main()
{
        char s[DIM] = {'\0'}, c[2];
        int n;

        printf("Enter the number of the characters: ");
        scanf("%d", &n);
        printf ("Enter the characters: ");
        for (int i = 0; i < n; i++)
        {

                scanf("%s", &c);
                strcat(s, c);
        }

        printf("The string is: %s", s);

        reverse(s, 0);

        printf("\nThe reversed string is: %s\n", s);

        return 0;
}
void swap(char* x, char* y)
{
        char temp = *x;
        *x = *y;
        *y = temp;
}
void reverse(char* str, int n)
{
        static int i = 0;

        if (*(str + n) == '\0')
        {
                return;
        }

        reverse(str, n + 1);

        if (i <= n) {
                swap(&str[i++], &str[n]);
        }
}



/*
 Horvath Daiana, E_2012
 reads from the keyboard an array of characters. Write a function that displays the characters that are in the array and the number of times they appear. Use pointers.
 */
#define CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <string.h>

#define DIM 100

void calc(char* );

int main ()
{
    char s[DIM];
    char* p;
    p=s;
    printf ("Enter the array: ");
    scanf ("%s", p);
    calc(p);
  return 0;
}
void calc (char* arr)
{
    int i,j;
    for (i=0; i<strlen(arr); i++)
    {
        int nr=0;
        for (j=i; j<strlen(arr); j++)
        {
            if (*(arr+i)==*(arr+j))
            {
                nr++;
                if (nr>1)
                {
                    *(arr+j)=' ';
                }
            }
        }
    if (*(arr+i)!=' ')
    {
        printf ("The character %c appears %d times\n", *(arr+i), nr);
    }
    }
}

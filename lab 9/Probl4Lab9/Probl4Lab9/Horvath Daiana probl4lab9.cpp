/*
 Horvath Daiana, E_2012
 This program reads from the keyboard an array of characters and displays the string obtained by eliminating the characters that appear more than once in the original array using pointers.
 */
#define _CRT_SECURE_NO_WARNINGS
#include<cstdio>
#include<string.h>
#define DIM 100
void appear(char*);
int main()
{
    char s[DIM];
    char* p;
    p=s;
    printf ("Enter the array: ");
    scanf ("%s", p);
    appear(p);
    return 0;
    
}
void appear(char* arr)
{
    int i=0;
    while (i<strlen(arr))
    {
        int nr=0;
        for (int j=0; j<i; j++)
        {
            if (arr[i]==arr[j])
            {
                nr=1;
            }
        }
        if (nr==1)
        {
            strcpy(arr+i, arr+i+1);
        }
        i++;
    }
    printf ("The array that remains is: %s\n", arr);
}

/*
 Horvath Daiana, E_2012
 This program reads from the keyboard two arrays of characters and displays the total number of individual characters (the number of characters that are in the first array and do not exist in the second one + the number of characters that are in the second array and do not exist in the first one). Use pointers for accessing the arrays of elements.
 */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
void calc(char* a, char* b);
int main ()
{
    char x[101], y[101];
    printf("The first array is:");
    scanf("\n%s",x);
    printf("The second array is:");
    scanf("\n%s",y);
    calc(x, y);
    return 0;
}
void calc(char* a, char*b)
{
    int n=0;
    bool ok;
    for (int i=0; i<strlen(a); i++)
    {
        ok=true;
        for (int j=0; j<strlen(b)&&ok; j++)
        {
            if (*(a+i)==*(b+j))
            {
                ok=false;
            }
        }
            if (ok)
            {
                n++;
            }
        
    }
    printf ("The number of the individual characters on the first array is %d, on the second is %d, and the total is %d\n", n, n, n+n) ;
}

/*
 Horvath Daiana, E_2012
 Generate an array of pointers to constant strings using the strdup() method or a specific method. Display the even entries of the array.
 */
#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include<cstring>
#include<stdlib.h>
int main()
{
    char **s1;
    int  i;
    const char *s[] = {"First ", "Second", "Third", "Fourth"};
    s1=(char**)malloc(5*sizeof(char));
    for(i=0; i<4; i++)
    {
       *(s1+i)=strdup(*(s+i));
    }
    printf("The even entries are:\n ");
    for (i=0; i<4; i+=2)
    {
        printf("%s\n", *(s1+i));
    }
    free (s1);
    return 0;
}

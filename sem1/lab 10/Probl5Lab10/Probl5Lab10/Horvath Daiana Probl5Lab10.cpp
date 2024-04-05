/*
 Horvath Daiana, e_2012
 This program defines an array of character pointers. Each location will store one of the following messages:
 - "value too small"
 - "value too big"
 - "correct value"
 The application generates a random number between 0 and 100 and then reads
 repeatedly the keyboard until the user enters the right number. Use the previously defines messages for informing the client about the relation between the auto-generated number and the last value entered from the keyboard.
 */
#define CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char *p[3];
    unsigned t = 0;
    int x,r,ok=0;
    printf ("Enter a number: ");
    *(p+0)=(char*)"value too small";

    *(p+1)=(char*)"value too big";
    
    *(p+2)=(char*)"correct value";

    srand(t);
    x=rand()%100+1;
    
    while(ok==0)
    {
        scanf("%d",&r);
        if(r==x)
        {
            printf("%s \n",*(p+2));
            ok=1;
        }
        if(r<x)
        {
            printf("%s \n",*(p+0));
        }
        if(r>x)
        {
            printf("%s \n", *(p+1));
        }
    }
    return 0;
}

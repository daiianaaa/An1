/*
 Horvath Daiana, E_2012
 Write a program reads n characters arrays from the keyboard and stores them into n dinamically allocated memory zones.
 */
#define _CRT_SECURE_NO_WATNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char **pc,sir[101];
    int n, i,nr;
    printf ("Enter the number of repetition: ");
    scanf("%d",&n);
    pc=(char**)malloc(n*sizeof(char*));
    printf ("Enter the array: ");
    for(i=0; i<n; i++)
    {
        scanf("%s",sir);
        nr=strlen(sir);
        pc[i]=(char*)malloc(nr*sizeof(char));
        strcpy(pc[i],sir);
        printf("%s ",*(pc+i));
    }
    return 0;
}

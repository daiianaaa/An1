/*
 Horvath Daiana, E_2012
 Write a program that displays the integer elements read from a text file. The filename is entered from the keyboard. The file has to be created in another program or function.
 */
#define _CRT_SECURE_NO_WARNINGS
#include<cstdio>
#include<stdlib.h>
#include<string.h>
void create_file(FILE **fp, char s[]);
int main()
{
    FILE *fp;
    char sir[31];
    printf ("Enter the name of the file: ");
    scanf("%s",sir);
    create_file(&fp,sir);
    int n,i,x;
    printf("Enter the number of values: ");
    scanf("%d",&n);
    printf("Give %d integer numbers: ",n);
    for(i=1; i<=n; i++)
    {
        scanf("%d",&x);
        fprintf(fp,"%d ",x);
    }
    fclose(fp);
    return 0;
}
void create_file(FILE **fp, char s[])

{
    *fp=fopen(s,"w");
    if (*fp==NULL)
    {
        printf ("The file doesn't exist!");
    }
}

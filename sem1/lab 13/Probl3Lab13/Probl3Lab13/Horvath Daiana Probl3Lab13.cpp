/*
 Horvath Daiana, E_2012
 Write a program that reads from the keyboard n integer values and then stores them into a text file. The filename has to be read from the keyboard. Then read the numbers from file, calculate their average value, display-it and append-it to the end of the text-file.
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
    int n,i,x[100], sum=0;
    printf ("Enter the name of the file: ");
    scanf("%s",sir);
    create_file(&fp,sir);
    printf("Enter the number of values: ");
    scanf("%d",&n);
    printf("Give %d integer numbers: ",n);
    for(i=0; i<n; i++)
    {
        scanf("%d",(x+i));
        fprintf(fp,"%d ",x[i]);
    }
    fclose(fp);
    fp=fopen(sir, "a");
    for (i=0; i<n; i++)
    {
        sum+=x[i];
    }
    fprintf(fp, "average val: %d", sum/n);
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


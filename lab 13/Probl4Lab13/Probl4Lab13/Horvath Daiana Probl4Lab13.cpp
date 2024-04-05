/*
 Horvath Daiana, E_2012
 Write a program that reads from the keyboard a single character and an integer value n. Generate a text file that will contain n lines and on each line write the character n times, n being read from the keyboard.
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
    int n, i,j;
    char c;
    printf ("Enter the name of the file: ");
    scanf("%s",sir);
    create_file(&fp,sir);
    printf ("Enter the dimension: ");
    scanf("%d", &n);
    getchar();
    printf ("Enter the character: ");
    scanf("%c", &c);
    for (i=0; i<n; i++)
    {
        fprintf (fp,"%c", c);
        for (j=0; j<n; j++)
        {
            fprintf (fp, "%c", c);
        }
        fprintf(fp, "\n");
        
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

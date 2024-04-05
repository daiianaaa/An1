/*
 Horvath Daiana, E_2012
 Develop a C/C++ application that will display (line by line) the content of a previously created text file or one created by program.
 */
#define _CRT_SECURE_NO_WARNINGS
#include<cstdio>
#include<stdlib.h>
#include<string.h>
void create_file(FILE **fp, char s[]);
int main()
{
    FILE *fp;
    char sir[31], c;
    fp=fopen("nwcl", "r");
    if (fp==NULL)
    {
        printf ("The file doesn't exist!");
    }
    while(!feof(fp))
    {
       if( fscanf (fp, "%[^\n]s", sir)>0)
       {
        
        printf ("%s\n", sir);
       }
        else
        {
            printf ("\n");
        }
        c=fgetc(fp);
    }
    fclose(fp);
    return 0;
}


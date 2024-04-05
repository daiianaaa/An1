/*
 Horvath Daiana, E_2012
 Write a program that reads from a text file 10 integer numbers.
 The file has to be previously created using a different code or by using the operating system’s facilities. Write the functions that:
 - order the integers array in ascending/descending order and displays the result
 - count the number of even numbers in the array and display the result
 */
#define _CRT_SECURE_NO_WARNINGS
#include<cstdio>
#include<stdlib.h>
#include<string.h>
void create_file(FILE **fp, char s[]);
int cmpAsc (const void * a, const void * b);
int cmpDesc (const void * a, const void * b);

int main()
{
    FILE *fp;
    char sir[31];
    int x[100], i, nr=0;
    printf ("Enter the name of the file: ");
    scanf("%s",sir);
    create_file(&fp,sir);
    printf("Give 10 integer numbers: ");
    for(i=0; i<10; i++)
    {
        scanf("%d",(x+i));
        fprintf(fp,"%d ",x[i]);
    }
    fprintf (fp,"\n We order the integer values ascending:\n ");
    qsort(x, 10, sizeof(int), cmpAsc);
    for(i=0; i<10; i++)
    {
        fprintf(fp,"%d ",x[i]);
    }
    
    fprintf (fp, "\nWe order the integer values descending: \n");
    qsort(x, 10, sizeof(int), cmpDesc);
    for(i=0; i<=10; i++)
    {
        fprintf(fp,"%d ",x[i]);
    }
    for (i=0; i<10; i++)
    {
        if (x[i]%2==0)
        {
            nr++;
        }
    }
    fprintf(fp, "\n The number of even numbers is: %d\n", nr);
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
int cmpAsc (const void * a, const void * b)
{
   return ( *(int*)a - *(int*)b );
}
int cmpDesc (const void * a, const void * b)
{
   return ( *(int*)b - *(int*)a);
}


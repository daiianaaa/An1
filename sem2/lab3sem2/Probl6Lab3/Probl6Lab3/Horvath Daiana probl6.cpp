/*
 Horvath Daiana, E_2012
 Using the "divide et impera" programming method, read the integer values generated in a random mode previously stored into file. Determine the minimum and maximum values from the array. Update the original file by adding the determined values.
 */
#define _CRT_SECURE_NO_WARNINGS
#include<cstdio>
#include<time.h>
#include<stdlib.h>

int min(int*, int, int);
int max(int*, int, int);
void create_file(FILE **fp, char s[]);

int main()
{
    FILE* fp;
    int n, v[100], *p, i;
    char name[100];
    p=&v[0];
    srand(time(0));
    printf ("Enter the dimension of the array: ");
    scanf ("%d", &n);
    for (i=0; i<n; i++)
    {
        *(p+i)=rand()%100;
    }
    printf ("Enter the name of the file: ");
    scanf ("%s", name);
    create_file(&fp, name);
    fprintf(fp, "The array is: \n");
    for (int i = 0; i < n; i++)
    {
        fprintf(fp, "%d ", *(v + i));
    }
    fprintf(fp, "\nThe maximum value is %d", max(p, 0, n));
    fprintf(fp, "\nThe minimum value is %d", min(p, 0, n));
    fclose(fp);
    
}
void create_file(FILE **fp, char s[])
{
    *fp=fopen(s,"w");
    if (*fp==NULL)
    {
        printf ("The file doesn't exist!");
    }
   
}
int min(int* x, int p, int l)
{
        int a, b;
        if (l == 1)
                return *(x + p);
        else
        {
                a = min(x, p, l / 2);
                b = min(x, l / 2 + p, l / 2 + l % 2);
                if (a < b)
                        return a;
                else
                        return b;
        }
}
int max(int* x, int p, int l)
{
        int a, b;
        if (l == 1)
                return *(x + p);
        else
        {
                a = max(x, p, l / 2);
                b = max(x, l / 2 + p, l / 2 + l % 2);
                if (a > b)
                        return a;
                else
                        return b;
        }
}

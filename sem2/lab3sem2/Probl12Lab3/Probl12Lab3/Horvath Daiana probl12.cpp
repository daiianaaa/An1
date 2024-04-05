/*
Horvath Daiana, E_2012
Using a file that contains real ordered numbers, look for a value read from the keyboard.
The searching method will rely on an iterative binary search, the recursive algorithm and the bsearch() library function.
Display the values read from the file, the value to be searched and the position it was found (if any).
*/
#include <cstdio>
#include <stdlib.h>
void create_file(FILE **fp, char s[]);
int search(int* p, int inc, int sfr, int val);
int main()
{
    FILE *fp;
    int x[100], n, i, y;
    char name[100];
    printf ("Enter the name of the file: ");
    scanf ("%s", name);
    create_file(&fp, name);
    fscanf(fp, "%d", &n);
    for (i = 0; i < n; i++)
    {
        fscanf(fp, "%d", &x[i]);
    }
    for (i = 0; i < n; i++)
    {
        printf ("x[%d]=", i);
    }
    printf("\n Give a value to be searched in the array: ");
    scanf ("%d", &y);
    if (search(x, 0, n, y) == 0)
    {
        printf("\n\nThe element is not in the array");
    }
    else
    {
      printf ("\nThe element was found in the array's position %d ", search(x, 0, n, y)+1);
    }
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
int search(int* p, int inc, int sfr, int val)
{
        int mij;
        mij = (inc + sfr) / 2;
        if (p[mij] == val)
                return mij;
        if (inc <= sfr) {
                if (p[mij] > val)
                        sfr = mij - 1;
                else
                        inc = mij + 1;
                return search(p, inc, sfr, val);
        }
        return -1;
}


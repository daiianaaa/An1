/*
 Horvath Daiana, E_2012
 Probl1. This program reads from the keyboard two one dimensional arrays of integers and displays the scalar product of the two arrays. Use a function that reads the elements from the keyboard and another function that calculates the scalar product, using pointers in both functions. Reading and displaying the arrays’ elements should be done in the main function.
 */
#define _CRT_SECURE_NO_WARNINGS
#include<cstdio>
#define DIM 100
void read(int *v, int n);
int calcProd(int *a, int *b, int n);
int main()
{
    int dim1=0, dim2=0;
    int v[dim1], x[dim2];
    printf ("Enter the dimension of the first array:");
    scanf ("%d", &dim1);
    printf ("Enter the dimension of the second array:");
    scanf ("%d", &dim2);
    read(v, dim1);
    read(x, dim2);
    if (dim1>DIM && dim2>DIM)
    {
        printf ("The dimension is too big!");
        return 1;
    }
    if (dim1==dim2)
    {
    printf ("The scalar product of the two arrays is: %d\n", calcProd(v, x, dim1));
    }
    else
    {
        printf("The numbers of elements is not the same\n");
    }
    return 0;
    
    
}
void read(int *v, int n )
{
    int i;
    for (i=0; i<n; i++)
    {
        int x;
        printf ("v[%d]=", i);
        scanf ("%d", &x);
        *(v+i)=x;
    }
}
int calcProd(int *a, int *b, int n)
{
    int p=0, i;
    for (i=0; i<n; i++)
    {
        p+=*(a+i)**(b+i);
        
    }
    return p;
}
/*
 Horvath Daiana, E_2012
 Probl2. This program generates 20 random numbers, each smaller than 50 (use srand(), rand() and % operator). Write a function that eliminates the odd elements from the one dimensional array (using pointers). Display both the initial and the final array in the main function.
 */
#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <stdlib.h>
#include <time.h>
void display(int* v, int n);
void elimin(int* v, int &n);
int main()
{
    int v[20], n=20;
    srand(time(0));
    for (int i=0; i<n; i++)
    {
        *(v+i)=rand()%50;
    }
    display(v, n);
    elimin(v, n);
    display(v, n);
    return 0;
}
void display(int* v, int n)
{
    int i;
    printf ("\nThe array is: ");
    for (i=0; i<n; i++)
    {
        printf ("%d ", *(v+i));
    }
}
void elimin(int* v, int &n)
{
int i=0, j;
while (i<n)
{
    if(*(v+i)%2!=0)
    {
        for(j = i ; j < n - 1; j ++)
        {
            *(v+j) = *(v+j+1);
        }
       --n;
    } else i++;
}
}
/*
 Horvath Daiana, E_2012
 Probl3. This program fills-up a float-type, one-dimensional array with values read from the keyboard. Write a function that copies into another array the values greater than the average of all elements from the
 array, by using pointers. Both arrays should be displayed in the main() function.

 */
#define _CRT_SECURE_NO_WARNINGS
#include<cstdio>

void read(float* a, int n);
void write(float* a, int n);
void copy(float* a,int n);

#define DIM 100

int main()
{
    int dim = 0;
    float x[dim];
    printf ("Enter the dimension: ");
    scanf ("%d", &dim);
    if (dim> DIM)
    {
        printf ("The dimension is too big");
    }
  
    read(x,dim);
    write(x,dim);
    copy(x,dim);
    return 0;
}


void read(float* a, int n)
{
    for (int i = 0; i < n; i++)
    {
        float x;
        printf("a[%d]= ", i);
        scanf("%f", &x);
        *(a+i)=x;
    }
}

void write(float* a, int n)
{
    printf("Your array is:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%.2f ", *(a + i));
    }
}
void copy(float* a,int n)
{
    int j=0;
    float s=0;
    float b[DIM];
    for (int i = 0; i < n; i++)
    {
            s+= *(a + i);
    }

    for (int i = 0; i < n; i++)
    {
            if (*(a+i)>=s/n)
            {
                    *(b+j) = *(a+i);
                    j++;
            }
    }

    for (int i = 0; i < j; i++)
    {
        printf("The elements of the last array are: %.2f ", *(b+i));
    }
}
/*
 Horvath Daiana, E_2012
 Probl4. This program reads from the keyboard an array of characters and displays the string obtained by eliminating the characters that appear more than once in the original array using pointers.
 */
#define _CRT_SECURE_NO_WARNINGS
#include<cstdio>
#include<string.h>
#define DIM 100
void appear(char*);
int main()
{
    char s[DIM];
    char* p;
    p=s;
    printf ("Enter the array: ");
    scanf ("%s", p);
    appear(p);
    return 0;
    
}
void appear(char* arr)
{
    int i=0;
    while (i<strlen(arr))
    {
        int nr=0;
        for (int j=0; j<i; j++)
        {
            if (arr[i]==arr[j])
            {
                nr=1;
            }
        }
        if (nr==1)
        {
            strcpy(arr+i, arr+i+1);
        }
        i++;
    }
    printf ("The array that remains is: %s\n", arr);
}
/*
 Horvath Daiana, E_2012
 Probl5. This program reads from the keyboard two arrays of characters and displays the total number of individual characters (the number of characters that are in the first array and do not exist in the second one + the number of characters that are in the second array and do not exist in the first one). Use pointers for accessing the arrays of elements.
 */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
void calc(char* a, char* b);
int main ()
{
    char x[101], y[101];
    printf("The first array is:");
    scanf("\n%s",x);
    printf("The second array is:");
    scanf("\n%s",y);
    calc(x, y);
    return 0;
}
void calc(char* a, char*b)
{
    int n=0;
    bool ok;
    for (int i=0; i<strlen(a); i++)
    {
        ok=true;
        for (int j=0; j<strlen(b)&&ok; j++)
        {
            if (*(a+i)==*(b+j))
            {
                ok=false;
            }
        }
            if (ok)
            {
                n++;
            }
        
    }
    printf ("The number of the individual characters on the first array is %d, on the second is %d, and the total is %d\n", n, n, n+n) ;
}
/*
 Horvath Daiana, E_2012
 Probl5. This program reads from the keyboard two arrays of characters and displays the total number of individual characters (the number of characters that are in the first array and do not exist in the second one + the number of characters that are in the second array and do not exist in the first one). Use pointers for accessing the arrays of elements.
 */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
void calc(char* a, char* b);
int main ()
{
    char x[101], y[101];
    printf("The first array is:");
    scanf("\n%s",x);
    printf("The second array is:");
    scanf("\n%s",y);
    calc(x, y);
    return 0;
}
void calc(char* a, char*b)
{
    int n=0;
    bool ok;
    for (int i=0; i<strlen(a); i++)
    {
        ok=true;
        for (int j=0; j<strlen(b)&&ok; j++)
        {
            if (*(a+i)==*(b+j))
            {
                ok=false;
            }
        }
            if (ok)
            {
                n++;
            }
        
    }
    printf ("The number of the individual characters on the first array is %d, on the second is %d, and the total is %d\n", n, n, n+n) ;
}
/*
 Horvath Daiana, E_2012
 Probl6. This program reads from the keyboard an array of characters. Write a function that displays the characters that are in the array and the number of times they appear. Use pointers.
 */
#define CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <string.h>

#define DIM 100

void calc(char* );

int main ()
{
    char s[DIM];
    char* p;
    p=s;
    printf ("Enter the array: ");
    scanf ("%s", p);
    calc(p);
  return 0;
}
void calc (char* arr)
{
    int i,j;
    for (i=0; i<strlen(arr); i++)
    {
        int nr=0;
        for (j=i; j<strlen(arr); j++)
        {
            if (*(arr+i)==*(arr+j))
            {
                nr++;
                if (nr>1)
                {
                    *(arr+j)=' ';
                }
            }
        }
    if (*(arr+i)!=' ')
    {
        printf ("The character %c appears %d times\n", *(arr+i), nr);
    }
    }
}


/*
 Horvath Daiana, E_2012
 This program fills-up a float-type, one-dimensional array with values read from the keyboard. Write a
 function that copies into another array the values greater than the average of all elements from the
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

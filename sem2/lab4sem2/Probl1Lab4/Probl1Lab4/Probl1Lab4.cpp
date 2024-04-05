/*
 Horvath Daiana, E_2012
 Implement the Bubble-Sort method using a flag indicator and optimize the inner loop. Write the function that orders an array of integer values read from the keyboard. Display the original and the sorted arrays.
 */
#define _CRT_SECURE_NO_WARNINGS
#include<cstdio>
#define MAX 30
void bubble_sort(int v[], int n);
void read(int v[], int n);
void write(int v[], int n);
int main()
{
    int n;
    int v[MAX];
    printf ("Enter the number of elements: ");
    scanf ("%d", &n);
    if (n>MAX)
    {
        printf ("The value is too big!");
        return 1;
    }
    read(v, n);
    printf ("The initial array is: \n");
    write(v, n);
    printf ("\nThe sorted array is: \n");
    bubble_sort(v, n);
    write(v, n);
    return 0;
}
void read(int v[], int n)
{
    for (int i=0; i<n; i++)
    {
        printf ("v[%d]=", i);
        int x;
        scanf ("%d", &x);
        v[i]=x;
    }

}
void write(int v[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", v[i]);
    }
}
void bubble_sort(int v[],int n)
{
    int  i,aux,ok;
    do{
        ok=1;
        for(i=0;i<n-1;i++)
        {
            if(v[i]>v[i+1])
            {
                aux=v[i];
                v[i]=v[i+1];
                v[i+1]=aux;
                ok=0;
            }
        }
    }while(ok==0);
}

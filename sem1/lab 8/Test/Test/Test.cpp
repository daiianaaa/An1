/*
 Horvath Daiana & Uta Vlad
 This program reads from the keyboard an n value (n <= 10) and in a function then read n double values, which will be stored in a one-dimensional array of double type. Display the elements of the array with a function. Write another function, which will store in a one- dimensional array of type int the values obtained by rounding the values in the first array, up or down, as the case may be. Display the resulting array in the main () function.

 
 */
#define _CRT_SECURE_NO_WARNINGS
#include<cstdio>
void citire(double *, int);
void rezolvare(double*, int*, int);
void afisare( int*, int);
int main()
{
    int n = 0, v[20];
    double d[20];
    bool ok=1;
    while (ok==1)
    {
        printf ("Enter a value for n: ");
        scanf ("%d", &n);
        if (n>=20)
        {
            printf ("The value is too big, n must be smaller than 20: \n");
        }
        else ok=0;
    }
    citire(d, n);
    rezolvare(d, v, n);
    afisare(v, n);
    return 0;
}
void citire(double d[], int n)
{
    for (int i=0; i<n; i++)
    {
        printf ("d[%d]=", i);
        double x;
        scanf ("%lf", &x);
        d[i]=x;
    }
}

void rezolvare(double d[], int v[], int n)//in vectorul v vor fi valorile rotunjite din d
{
    for (int i=0; i<n; i++)
    {
        double r; //r=rotunjire
        r=d[i]-(int)d[i];
        if (r>=0.5)
        {
            v[i]=(int)d[i]+1;
        }
        else
        {
            v[i]=(int)d[i];
        }
    }
}
void afisare(int v[], int n)
{
    printf ("\n");
    for (int i=0; i<n; i++)
    {
        printf ("%d ", v[i]);
    }
}

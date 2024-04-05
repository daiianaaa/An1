/*
 Horvath Daiana, E_2012
 Define an inline function min() that determines and display the minimum among 2 and other among 3 numbers introduced from the KB. Consider overloading functions.
 */
#define _CRT_SECURE_NO_WARNINGS
#include<cstdio>
inline int min1(int a, int b);
inline int min2(int x, int y, int z);
int main() {
    int a, b, c, min_1, min_2;
    printf("Introduceti 3 valori intregi: ");
    scanf("%d %d %d", &a, &b, &c);
    min_1 = min1(a, b);
    printf("Minimul dintre primele 2 este= %d\n", min_1 );
    min_2=min2(a, b, c);
    printf ("Minimul dintre cele 3 numere este= %d\n", min_2);
    return 0;
}
inline int min1(int a, int b)
{
    if (a < b) return a;
    return b;
}
inline int min2(int x, int y, int z)
{
    int min=x;
    if (y<min)
    {
        min=y;
    }
    if (z<min)
    {
        min=z;
    }
    return min;
}

/*
 Horvath Daiana, E_2012
 Define a macro function MAX that determines and display the maximum among 2 and other among 3 numbers introduced from the KB. Use different options (conditional operator, if statement, respectively).
 */
#define CRT_SECURE_NO_WARNINGS
#include<cstdio>
#include<iostream>
using namespace std;
#define MAX1(a,b)((a)>(b)?(a):(b))
#define MAX2(a,b,c, max) { if(a>b) if(c>a) max=c;\
else max=a;\
else if(c>b) max=c;\
else max=b;\
}
int main()
{
    int a, b, c, max;
    printf ("Enter three integer numbers: ");
    scanf ("%d %d %d", &a, &b, &c);
    printf ("Max dintre 2 valori: = %d\n", MAX1(a,b));
    MAX2(a,b,c, max);
    printf ("Max dintre 3 valori: = %d\n", max);
    return 0;
    
}

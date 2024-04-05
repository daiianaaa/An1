/*
 Horvath Daiana, E_2012
 This program writes a program that displays the value of a 3-rd degree polynom, calculated in a certain point x.
 */
#define _CRT_SECURE_NO_WARNINGS
#include<cstdio>
int readNumber();
float calcPol(int ,int ,int, int, int);
int main()
{
    int a,b,c,d,x;
    x=readNumber();
    printf("The coeficient of a is: \n");
    scanf ("%d", &a);
    printf("The coeficient of b is: \n");
    scanf ("%d", &b);
    printf("The coeficient of c is: \n");
    scanf ("%d", &c);
    printf("The coeficient of d is: \n");
    scanf ("%d", &d);
    printf ("The value of the polynom is: %.3f \n", calcPol(a,b,c,d,x));
    return 0;
    
    
}
int readNumber()
{
    float nr;
    printf("Enter a value for x: ");
    scanf("%f", &nr);
    return nr;
    
}
float calcPol(int a, int b, int c, int d, int x)
{
    int pol;
    pol=a*x*x*x+b*x*x+c*x+d;
    return pol;
}


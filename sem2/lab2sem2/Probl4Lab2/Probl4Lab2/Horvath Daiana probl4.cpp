/*
 Horvath Daiana, E_2012
 Se consideră recursivitatea (seria de medii arimetico-geometrice a lui Gauss):
 an=(an-1+bn-1)/2 şi bn=sqrt(an-1*bn-1), determinaţi an şi bn, pentru n, a0, b0 introduse de la tastatură.
 */
#define _CRT_SECURE_NO_WARNINGS
#include<cstdio>
#include<math.h>
float an_calc(float a, int b, int n);
float bn_calc(float b, int a, int n);

int main()
{
    int  n;
    float a, b;
    
    printf ("Enter the value for n: ");
    scanf ("%d", &n);
    
    printf ("Enter the value for a0: ");
    scanf ("%f", &a);
    
    printf ("Enter the value for b0 : ");
    scanf ("%f", &b);
    
    printf ("The value of an is: %.2f\n", an_calc(a, b, n));
    printf ("The value of bn is: %.2f\n", bn_calc(b, a, n));
}
 float an_calc(float a, int b, int n)
{
     if (n!=0)
     {
         return an_calc((a+b)/2, b, n-1);
     }
     else
         return a;
 }

float bn_calc(float b, int a, int n)
{
    if (n!=0)
    {
        return bn_calc(a, sqrt(a*b), n-1);
    }
    else
        return a;
}

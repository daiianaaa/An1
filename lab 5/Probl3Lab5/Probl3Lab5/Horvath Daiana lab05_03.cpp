/*
 Horvath Daiana, E_2012
 This program reads from the standard input 2 integer values that represent the catheters of a rectangular triangle and determines the hypotenuse and the perimeter of the triangle.
 */
#define _CRT_SECURE_NO_WARNINGS
#include<cstdio>
#include<cmath>
int readCat();
float detHyp(int, int);
int detPer(int, int, int);
int main()
{
    int c1,c2,h;
    c1=readCat();
    c2=readCat();
    h=detHyp(c1, c2);
    scanf ("The two catheters of the triangle are: %d, %d\n", &c1, &c2);
    printf ("The hypotenuse of the triangle is: %.2f\n", detHyp(c1, c2));
    printf ("The perimeter of the triangle is: %d\n", detPer(c1, c2, h));
    return 0;
    
}
int readCat()
{
    float nr;
    printf("Enter a number: ");
    scanf("%f", &nr);
    return nr;
    
}
float detHyp(int a, int b)
{
    int h;
    h=sqrt(a*a+b*b);
    return h;
}
int detPer(int c, int d, int e)
{
    int p;
    p=c+d+e;
    return p;
}


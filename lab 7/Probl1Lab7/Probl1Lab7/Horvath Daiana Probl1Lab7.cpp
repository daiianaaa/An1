/*
 Horvath Daiana, E_2012
 This program reads from the keyboard 3 integer numbers (a, b and c) and determines the area of the rectangle that has the sides equal to a and b and verifies if the rectangle’s diagonal is equal to c.
 */
#define _CRT_SECURES_NO_WARNINGS
#include<cstdio>
int readNumber();
int areaCalc(int, int);
int main()
{
    int a, b, c;
    a=readNumber();
    b=readNumber();
    c=readNumber();
    printf ("The area of the triangle is: %d\n ", areaCalc(a,b));
    ((a*a+b*b)==c) ? printf ("C is the diagonal of the rectangle\n") : printf("C is not the diagonal of the rectancgle\n");
    return 0;

    
}
int readNumber()
{
    int nr;
    printf("Enter a number: ");
    scanf("%d", &nr);
    return nr;

}
int areaCalc(int a, int b)
{
    int s;
    s=a*b;
    return s;
}


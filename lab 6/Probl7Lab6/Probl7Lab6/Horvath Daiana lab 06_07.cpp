/*
 Horvath Daiana, E_2012
 This program reads 2 integer numbers and displays the results obtained by applying the main arithmetic operations (+, -, *, /) upon them. Cast the results into integer values, whithout using any specific rounding functions. Display the minimum input value using the conditional operator.
 */
#define _CRT_SECURE_NO_WARNINGS
#include<cstdio>
int readNumber();
int main()
{
    int a, b;
    a=readNumber();
    b=readNumber();
    printf ("The sum of the numbers is: %.2f\n", (float)a+b);
    printf ("The difference of the numbers is: %.2f\n", (float)a-b);
    printf ("The result of the multiplications of the numbers is: %.2f\n", (float)a*b);
    printf ("The result of the division is: %.2f\n", (float)a/b);
    (a<b) ? printf ("The minimum value is: %d/n", a) : printf ("The minimum value is: %d\n", b);
    return 0;
    
}
int readNumber()
{
    int nr;
    printf("Enter a number: ");
    scanf("%d", &nr);
    return nr;
}

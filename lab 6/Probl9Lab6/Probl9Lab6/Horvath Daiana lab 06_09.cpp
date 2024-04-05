/*
 Horvath Daiana, E_2012
 This program reads 2 integer values from the keyboard. If they are equal, determine the area of a circle that has the radius equal with the read value. If the values are not equal, determine the area of the rectangle that has as sides the read values.
 */
#define _CRT_SECURE_NO_WARNINGS
#define M_PI
#include<cstdio>
#include<cmath>
int readNumber();
int main()
{
    int x,y;
    x=readNumber();
    y=readNumber();
    (x==y) ? printf("\nThe area of the triangle is: %.2f ", M_PI*x*x) : printf("The area of the rectangle is:%d \n", x * y);
    return 0;
    
    
}
int readNumber()
{
    float nr;
    printf("Enter a number: ");
    scanf("%f", &nr);
    return nr;
}

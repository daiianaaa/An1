/*
 Horvath Daiana, E_2012
 This program implements the 1-st and 2-nd problems in a single program.
 */
#define _CRT_SECURE_NO_WARNINGS
#include<cstdio>
int readNumber();
float calcSeries(float, float);
float calcParallel(float, float);
int main()
{
    int c1, c2, r1, r2;
    c1=readNumber();
    c2=readNumber();
    r1=readNumber();
    r2=readNumber();
    //the values for the resistance
    printf ("The series resistance is: %.4f\n", calcSeries(r1, r2));
    printf("The parallel resistance is: %.4f\n", calcParallel(r1, r2));
    //the values for the capacitance
    printf ("The series capacitance is: %.4f\n", calcParallel(c1, c2));
    printf("The parallel capacitance is: %.4f\n", calcSeries(c1, c2));
    return 0;
    
}
int readNumber()
{
    float nr;
    printf("Enter a number: ");
    scanf("%f", &nr);
    return nr;
}
float calcSeries(float a, float b)
{
    return a+b;
}
float calcParallel(float c, float d)
{
    return 1/c+1/d;
}

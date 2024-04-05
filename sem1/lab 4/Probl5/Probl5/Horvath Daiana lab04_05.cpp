/*
 Horvath Daiana, E_2012
 This program defines 3 integer value and calculates and displays their weighted sum, the weights being
 represented as positive values smaller than 1 that add up to 1.
 */
#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
int readNumber();
float sumPonder(int, int, int);
int main()
{
    int nr1, nr2, nr3;
    nr1=readNumber();
    nr2=readNumber();
    nr3=readNumber();
    scanf ("Enter three integer numbers: %d, %d, %d\n", &nr1, &nr2, &nr3);
    printf ("The weighted sum of the numbers is: %f\n", sumPonder(nr1, nr2, nr3));
    
}
int readNumber()
{
    float nr;
    printf("Enter a number: ");
    scanf("%f", &nr);
    return nr;
    
}
float sumPonder(int a, int b, int c)
{
    float sum;
    sum=0.2*a+0.5*b+0.3*c;
    return sum;
    
}

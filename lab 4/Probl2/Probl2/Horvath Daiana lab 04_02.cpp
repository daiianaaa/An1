/*

 Horvath Daiana, E_2012
 This program determines the geometric average of 2 integer numbers.
 
 */

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include<cmath>
using namespace std;
int readNumber();
float mediaGeom(int, int);
int main()
{
    int a,b;
    a=readNumber();
    b=readNumber();
    printf("You entered %d, %d\n", a, b);
    printf("The geometric average of the numbers is: %f\n", mediaGeom(a,b));
    return 0;
}
int readNumber()
{
    int nr;
    printf("Enter the numbers: ");
    scanf ("%d", &nr);
    return nr;
    
}
float mediaGeom(int a, int b)
{
    float m;
    m=sqrt(a*b);
    return m;

}


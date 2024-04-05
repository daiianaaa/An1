/*
 Horvath Daiana, E_2012
 This program writes a program that reads from the keyboard 3 values representing the lengths of a triangle’s sides and than displays the triangle’s area.
 */
#define _CRT_SECURE_NO_WARNINGS
#include<cstdio>
#include<cmath>
int readLat();
float areaTr(int, int, int);
int main()
{
    int a,b,c;
    a=readLat();
    b=readLat();
    c=readLat();
    (a<b+c && b<a+c && c<a+b) ? (printf ("\nThe area of the triangle is: %.3f\n", areaTr(a,b,c))) : printf ("The sides do not match a triangle\n");
    
}
int readLat()
{
    int nr;
    printf ("Enter the value for the side:");
    scanf ("%d", &nr);
    return nr;
}
float areaTr(int a, int b, int c)
{
    float p;
    p=(a+b+c)/2;
    return sqrt((float)(p*(p-a)*(p-b)*(p-c)));
}

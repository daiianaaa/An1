/*
 Horvath Daiana, E_2012
 This program reads from the standard input 2 values for 2 capacitors identified with the C1 and C2 variables. The program calls 2 functions that calculate the series and parallel equivalent capacity. After that, it displays the results left aligned and with 4 digits precision in the fractional part.
 */
#define _CRT_SECURE_NO_WARNINGS
#include<cstdio>
int readCap();
float seriesCap(float, float);
float parallelCap(float, float);

int main()
{
    int c1, c2;
    c1=readCap();
    c2=readCap();
    printf("The values of the two capacitors are: %d, %d\n", c1, c2);
    printf ("The series equivalent capacity is: %-.4f\n", seriesCap(c1, c2));
    printf ("The parallel equivalent capacity is: %-.4f\n", parallelCap(c1, c2));
    return 0;
    
    
}
int readCap()
{
    float nr;
    printf("Enter a capacitance: ");
    scanf("%f", &nr);
    return nr;
    
}
float seriesCap(float a, float b)
{
    float s,cs;
    s=(float)1/a+1/b;
    cs=1/s;
    return cs;
}
float parallelCap(float a, float b)
{
    float p;
    p=(float)a+b;
    return p;
}


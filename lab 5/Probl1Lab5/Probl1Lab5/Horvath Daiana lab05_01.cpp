/*
 Horvath Daiana, E_2012
 This program reads from the standard input 2 values for 2 resistors identified with the R1 and R2 variables and it calls 2 functions that calculate the series and parallel equivalent resistance. After that, it displays the results right aligned and with 3 digits precision in the fractional part.
 */
#define _CRT_SECURE_NO_WARNINGS
#include<cstdio>
int readRes();
float seriesRes(float, float);
float parallelRes(float, float);

int main()
{
    int r1, r2;
    r1=readRes();
    r2=readRes();
    printf("The values of the two resistors are: %d, %d\n", r1, r2);
    printf ("The series equivalent resistance is: %30.3f\n", seriesRes(r1, r2));
    printf ("The parallel equivalent resistance is: %28.3f\n", parallelRes(r1, r2));
    return 0;
    
}
int readRes()
{
    float nr;
    printf("Enter a resistance: ");
    scanf("%f", &nr);
    return nr;
    
}
float parallelRes(float a, float b)
{
    float p,pr;
    p=(float)1/a+1/b;
    pr=1/p;
    return pr;
}
float seriesRes(float a, float b)
{
    float s;
    s=(float)a+b;
    return s;
}



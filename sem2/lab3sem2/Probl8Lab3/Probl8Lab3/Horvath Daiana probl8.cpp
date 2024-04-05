/*
 Horvath Daiana, E_2012
 Calculate ∫ab 1/(1+x2)dx, using the trapezes method. The height of each considered trapeze must be smaller than ε=0.0001. The area of a trapezes defined by the points (a,0), (b,0), (a,f(a)) and (b,f(b)) is (b- a)*(f(a)+f(b))/2, where f(x)=1/(1+x2). The float values of a and b are read from the keyboard (a must be smaller or equal to b). Use the „divide et impera” method.
 */
#define _CRT_SECURE_NO_WARNINGS
#include<cstdio>
#include<algorithm>
double function( double x);
double calc(double a, double b, double(*f)(double));
#define ε 0.0001
int main()
{
    double a, b, integral;
    printf ("The below limit is: ");
    scanf ("%lf", &a);
    printf ("The upper limit is: ");
    scanf ("%lf", &b);
    if (b<a)
    {
        std::swap(a,b);
    }
    integral=calc(a, b, &function);
    printf ("The value of the integral is: %.2f\n",integral);
    return 0;
    
}
double function(double x)
{
    return 1/ (1 + x*x);
}
double calc(double a, double b, double(*f)(double))
{
    if ((b - a) < ε)
    {
        return (b - a) * ((*f)(a) + (*f)(b)) / 2.0;
    }
    else
    {
        double c = (a + b) / 2.0;
        return calc(a, c, f) + calc(c, b, f);
    }
   
}

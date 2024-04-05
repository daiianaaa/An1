#define _CRT_SECURE_NO_WARNINGS

#include<iostream>
#include<stdio.h>

using namespace std;

class Fraction
{
private:
    int a, b;
    int gcd(int a, int b)
    {
        if (a == 0)
            return b;
        return gcd(b % a, a);
    }

    void lowest(int den3, int num3)
    {
        int common_factor = gcd(num3, den3);

        den3 = den3 / common_factor;
        num3 = num3 / common_factor;

        if (num3==0)
        {
            printf(" 0");
        }
        else if (num3==1&&den3==1)
        {
            printf(" 1");
        }
        else if (num3==1)
        {
            printf(" %d", den3);
        }
        else
        {
            printf(" %d/%d", den3, num3);
        }

    }

public:
    Fraction();
    Fraction(int a, int b);
    void setA(int x);
    void setB(int x);
    void simplify();
    void printFraction()
    {
        printf("The fraction is: %d/%d", a, b);
    }
    Fraction add_fraction(Fraction o1, Fraction o2)
    {
        Fraction ot;
        ot.b = gcd(o1.b, o2.b);
        ot.b = (o1.b * o2.b) / ot.b;
        ot.a = (o1.a) * (ot.b / o1.b) + (o2.a) * (ot.b / o2.b);
        lowest(ot.b, ot.a);
        return ot;
    }

    Fraction subtract_fraction(Fraction o1, Fraction o2)
    {
        //(ad-bc)/bd
        Fraction ot;
        ot.b = gcd(o1.b, o2.b);
        ot.b = (o1.b * o2.b) / ot.b;
        ot.a = (o1.a) * (ot.b / o1.b) - (o2.a) * (ot.b / o2.b);
        lowest(ot.b, ot.a);
        return ot;
    }
    Fraction product_fraction(Fraction o1, Fraction o2)
    {
        //(ad-bc)/bd
        Fraction ot;
        ot.b = o1.a * o2.a;
        ot.a = o1.b * o2.b;
        lowest(ot.b, ot.a);
        return ot;
    }
    Fraction div_fraction(Fraction o1, Fraction o2)
    {
        //(ad-bc)/bd
        Fraction ot;
        ot.a = o1.a * o2.a;
        ot.b = o1.b * o2.b;
        lowest(ot.b, ot.a);
        return ot;
    }
    int getA()
    {
        return a;
    }
    int getB()
    {
        return b;
    }
};

Fraction::Fraction()
{
    a = 0;
    b = 1;
}

Fraction::Fraction(int x, int y)
{
    a = x;
    b = y;
}

void Fraction::simplify()
{
    lowest(a,b);
}

void Fraction::setA(int x)
{
    a = x;
}

void Fraction::setB(int x)
{
    b = x;
}


int main()
{
    Fraction obj_res;
    int a, b;
    //FRACTION 1
    printf("Enter the nominator: ");
    scanf("%d", &a);
    printf("Enter the denominator:");
    scanf("%d", &b);
    if (b == 0)
        exit(1);
    Fraction obj1(a, b);

    obj1.printFraction();
    printf("\nThe simplified fraction is: ");
    obj1.simplify();

    //FRACTION 2
    printf("\n\nEnter the nominator: ");
    scanf("%d", &a);
    printf("Enter the denominator:");
    scanf("%d", &b);
    if (b == 0)
        exit(1);
    Fraction obj2(a, b);

    obj2.printFraction();
    printf("\nThe simplified fraction is: ");
    obj2.simplify();

    //OPERATIONS
    printf("\n-----");
    printf("\nThe sum is:");
    obj_res.add_fraction(obj1, obj2);
    printf("\nThe difference is:");
    obj_res.subtract_fraction(obj1, obj2);
    printf("\nThe product is:");
    obj_res.product_fraction(obj1, obj2);
    printf("\nThe division is:");
    obj_res.div_fraction(obj1, obj2);

    return 0;
}

#include<iostream>
#include<math.h>
using namespace std;
class Triangle{
private:
    int a, b, c;
    int isTriang(int a, int b, int c)
    
    {
        if (a+b<c || b+c<a || a+c<b)
            return 0;
        else
            return 1;
    }
public:
    Triangle(int a, int b, int c);
    ~Triangle();
    void setValue(int x, int y, int z)
    {
        if (isTriang(x, y, z))
        {
            a=x;
            b=y;
            c=z;
        }
        else
        {
            cout<<"The numbers introduced does not form a triangle! ";
            exit(0);
        }
    }
    void isRightTriang(int a, int b, int c)
    {
        if((a*a+b*b==c*c)||(a*a+c*c==b*b)||(b*b+c*c==a*a))
        {
            cout<<"The triangle is right.";
        }
        else
        {
            cout<<"The triangle isn't right.";
        }
    }
    float area()
    {
        float s;
        s=(a+b+c)/2;
        return sqrt(s*(s-a)*(s-b)*(s-c));
    }
    int Perimeter()
    {
        return a+b+c;
    }
};
Triangle::Triangle(int a,int b,int c)
{
    setValue(a,b,c);
}

Triangle::~Triangle()
{
}

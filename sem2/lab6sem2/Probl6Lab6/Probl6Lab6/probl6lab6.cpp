/*
 Horvath Daiana, E_2012
 Să se scrie o aplicaţie C++ care implementează o clasă numită Triunghi. Clasa cuprinde atributele private pentru laturile a, b, c, un constructor cu parametrii, metode setter si getter adecvate. Calculați aria și perimetrul prin metode specifice clasei. Scrieți o metodă care să indice dacă triunghiul este dreptunghic sau nu. Definiti o metoda private cu parametrii in clasa care permite verificarea condiției ca laturile să formeze un triunghi. Ea va fi folosita si de
 metodele setter.
 */
#include<ostream>
#include"Triangle.h"
using namespace std;
//Triangle.h
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
};//end
Triangle::Triangle(int a,int b,int c)
{
    setValue(a,b,c);
}

Triangle::~Triangle()
{
}

int main()
{
    int a, b, c;
    cout<<"Enter the values for a, b and c";
    cin>>a>>b>>c;
    Triangle tr;
    cout<<"The area is: "<<tr.area();
    cout<<"\nThe perimeter is: "<<tr.Perimeter();
   // tr.isTriang(a, b, c);

    return 0;
    
}

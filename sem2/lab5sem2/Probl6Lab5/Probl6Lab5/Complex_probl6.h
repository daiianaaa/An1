#include<iostream>
#include<math.h>
using namespace std;

class Complex{
    private:
    int a;
    int b;
    public:
    Complex();
    Complex(int , int );
    void Set_values(int , int);
    void Afisare(void);
    float Modul(void);
    Complex Suma(Complex);
    
};
Complex::Complex()
{
    a=1;
    b=1;
    
}
Complex::Complex(int ia, int ib)
{
    a=ia;
    b=ib;
    
}
void Complex::Set_values(int ia, int ib)
{
    a=ia;
    b=ib;
    
}
void Complex::Afisare()
{
    cout<<a<<"+j"<<b<<"\t";
    
}
float Complex::Modul()
{
return(sqrt((float)(a*a)+(float)(b*b)));
    
}
Complex Complex::Suma(Complex z2)
{
    Complex z3;
    z3.a=a+z2.a;
    z3.b=b+z2.b;
    return(z3);
}

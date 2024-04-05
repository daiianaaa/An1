/*
 Horvath Daiana, E_2012
 1. Implement a class called Complex that overloads the arithmetical operators (+, -, *, /) for performing the corresponding operations when applied to Complex instances (use both friend functions (*, /) and member methods (+, -)).
 Note: the Complex numbers will have a real and an imaginary part, both coefficients being represented as real numbers.
 */
#include<iostream>
using namespace std;
class Complex
{
private:
    double re, im;
public:
    Complex()
    {
        re=0.;
        im=0.;
    }
    Complex(int x, int y)
    {
        re=x;
        im=y;
    }
    double getIm()
    {
        return im;
    }
    double getRe()
    {
        return re;
    }
    Complex & operator+(const Complex &);
    Complex operator-(Complex x);
    friend Complex operator*(Complex ob1, Complex ob2);
    friend Complex operator/(const Complex& ob1, const Complex& ob2);
};
Complex Complex :: operator-(Complex x)
{
    Complex rez;
    rez.im = im - x.im;
    rez.re = re - x.re;
    return rez;
}
Complex& Complex :: operator+(const Complex &x)
{
    Complex &rez = *new Complex(re + x.re, im + x.im);
    return rez;
}
Complex operator*(Complex ob1, Complex ob2)
{
    Complex rez;
    rez.re=(ob1.re*ob2.re)-(ob1.im*ob2.im);
    rez.im=(ob1.re*ob2.im)+(ob1.im*ob2.re);
    return rez;
}
Complex operator/(const Complex& ob1, const Complex& ob2)
{
    Complex rez;
    rez.re = ((ob1.re * ob2.re) + (ob1.im * ob2.im))/(ob2.re*ob2.re + ob2.im*ob2.im);
    rez.im = ((ob1.im * ob2.re) - (ob1.re * ob2.im))/(ob2.re*ob2.re + ob2.im*ob2.im);
    return rez;
}
int main()
{
    Complex unu(2., 4.), doi(5., 6.), trei;
    cout << "\nFirst number: "<<unu.getRe( ) <<" +i*" <<unu.getIm( );
    cout << "\nSecond number " << doi.getRe( ) << " +i* " << doi.getIm( );
    cout << "\n Sum: (doi + unu) ";
    Complex &ref_trei = doi + unu;
    cout<<"\nSum result by reference: " << ref_trei.getRe( )<<" +i*"<<ref_trei.getIm( );
    trei = doi - unu;
    cout << "\nDifference result: " << trei.getRe( ) << " +i*" << trei.getIm( ) << endl;
    Complex mult;
    mult=doi*unu;
    cout<<"Multiplication result: "<<mult.getRe()<<"+i*"<<mult.getIm()<<endl;
    Complex div;
    div=doi/unu;
    cout<<"Division result: "<<div.getRe()<<"+i*"<<div.getIm()<<endl;
    return 0;
}

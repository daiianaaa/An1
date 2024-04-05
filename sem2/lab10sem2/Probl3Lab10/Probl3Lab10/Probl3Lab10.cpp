/*
 Horvath Daiana, E_2012
    Implement a class that has 2 protected integer variables, that contains a setter and getter
methods for each attribute. Write a second class that inherits the first defined class and
implements the elementary arithmetic operations (+, -, *, /) applied on the variables mentioned
above the results being returned by methods. Write a third class derived from the second one
that implements the methods for calculating the square root of a number (mul result obtained
by the previous derived class) received as parameter, and for raising a numeric value to a
certain power (the base (plus, result obtained by the previous derived class) and the power
(minus, result obtained by the previous derived class) are sent to the method as parameters).
Verify the methods’s calling using objects at different hierchies levels.
*/
#include <iostream>
#include <cmath>
using namespace std;
class Base{
protected: int a, b;
public:
    Base() {
        a = 1;
        b = 1;
        
    }
    void setA(int a){
        this->a = a;
    }
    void setB(int b) {
        this->b = b;
    }
    int getA() {
        return a;
    }
    int getB() {
        return b;
    }
};
class Deriv2 :public Base {
protected:
    int plus, minus;
    double mult, div;
public:
    
    int scadere() {
        minus = a - b;
        return minus;
    }
    int suma() {
        plus = a + b;
        return plus;
    }
    double impartire() {
        div = (double)a / b;
        return div;
    }
    double inumultire() {
        mult = a * b;
        return mult;
    }
};

class Deriv3 : public Deriv2 {
public:
    double radacina(double a) {
        return sqrt(a);
    }
    float patrat(int a, int b) {
        return pow(a, b);
    }
};

int main() {
    Base ob;
    int a, b;
    cout << "Enter the numbers : ";
    cin >> a >> b;
    ob.setA(a);
    ob.setB(b);
    Deriv2 ob2;
    ob2.setA(a);
    ob2.setB(b);
    cout << "The sum is: " << ob2.suma();
    cout <<"\n"<< "The difference is: " << ob2.scadere();
    cout <<"\n"<< "The result of the division is: " << ob2.impartire();
    cout <<"\n"<< "The product is: " << ob2.inumultire();
    Deriv3 ob3;
    cout <<"\n"<< "The square root is = " << ob3.radacina(ob2.inumultire());
    cout <<"\n"<< "The power raised is= " << ob3.patrat(ob2.getA(), ob2.getB())<<"\n";
    return 0;

}

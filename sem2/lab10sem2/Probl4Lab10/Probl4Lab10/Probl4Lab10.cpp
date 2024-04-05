/*
Horvath Daiana, E_2012
Define a class called Triangle with 3 attributes for the triangle sides that has
a method that calculates the perimeter of the triangle with the sides introduced
from the KB. Another class, Triangle_extended, is derived in public mode from
Triangle and defines a method for calculating the triangle’s area. Using objects
from both classes call the allowed methods. Verify before to instantiate the
objects the possibility to define a Triangle object.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <cmath>
#include <iostream>
using namespace std;

class Triangle {
protected:
  int a, b, c;

public:
  Triangle()
    {
  }
  Triangle(int a, int b, int c) {
    this->a = a;
    this->b = b;
    this->c = c;
  }
  int perimeter() {
      return a + b + c;
      
  }
};

class Triangle_extended: public Triangle {
public:
    Triangle_extended()
    {
    }
    Triangle_extended(int a, int b, int c) {
    this->a = a;
    this->b = b;
    this->c = c;
  };
  float area() {
    float ar, s;
    s = (float)(a + b + c) / 2;
    ar = sqrt(s * (s - a) * (s - b) * (s - c));
    return a;
  }
};

int main() {
    int a, b, c;
    cout << "Enter the values of the sides: ";
    cin >> a >> b >> c;
    if (a>0 && b>0 &&c>0 && a+b>=c) {
        cout <<"\n"<< "Is triangle ";
        Triangle ob1(a, b, c);
        cout <<"\n"<< "The perimeter is : " << ob1.perimeter();
        Triangle_extended ob2(a, b, c);
        cout <<"\n"<< "The surface is " << ob2.area()<<"\n";
  }
    else
        cout << "It is not a triangle "<<"\n";
    return 0;
}

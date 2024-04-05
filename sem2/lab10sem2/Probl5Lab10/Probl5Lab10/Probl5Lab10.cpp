/*
Horvath Daiana, E_2012
 Extend the second class from the previous problem with a method that can compute the triangle’s height. Call the method using an adequate object.
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
double radical = 0.5 * sqrt((a + b + c) * (b + c - a) * (a - b + c) * (a + b - c));
double heightl1() {
    return radical / a;
    
}
double heightl2() {
    return radical / b;
    
}
double heightl3() {
    return radical / c;
    
}
};

int main() {
    int a, b, c, base;
    cout << "Enter the values of the sides: ";
    cin >> a >> b >> c;
    cout<<"Which side is the base?(1=a, 2=b, 3=c): ";
    cin>>base;
    if (a>0 && b>0 &&c>0 && a+b>=c)
    {
        cout <<"\n"<< "Is triangle ";
        Triangle ob1(a, b, c);
        cout <<"\n"<< "The perimeter is : " << ob1.perimeter();
        Triangle_extended ob2(a, b, c);
        cout <<"\n"<< "The surface is " << ob2.area()<<"\n";
            if (base == 1)
                cout << "The height is: " << ob2.heightl1() << endl;
            else if (base == 2)
                cout << "The height is: " << ob2.heightl2() << endl;
            else if (base == 3)
                cout << "The height is: " << ob2.heightl3() << endl;
    }
    else
        cout << "It is not a triangle "<<"\n";
    return 0;
}


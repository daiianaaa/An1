/*
Horvath Daiana
 E_2012
Consider a base class Circle defined by a protected attribute radius, that contains a constructor
with parameters and a method that will determine the area of the circle. Consider other base
class, Square with a protected attribute, length, similar to Circle class. Derive in public mode
the class RoundSquare from both classes that will contain a constructor that will call the
constructors from base classes and a method that will verify if the square of length l may be
included in the circle of radius r. The derived class will also determine the perimeter of both
shapes. Instantiate an object from the derived class (data from the KB) and determine the area
and perimeter of the composed shapes. Display a message if the square may be included in the
circle.
*/
#include <iostream>
using namespace std;
#define PI 3.14
class Circle {
protected:
    int rad;
public:
    Circle(int rad) {
        this->rad = rad;
    }
    float surface() {
        return PI * rad * rad;
    }
    void setRadius(int rad) {
        this->rad = rad;
    }
};
class Square {
protected:
    int length;
public:
    Square(int length) {
        this->length = length;
    }
    void setLenght(int length) {
        this->length = length;
    }
};
class RoundSquare :public Circle, public Square {
public:
    RoundSquare(int length, int rad) : Square(length), Circle(rad) { ; }
    float surfaceSq() {
        return length*length;
    }
    int perimeterSq() {
        return 4*length;
    }
    float perimeterCirc() {
        return  PI*rad*2;
    }
    
};
int main()
{
    int lenght, rad;
    cout << "Enter the length of the square: ";
    cin >> lenght;
    cout<<"Enter the radius of the circle: ";
    cin>>rad;
    Square square(lenght);
    square.setLenght(lenght);
    Circle circle(rad);
    circle.setRadius(rad);
    cout << "The surface of the circle is: " << circle.surface();
    RoundSquare ob(lenght, rad);
    ob.setLenght(lenght);
    ob.setRadius(rad);
    cout <<"\n"<< "The surface of the square is: " << ob.surfaceSq();
    cout <<"\n"<< "The perimeter of the square is: " << ob.perimeterSq();
    cout <<"\n"<< "The perimeter of the circle is: " << ob.perimeterCirc()<<"\n";
    return 0;

}

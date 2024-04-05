/*
 Write a C/C++ application that uses a data structure named Scircle. The structure has an integer variable that represents the circle’s radius. In the main() function that uses re private member of the class). The class contains, besides those 2 methods defined in the first application for area and perimeter, an explicit constructor with 1 parameter, a destructor and another method displayRadius() that will be display the radius.
 Extend the application by defining several Circle objects, pointers to the declared objects and refferences to those objects.
 Introduce an accessor method, getRadius() method that allows access to the private radius attribute to display in the main( ) the radius of objects witout using the dispalyRadius() method.
 */
#include<iostream>
using namespace std;
#define pi 3.14
struct Scircle{
    int radius;
};
class Circle{
private:
    int rad;
public:
    Circle(int);
    void Afis();
    float Area();
    float Perimeter();
    ~Circle();
    int getRadius()
    {
        return rad;
    }
};
Circle::Circle(int r)
{
    r=rad;
}
Circle::~Circle()
{
    rad=0;
}
void Circle:: Afis()
{
    printf (" %d", rad);
}
float Circle:: Area()
{
    return (rad*rad*pi);
}
float Circle:: Perimeter()
{
    return (2*pi*rad);
}

void readCircle(Scircle &c);

int main()
{
    Circle circ1(5), *circ2, &circ3=circ1;
    //getter display
    cout<<"The radius displayed using getter is: "<<circ1.getRadius();
    cout<<"\nThe radius of the object is: \n";
    circ1.Afis();
    cout<<"\nArea of the circle is: \n"<<circ1.Area();
    cout<<"\nThe perimeter of the circle is: \n"<<circ1.Perimeter();
    //pointers
    cout<<"\nThe radius of the object is:";
    circ2->Afis();
    cout<<"\nArea of the circle is: \n"<<circ2->Area();
    cout<<"\nThe perimeter of the circle is: \n"<<circ2->Perimeter();
    //references
    cout<<"\n The radius of the object is \n";
    circ3.Afis();
    cout<<"\nArea of the circle is: \n"<<circ3.Area();
    cout<<"\nThe perimeter of the circle is: \n"<<circ3.Perimeter();
    
    float a1, a2, p1, p2;
    Scircle c1;
    Scircle c2;
    readCircle(c1);
    readCircle(c2);
    a1=c1.radius*c1.radius*pi;
    a2=c2.radius*c2.radius*pi;
    p1=2*pi*c1.radius;
    p2=2*pi*c2.radius;
    printf ("The area of the first circle is: %.2f\n", a1);
    printf ("The area of the second circle is: %.2f\n", a2);
    printf ("The perimeter of the first circle is: %.2f\n", p1);
    printf ("The perimeter of the second circle is: %.2f\n", p2);
}
void readCircle(Scircle &c)
{
    printf ("\nEnter the radius of the circle: ");
    scanf ("%d", &c.radius);
}

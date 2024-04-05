
#include <iostream>
using namespace std;
#include "Rectangle.h"
  int main ()
  {
// objects of Rectangle type
    Rectangle rect, square;    //inst.cu val implicite
    cout << "\nObiecte(acces cu operatorul .): \n";
    cout << "\tValori implicite: \n";
    cout << "\t\tAria dreptunghiului: " << rect.det_area () << endl;
    cout << "\t\tAria patratului: " << square.det_area () << endl;
    cout << "\tValori oarecare: \n";
    rect.setHeight (12);
    rect.setWidth (8);
    cout << "\t\tAria dreptunghiului: " << rect.det_area () << endl;
    square.setHeight (8);
    square.setWidth (8);
    cout << "\t\tAria patratului: " << square.det_area ();
    cout << "\n...................................\n\n";
// pointer to Rectangle type Rectangle *point;
    cout << "\nPointers to objects (access with operatorul ->):";
    Rectangle *point = new Rectangle;    //inst. with implicit values
    cout << "\n\tImplicit values: \n";
    cout << "\t\tArea rectangle(square):" << point->det_area () << endl;
    cout << "\tAny values: \n";
    point->setHeight (12);
    point->setWidth (12);
    cout << "\t\tArea (rectangle)square: " << point->det_area () << endl;
    delete point;
    cout << "\n...................................\n\n";
// reference to type Square
    Rectangle & ref_square = square;
    ref_square.setHeight (17);
    ref_square.setWidth (17);
    cout << "\t\tAria patratului folosind referinte: " << ref_square.
      det_area ();
    cout << "\n...................................\n\n";
  }                //main
//******************************************************************************


#include <stdio.h>        //e recomandat a folosi mecanismul de I/E din C++
class Point
{
  int x, y;
    public:Point (int a = 0, int b = 0)
  {
    x = a;
    y = b;
  }
  void setX (int a)
  {
    x = a;
  }
  int getX ()
  {
    return x;
  }
  void setY (int b)
  {
    y = b;
  }
  int getY ()
  {
    return y;
  }
};

int main ()
{
    Point p1;
// echivalent cu Point p1(0,0);
printf ("x = %d\t y = %d\n", p1.getX (), p1.getY ());    //recomandat I/E C++
Point p2 (10);            // echivalent cu Point p2(10,0); Point p3(10,10);
p1.setX (20);
p1.setY (30);
//afisati noile valori ale atributelor x si y ale punctului p1
}


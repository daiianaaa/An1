/*
 Horvath Daiana, E_2012
 În cazul exemplului 3 (care exemplifică moştenirea simplă, cu clasa de bază Pozitie şi derivată Punct) se cer următoarele:
 a. urmariţi şi verificaţi ordinea de apel pentru constructori/destructori
 b. extindeţi funcţia main( ) pentru a utiliza toate metodele din clasa de baza şi din clasa
 derivată
 c. introduceţi o nouă clasă Cerc (date şi metode), derivată din clasa Pozitie
 d. scrieţi un program ce utilizează aceste clase.
 */
#include <iostream>
using namespace std;
class Pozitie {
protected:
  int x, y;

public:
  Pozitie(int = 0, int = 0);
  Pozitie(const Pozitie &);
  ~Pozitie();
  virtual void afisare();
  virtual void deplasare(int, int);
};

Pozitie::Pozitie(int abs, int ord) {
  x = abs;
  y = ord;
  cout << "Constructor CB \"Position\", ";
  afisare();
}

Pozitie::Pozitie(const Pozitie &p) {
  x = p.x;
  y = p.y;
  cout << "Copy constructor CB \"Pozitie\", ";
  afisare();
}

Pozitie::~Pozitie() {
  cout << "Destructor CB \"Position\", ";
  afisare();
}

void Pozitie::afisare() {
  cout << " CB display: coords: x = " << x << ", y = " << y << "\n";
}

void Pozitie::deplasare(int dx, int dy) {
  cout << "CB: movement" << endl;
  x += dx;
  y += dy;
}

class Punct : public Pozitie {
  int visible;
  char color;

public:
  Punct(int = 0, int = 0, char = 'A');
  Punct(const Punct &);
  ~Punct();
  void arata() { visible = 1; }
  void ascunde() { visible = 0; }
  void coloreaza(char c) { color = c; }
  void deplasare(int, int);
  void afisare();
};

Punct::Punct(int abs, int ord, char c) : Pozitie(abs, ord) {
  visible = 0;
  color = c;
  cout << "Constructor CD \"Punct\", ";
  afisare();
}
Punct::Punct(const Punct &p) : Pozitie(p.x, p.y) {

  visible = p.visible;
  color = p.color;
  cout << "Copy constructor CD \"Point\", ";
  afisare();
}

Punct::~Punct() {
  cout << "Destructor CD \"Point\", ";
  afisare();
}

void Punct::deplasare(int dx, int dy) {
  if (visible) {
    cout << " CD: Display movement CD\n";
    x += dx;
    y += dy;
    afisare();
  } else {
    x += dx;
    y += dy;
    cout << "Movement through CD displayed from CB\n";
    Pozitie::afisare();
  }
}
// redefinire metoda de afisare in clasa derivata
void Punct::afisare() {
  cout << "Position: x = " << x << ", y = " << y;
  cout << ", color: " << color;
    if (visible) cout << ", vizibil \n";
    else cout << ", invizibil \n";
}

class Circle : public Pozitie {
  int radius;
  int visible;
  int color;

public:
  Circle(int = 0, int = 0, char = 'A');
  Circle(const Circle &);
  ~Circle();
  void show() { visible = 1; }
  void hide() { visible = 0; }
  void colorize(char c) { color = c; }
  void movement(int, int);
  void display();
};

void Circle::display() {
  cout << "Position: x = " << x << ", y = " << y << ", color: " << color
       << ", radius: " << radius << ", " << (visible ? "" : "in")
       << "visible\n";
}

void Circle::movement(int dx, int dy) {
  if (visible) {
    cout << " Derived class: Display derived class movement\n";
    x += dx;
    y += dy;
    display();
  } else {
    x += dx;
    y += dy;
    cout << "Movement through derived class displayed from base class\n";
    Pozitie::afisare();
  }
}

int main() {
  Pozitie pp0(7, 7);

  cout << "Base class methods:\n";
  pp0.afisare();
  pp0.deplasare(6, 9);
  pp0.afisare();

  cout << "Derived class methods:\n";
  Punct p0(1, 1, 'V');
  p0.afisare();

  Punct p1(p0);
  p1.afisare();
  p1.deplasare(10, 10);

  cout << "Upcasting - objects:\n";
  pp0 = p0;
  pp0.afisare();

  cout << "Upcasting - pointers:\n";
  Pozitie *p;
  p = new Punct(100, 100, 'Z');
  cout<< "Derived class display: derived object if virtual, else base object\n";
  p->afisare();
  p = &pp0;
  cout << "Base class display: base object always\n";
  p->afisare();
  p = &p1;
  cout<< "Derived class display: derived object if virtual, else base object\n";
  p->afisare();

  Punct *pp;
  pp = &p1;
  cout << "Derived class display: derived object always\n";
  pp->afisare();

  cout << "Derived class movement by 10, 10\n";
  pp->deplasare(10, 10);
  cout << "Derived class display: derived object with hide()\n";
  pp->ascunde();
  pp->afisare();

  cout << "Derived class movement with 10, 10 and hide()\n";
  pp->deplasare(10, 10);
  cout << "Base class display: derived object displayed with base class " "method always\n";
  pp->Pozitie::afisare();

  cout << "\nDowncasting:\n ";
  Punct *pdown;
  pdown = (Punct *)&pp0;
  cout << "Base class display: base bject using a derived pointer, else " "derived class\n";
  pdown->afisare();

  pdown = (Punct *)p;
  cout << "Display from Derived, Point" << endl;
  pdown->afisare();
  return 0;
}

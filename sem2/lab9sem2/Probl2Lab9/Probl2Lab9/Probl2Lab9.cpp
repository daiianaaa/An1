/*
 Horvath Daiana, E_2012
 Modify the operator overload - allowing multiple occurrences of the initial string from example 1 to be dropped. Analyze the application functionalities.
 */
#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<stdlib.h>
using namespace std;
const int dim = 31;//30+1 pt. \0
class String {
        char* sir;
public:
    String() {
    //constructorul default nu aloca spatiu, de aceea unul fara parametri
        sir = new (nothrow) char[dim];
    }
    String(char* x)
    {
    sir = new (nothrow) char[strlen(x) + 1];//se mai rezerva pentru \0 – destructorul va lucra corect
    strcpy(sir, x);
    }
    String(const String& x)
    {//copy constructor
    sir = new (nothrow) char[strlen(x.sir) + 1]; strcpy(sir, x.sir);
    cout << "\nCopy cons.";
    }
    String& operator= (const String& x)
    {//assign
    if (this == &x)
        return *this;
    delete[] sir;//eliberez sir din obiectul current pt. ca pot diferi ca dimensiune, echivalent cu: this-> ~String();
    sir = new (nothrow) char[strlen(x.sir) + 1];//aloc spatiu pentru sir pornind de la sirul de asignat
    strcpy(sir, x.sir);
    cout << "\nAssign overload";
        return *this;
    }
    String(String&& a) {//move constructor
    sir = a.sir;
    cout << "\nMove cons.";
        a.sir = nullptr;
    }
    ~String() {
    if (sir != nullptr)
        cout << "\nCall Destructor";
    else
        cout << "\nDestructor is called for nullptr";
        delete[] sir;
    }
    void setSir(char* x)
    {
        strcpy(sir, x);
    }
    char* getSir()
    {
        return sir;
        
    }
    String operator+ (String x1)
    {
        // supraincarcare cu metoda membra
        String rez;
        rez.~String();
        rez.sir = new (nothrow) char[strlen(this->sir) + strlen(x1.sir) + 1];
        strcpy(rez.sir, sir);
        strcat(rez.sir, x1.sir);
        return rez;
        }
    char operator[ ](int poz)
    { // supraincarcarea op [ ] pt. returnarea unui char rez; // caracter din pozitia data in sir
        char rez;
        rez = sir[poz];
        return rez;
        }
    //functia prietena care supraincarca operatorul de scadere este definite in exteriorul clasei mai jos
    friend String operator- (const String& x1, const String& x2);
};//String
    // supraincarc. op. prin f-ctie friend, in exteriorul clasei
String operator- (const String& x1, const String& x2) {
    char* pp;
    pp = strstr(x1.sir, x2.sir); // adresa unde începe sirul x2.sir in sirul x1.sir
    if (pp == NULL) // sirul nu se gaseste in x1.sir
    return String(x1.sir);
    else {
        //char buf[dim];
        char* buf = new (nothrow) char[strlen(x1.sir) + 1];
        strncpy(buf, x1.sir, pp - x1.sir);
        strcpy(buf + (pp - x1.sir), pp + strlen(x2.sir));
        return String(buf);
    }
    
}
int main()
{
    char xx[dim];
    
    cout << "\nDati un sir de caractere (ob1), mai mic de " << dim << " :"; gets_s(xx, countof(xx));
    String ob1(xx);
    cout << "Dati un sir de caractere (ob2), mai mic de " << dim << " :"; cin.getline(xx, sizeof(xx));
    String ob2(xx);
    String ob3;
    ob3 = ob1 + ob2;//assign
    cout << "Sirul (ob3) obtinut in urma adunarii prin supraincarcare operator = : " << ob3.getSir();
    cout << "\n Dati un sir (ob4) care va fi scazut din cel initial, mai mic de " << dim << " :";
    gets_s(xx, countof(xx));
    String ob4(xx);
    String ob5 = ob1 - ob4;//copy constructor
    cout << "Sirul obtinut (ob5) in urma scaderii cu copy constructor: " << ob5.getSir();
    String ob6;
    cout << "\n Dati un sir de caractere (ob6) pentru un obiect, mai mic de " << dim << " :"; cin.getline(xx, countof(xx));
    ob6.setSir(xx);
    cout << "Sirul : " << ob6.getSir();
    ob3.setSir(xx);
    cout << "\nSirul ob3 setat la ob6: " << ob3.getSir();
    char c = ob3[0];
    cout<<"\nPrimul caracter e: "<<c;
}

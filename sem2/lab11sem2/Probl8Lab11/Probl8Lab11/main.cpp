/*
 Horvath Daiana, E_2012
 Considerați clasa Fractie care are doua atribute întregi protected a si b pentru numărător si numitor, doua metode de tip set( ) respectiv get( ) pentru atributele clasei. Declarați o metoda virtuala simplifica( ) care simplifica un obiect Fractie folosind cmmdc-ul determinat prin operatorul %. Definiți un constructor explicit fără parametri care inițializează a cu 0 si b cu 1, si un constructor explicit cu doi parametri care va putea fi apelat daca se verifica posibilitatea definirii unei fracții (b!=0). Supraîncărcați operatorii de adunare, scadere, inmultire si impartire (+,-,*,/) a fracțiilor folosind functii friend care si simplifica daca e cazul rezultatele obtinute, apeland metoda simplifica( ) din clasa. Definiți o clasa Fractie_ext derivata public din Fractie, care va avea un constructor cu parametrii (ce apelează constructorul din clasa de baza) si redefinește metoda simplifica( ) folosind pentru cmmmdc algoritmul prin diferența. Afișați un mesaj adecvat in metoda. Definiți de asemenea supraîncărcarea operatorilor compuși de asignare si adunare, scadere, inmultire si impartire(+=,-=,*=,/=) cu metode membre. Supraîncărcați operatorii de incrementare si decrementare postfixați care aduna/scade valoarea 1 la un obiect de tip Fractie_ext cu metode membre. Instanțiați doua obiecte de tip Fractie fără parametrii. Setați atributele obiectelor cu date citite de la tastatura. Afișați atributele inițiale ale obiectelor si noile atribute definite. Efectuați operațiile implementate prin functiile friend din clasa de baza, inițializând alte 4 obiecte cu rezultatele obținute. Simplificați si afișați rezultatele. Instanția ți doua obiecte de tip Fractie_ext cu date citite de la tastatura. Efectuați operațiile implementate prin metodele clasei, asignând rezultatele obținute la alte 4 obiecte Fracti_ext. Folosiți pentru operații copii ale obiectelor inițiale. Simplificați si afișați rezultatele. Verificați posibilitatea utilizării celor doua metode de tip simplifica( ) (din clasa de baza si derivata) folosind instanțe din clasa de baza si derivata folosind un pointer catre clasa de baza Fractie.
 */
#include<iostream>
#include<cmath>
using namespace std;
class Fractie{
protected:
    int a, b;
public:
    Fractie (){a=0; b=1;}
    Fractie(int x, int y)
    {
        a=x;
        if (b!=0)
            b=y;
    }
    
    void setA(int x)
    {
        a=x;
    }
    void setB(int y)
    {
        a=y;
    }
    int getA()
    {
        return a;
    }
    int getB()
    {
        return b;
    }
    void simplifica()
    {
        if (a == 0 || b == 0)
        {
            a = b = 0;
            return;
            
        }
        int c = abs(a);
        int d = abs(b);
        while (c != d) {
            if (c > d)
                c = c - d;
            else d = d - c;
            
        } a = a / d;
        b = b / d;
        }
    friend Fractie operator+(Fractie x, Fractie y);
    friend Fractie operator-(Fractie x, Fractie y);
    friend Fractie operator*(Fractie x, Fractie y);
    friend Fractie operator/(Fractie x, Fractie y);
};
Fractie operator+ (Fractie x, Fractie y)
{
    Fractie s;
    if (x.b == y.b) {
        s.a = y.a + x.a;
        s.b = y.b;
    }
    else {
        s.a = (y.b * x.a) + (x.b * y.a);
        s.b = (x.b * y.b);
        }
    s.simplifica();
    return s;
}
Fractie operator- (Fractie x, Fractie y)
{
    Fractie s;
    if (x.b == y.b) {
        s.a = x.a - y.a;
        s.b = y.b;
    }
    else {
        s.a = (y.b * x.a) - (x.b * y.a);
        s.b = (x.b * y.b);
        
    }
    s.simplifica();
    return s;
    
}
Fractie operator* (Fractie x, Fractie y)
{
    Fractie s;
    s.a = x.a * y.a;
    s.b = x.b * y.b;
    s.simplifica();
    return s;
    
}
Fractie operator/ (Fractie x, Fractie y)
{
    Fractie s;
    s.a = x.a * y.b;
    s.b = x.b * y.a;
    s.simplifica();
    return s;
}

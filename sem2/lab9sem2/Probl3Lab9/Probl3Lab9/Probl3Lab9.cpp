/*
 Horvath Daiana, E_2012
 Pornind de la exemplul 4b, introduceti metode de tip set la atributele clasei Persoana, astfel incat introducerea datelor sa fie facuta cu metoda introdu( ) si metode setter in loc de constructor. Preluati optiunile cu confirmare, la fel ca la exemplul 4a. Continuati la optiune gresita dand un mesaj adecvat. Asigurati consistenta supraincarcarii operatorilor de indexare (cand nu se gaseste obiectul). Considerati atributul nume de tip char *, alocarea spatiului fiind facuta in constructori. Definiti copy constructorul si supraincarcati operatorul de asignare in cadrul clasei Persoana. Introduceti destructori in ambele clase. Considerati acum procesul de sortare dupa aceleasi chei ca si la cautare cu afisarea rezultatelor in ordine descrescatoare. Verificati functionalitatea elementelor introduse.
 */
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
const int MAX = 31;//nr. caractere
const int dim = 5;//nr. obiecte implicit
class Persoana {
    char nume[MAX];
    double greutate;
    int varsta;
public:
    Persoana()
    {
        strcpy(nume, "Necunoscut");
        greutate = 0.0;
        varsta = 0;
    }
    /*Persoana(char* nume, double greutate, int varsta)
    {
        strcpy(this->nume, nume);
        this->greutate = greutate;
        this->varsta = varsta;
    }*/
    void setName(char* name)
    {
        strcpy(nume, name);
    }
    void setGreutate(double g)
    {
        greutate=g;
    }
    void setVarsta(int v)
    {
        varsta=v;
    }
    char* getNume()
    {
        return nume;
    }
    double getGreutate()
    {
        return greutate;
    }
    int getVarsta()
    {
        return varsta;
    }
    void display()
    {
        
        if ((uintptr_t)this<0x10)
            cout << "\nPersoana : " << nume << "\tGreutatea : " << greutate << "\tVarsta : "<<varsta;
        else
            cout << "\nNu exista obiect ";
    }
    
};

    //Analize si Persoana sunt in relatie de asociere
class Analize {
    Persoana* p;
    int n;
public:
    Analize()
    {
        p = new (std::nothrow) Persoana[dim];
        n = dim;
        
    }
    Analize(int j)
    {
        p = new (std::nothrow) Persoana[j];
        n = j;
    }
    void introduce()
    {
        int j;
        char nume[MAX];
        double greutate;
        int varsta;
        for (j = 0; j < n; j++)
        {
            cout << "\nDatele pentru persoana: " << j + 1;
            cout << "\nNume: ";
            cin >> nume;
            cout << "\nGreutate: ";
            cin >> greutate;
            cout << "\nVarsta: ";
            cin >> varsta;
            p[j].setName(nume);
            p[j].setGreutate(greutate);
            p[j].setVarsta(varsta);
        }
        
    }
    
    void operator[ ](char* nume)
    {
        int j;
        for (j = 0; j < n; j++)
            if (strcmp(nume, p[j].getNume()) == 0)
                p[j].display();
    }
    void operator[ ](double greutate)
    {
        int j;
        for (j = 0; j < n; j++)
            if (greutate == p[j].getGreutate())
                p[j].display();
    }
    void operator[ ](int varsta)
    {
        int j;
        for (j = 0; j < n; j++)
            if (varsta == p[j].getVarsta())
                p[j].display();
    }
    
};
   
int main()
{
    int n;
    char c;
    char nume[MAX];
    double greutate;
    int varsta;
    cout << "\nCate persoane? ";
    cin >> n;
    Analize a(n);
    a.introduce();
    cout << "Cautare dupa (v = varsta, g = greutate, n = nume, e=exit)? ";
    cin >> c;
    switch (toupper(c))
    {
    case 'V': {
        cout << "\nVarsta: ";
        cin >> varsta;
        a[varsta];
        break;
        
    }
    case 'G': {
        cout << "\nGreutate: ";
        cin >> greutate;
        a[greutate];
        break;
        
    }
    case 'N': {
        cout << "\nNume: ";
        cin >> nume;
        a[nume];
        break;
        
    }
    case 'E': return 0;
    }
}

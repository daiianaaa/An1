/*
 Horvath Daiana, E_2012
 Să se scrie un program C++ în care se defineşte o clasă Militar cu o metodă publică virtuală sunt_militar( ) care indică apartenenţa la armată. Derivaţi clasa Militar pentru a crea clasa Soldat şi clasa Ofiter. Derivaţi mai departe clasa Ofiter pentru a obtine clasele SubLocotenent, Locotenent, Capitan, Maior, Colonel, General. Redefiniti metoda sunt_militar( ) pentru a indica gradul militar pentru fiecare clasa specifica. Instantiati fiecare clasa Soldat, Locotenent,...,General, si apelati metoda sunt_militar( ).
 */
#include<iostream>
using namespace std;
class Militar
{
public:
    virtual void sunt_militar()
    {
        cout<<"Sunt militar!";
    }
};

class Soldat: public Militar
{
public:
     void sunt_militar()
    {
        cout<<"Sunt soldat";
    }
    
};
class Ofiter: public Militar
{
public:
     void sunt_militar()
    {
        cout<<"Sunt ofiter";
    }
};
class SubLocotenent: public Ofiter
{
public:
    void sunt_militar()
    {
        cout<<"Sunt sublocotenent";
    }
};
class Locotenent: public Ofiter
{
public:
     void sunt_militar()
    {
        cout<<"Sunt locotenent";
    }
};
class Capitan: public Ofiter
{
public:
    void sunt_militar()
    {
        cout<<"Sunt capitan";
    }
};
class Maior: public Ofiter
{
public:
     void sunt_militar()
    {
        cout<<"Sunt maior";
    }
};
class Colonel: public Ofiter
{
public:
     void sunt_militar()
    {
        cout<<"Sunt colonel";
    }
};
class General: public Ofiter
{
public:
     void sunt_militar()
    {
        cout<<"Sunt general";
    }
};
int main()
{
    Soldat obj1;
    obj1.sunt_militar();
    cout<<"\n";
    Ofiter obj2;
    obj2.sunt_militar();
    cout<<"\n";
    SubLocotenent obj3;
    obj3.sunt_militar();
    cout<<"\n";
    Locotenent obj4;
    obj4.sunt_militar();
    cout<<"\n";
    Capitan obj5;
    obj5.sunt_militar();
    cout<<"\n";
    Maior obj6;
    obj6.sunt_militar();
    cout<<"\n";
    Colonel obj7;
    obj7.sunt_militar();
    cout<<"\n";
    General obj8;
    obj8.sunt_militar();
    cout<<"\n";
}

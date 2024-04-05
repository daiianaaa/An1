/*
Horvath Daiana, E_2012
Implement the program presented in the third example and examine the compilation errors if
are by eliminating the existing comments? Modify the program so the object obiect_derivat
will be able to access the aduna( ) and scade( ) methods, from the main( ) function keeping
the private inheritance.
*/

#include <iostream>
using namespace std;
class Baza
{
protected: int a, b;
public:

    Baza() {
        a = 1;
        b = 1;
        
    }
    int aduna() {
        return a + b;
    }
    int scade() {
        return a - b;
    }
    void afis_baza() {
        cout << "\nAfisare din baza: " <<a<<" "<< b;
    }
    void setA(int a) {
        this->a = a;
        
    }
    void setB(int b) {
        this->b = b;
        
    }

};
class Derivata : public Baza
{
public:

    int inmulteste() {
        return a * b;
    }
};
int main()
{
   
   Baza obiect_baza;
    cout<<"Afis din baza: ";
    obiect_baza.afis_baza();
    obiect_baza.setA(2);
    obiect_baza.setB(3);
    obiect_baza.afis_baza();
    Derivata obiect_derivat;
    obiect_derivat.setA(2);
    obiect_derivat.setB(3);
    cout << "\nProdusul este= " << obiect_derivat.inmulteste();
    cout << "\n Adunate: " << obiect_derivat.aduna();
    cout << "\n Scazute : " << obiect_derivat.scade();
    return 0;
    /*Baza obiect_baza;
       cout << "\nAfis din baza (val. initiale): " << obiect_baza.getA( ) << " " << obiect_baza.getB( ) << '\n';
       cout << "\nSuma este (cu val. initiale, baza) = " << obiect_baza.aduna( ); // corect aduna( ) e public
       cout << "\nDiferenta este (cu val. initiale, baza) = " << obiect_baza.scade( ); //corect scade( ) e public
       obiect_baza.setA(2);
       obiect_baza.setB(3);
       cout << "\nAfis din baza (modificat): " << obiect_baza.getA( ) << " " << obiect_baza.getB( ) << '\n'; cout << "\nSuma/Diferenta dupa setare= " <<obiect_baza.aduna( ) << "/"<<
       obiect_baza.scade( )<<'\n'; Derivata obiect_derivat;
       cout << "\nProdusul este (din derivat cu val. initiale) = " << obiect_derivat.inmulteste( )<< '\n'; // corect val. implicite
       //cout << "\nSuma este (din derivat cu val. initiale, baza) = " << obiect_derivat.aduna( ); // incorect aduna( ) devine private
       //cout << "\nDiferenta este (din derivat cu val. initiale, baza) = " <<obiect_derivat.scade( ); // eroare, scade( ) devine private}
   */
       
}

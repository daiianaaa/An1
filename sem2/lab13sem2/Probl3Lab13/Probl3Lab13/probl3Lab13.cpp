/*
 Horvath Daiana, E_2012
 Scrieţi o aplicaţie C++ care citeşte un fişier utilizând metoda read( ). Verificaţi starea sistemului după fiecare operaţie de citire. Numele fişierului se va citi din linia de comandă. Afişaţi pe ecran conţinutul fişierului.
 */
#include<iostream>
#include<fstream>
using namespace std;

int main(int argc, char*argv[])
{
    char car;
    if (argc!=2) {
        cout <<"Specificati numele fisierului! \n" ;
        exit(1);
        
    }
    ofstream out;
    out.open(argv[1]);
    if (!out) {
        cout <<"Nu poate deschide fisierul";
        exit(1);
        
    }
    //cout << "Introduceti caractere. Caracterul $ va opri introducerea\n";
    do {
    cin.get(car);
    out.put(car);
        
    } while (car! ='$' );
    out.close( );
    return 0;
    
}


/*
 Horvath Daiana, E_2012
 Scrieţi un program care utilizează metoda write( ) pentru a scrie într-un fişier şiruri de caractere. Afişaţi apoi conţinutul fişierului folosind metoda get( ). Numele fişierului se va citi de la tastatură.
 */
#include<iostream>
#include<fstream>
#define DIM 30
using namespace std;
int main()
{
    ofstream out;
    out.open("file.txt");
    char** sir;
    char sir2[DIM];
    int nr;
    cout << "Enter the number of strings: ";
    cin >> nr;
    sir = new char*[nr];
    for (int i = 0; i < nr; i++)
    {
           cout << "Enter the characters: ";
           cin >> sir2;
           sir[i] = new char[strlen(sir2)];
           strcpy(sir[i], sir2);
    }
    for (int i = 0; i < nr; i++)
    {
           out.write(sir[i], strlen(sir[i]));
    }
    return 0;
}

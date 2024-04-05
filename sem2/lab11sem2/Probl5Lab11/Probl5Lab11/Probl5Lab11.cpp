/*
 Horvath Daiana, E_2012
 Definiti o clasa abstracta care contine 3 declaratii de metode pur virtuale pentru concatenarea, intreteserea a doua siruri de caractere si inversarea unui sir de caractere primit ca parametru. O subclasa implementeaza corpurile metodelor declarate in clasa de baza. Instantiati clasa derivata si afisati rezultatele aplicarii operatiilor implementate in clasa asupra unor siruri de caractere citite de la tastatura. Examinati eroarea data de incercarea de a instantia clasa de baza.
 */
#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
 class Abstract
{
public:
    char sir[20];
    char sir2[20];
    void set(char *s,char *ss)
    {
          strcpy(sir,s);
          strcpy(sir2,ss);
    }
    virtual void concatenare()=0;
    virtual void interclasare()=0;
    virtual void inversare()=0;
};
class Derivata:public Abstract{
public:
      char tes[40];
      void concatenare(){
            strcat(sir,sir2);
            cout<<"\nSirul concatenat: "<<sir<<endl;
      }
      void interclasare(){
          char tes[20];
          int i = 0, k = 0, lungime = strlen(sir) + strlen(sir2)+1 ;
          for (int j = 0; j < lungime; j++)
        {
            if (j % 2 == 0)
            {
                tes[i++] = sir[k];
            }
            else
                {
                    tes[i++] = sir2[k];
                    k++;
                }
        }
          cout<<"\nSirul interclasat: ";
          cout << tes << endl;
          
        
      }
          void inversare(){
          strrev(sir);
          cout<<"\n"<<"Sirul inversat: "<<sir<<endl;
        }
};
int main()
{
    char sir1[10], sir2[10];
    cout<<"Enter the first string: ";
    cin>>sir1;
    cout<<"Enter the second string: ";
    cin>>sir2;
    Derivata obj;
    obj.set(sir1, sir2);
    obj.concatenare();
    obj.interclasare();
    obj.inversare();
    
}

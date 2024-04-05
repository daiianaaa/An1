/*
 Horvath Daiana, E_2012
 Modify example 3 in order to allow the addition of two CPunctText points. The name of the new point will be created from the names of the compounding points. Add a method that returns the distance from a point to origin. Modify the class so that you remove the afis () method by using appropriate getter methods instead. Also remove the lungime_sir attribute by
 appropriately modifying the class methods. Test using the string specific functions of VC ++
 1y/2z (strcpy_s ( ) and strcat_s ( )).
 */
#include<iostream>
using namespace std;
#include<string.h>
#include<stdio.h>
#include<math.h>
class CPunctText{
private:
    int x;
    int y;
    int lungime_sir;
    char *sNume;
public:
    CPunctText();
    CPunctText(int ix,int iy,char *sText="punct");
    CPunctText(CPunctText &pct);
    ~CPunctText();
public:
    void Afis()
    {
        cout<<"\nObiectul are x="<<x;
        cout<<"\nObiectul are y="<<y;
        cout<<"\nObiectul are sirul="<<sNume<<endl;
        
    }
    CPunctText Suma(CPunctText pct);
    float Distanta()
    {
        return (sqrt(float(x*x+y*y)));
        
    }
    
};
CPunctText::CPunctText()
{
    lungime_sir=20;
    sNume=new char[lungime_sir];
    
}
CPunctText::CPunctText(int ix,int iy,char *sText)
{
    lungime_sir=strlen(sText)+1;
    sNume=new char[lungime_sir];
    x=ix;
    y=iy;
    strcpy(sNume,sText);
    
}
CPunctText::CPunctText(CPunctText &pct)
{
    sNume=new char[pct.lungime_sir+1];
    x=pct.x;y=pct.y;
    lungime_sir=pct.lungime_sir+1;
    strcpy(sNume,pct.sNume);
    
}
CPunctText CPunctText::Suma(CPunctText pct)
{
    CPunctText s;
    s.x=x+pct.x;s.y=y+pct.y;
    s.lungime_sir=lungime_sir+pct.lungime_sir+1;
    s.sNume=new char[s.lungime_sir];
    strcpy(s.sNume,sNume);
    strcat(s.sNume,pct.sNume);
    return s;
    
}//destructor
CPunctText::~CPunctText()
{
    delete sNume;
    
}
int main()
{
    CPunctText cpt1(1,2,"punct1");
    CPunctText cpt2(cpt1);
    CPunctText cpt3=cpt2;
    CPunctText cpt4(4,5,"punct4");
    cout<<"\t\tSe vor aduna obiectele:\n";
    cpt3.Afis();
    cout<<"Distanta de la punct la origine este:"<<cpt3.Distanta()<<endl;
    cpt4.Afis();
    cout<<"Distanta de la punct la origine este:"<<cpt4.Distanta()<<endl;
    cout<<"\n\t\tRezultatul va fi:";
    CPunctText cpt5=cpt4.Suma(cpt1);cpt5.Afis();
    cout<<"Distanta de la punct la origine este:"<<cpt5.Distanta()<<endl;
    
}

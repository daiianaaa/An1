/*
 Horvath Daiana, E_2012
 Write a C/C++ application that reads a point from the keyboard by giving the x, y and z coordinates. Write a method that moves the point with a given distance on each of the three axes. Verify if the line between the first and the second position of the point crosses a third given point.
 */
#include<iostream>
using namespace std;
class Punct
{
    int x;
    int y;
    int z;
public:
    Punct()
    {
        x=0;
        y=0;
        z=0;
        
    }
    void Initializare()
    {
        int ix,iy,iz;
        cin>>ix;
        cin>>iy;
        cin>>iz;
        x=ix;
        y=iy;
        z=iz;
        
    }
void Afisare()
    {
    cout<<"("<<x<<","<<y<<","<<z<<")\n\n";
    
}
Punct Translatie
 (
  int dx,int dy,int dz)
    {
    Punct p;
    p.x=x+dx;
    p.y=y+dy;
    p.z=z+dz;
    return p;
    
}//functia de verificare
    void Verificare_coliniaritate(Punct p1,Punct p2)
    {
        if((((x-p1.x)/(p2.x-p1.x))==((y-p1.y)/(p2.y-p1.y)))&&(((x-p1.x)/(p2.x-p1.x))==((z-p1.z)/(p2.z-p1.z))))
            cout<<"\nCele 3 puncte sunt coliniare!!!\n";
        else
            cout<<"\nCele 3 puncte nu sunt coliniare.\n";
        
    }
    
};
int main()
{
    int dx,dy,dz;
    Punct p1,p3,p2;
    cout<<"Dati cordonatele primului punct (x,y,z):  ";
    p1.Initializare();
    cout<<"Ati introdus coodonatele: ";
    p1.Afisare();
    cout<<"Dati valorile cu care doriti sa se faca translatia (dx, dy, dz):  ";
    cin>>dx;
    cin>>dy;
    cin>>dz;
    p2=p1.Translatie(dx,dy,dz);
    cout<<"Noul punct va avea coordonatele: ";
    p2.Afisare();
    cout<<"Dati cordonatele celui de al treilea punct (x,y,z):  ";
    p3.Initializare();cout<<"Ati introdus coodonatele: ";
    p3.Afisare();
    p3.Verificare_coliniaritate(p1,p2);
    return 0;
}

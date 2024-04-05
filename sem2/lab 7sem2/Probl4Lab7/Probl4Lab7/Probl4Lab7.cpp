/*
 Horvath Daiana, E_2012
 Model in OOP a class named Student containing name, surname the number of marks and the marks from the winter session exams specified as an int pointer. Display the name of the students who have arears exams and the first three students in the group based on the media that will be also displayed.
 */
#include<iostream>
using namespace std;
#include<string.h>
class Student{
    char nume[20];
    char prenume[20];
    int nr_note;
    int note[10];
public:
    //constructor
    Student(){
        strcpy(nume,"");
        strcpy(prenume,"");
        nr_note=0;
        note[0]=0;
        
    }
//metoda mutator ce initializeaza atributele clasei cu date citite de la tastatura
    void Initializare(){
        char num[20],p[20];
        cout<<"Nume si prenume: ";
        cin>>num;
        cin>>p;
        strcpy(nume,num);
        strcpy(prenume,p);
        nr_note=4;
        cout<<"Dati cele 4 note:\n";
        for(int i=0;i<nr_note;i++)
        {
            cout<<"nota "<<i+1<<"  ";
            cin>>note[i];
            
        }
        
    }//metoda de afisare
    void Afisare(){
        cout<<"\t"<<nume<<" "<<prenume<<endl;
        
    }//metoda calcul al mediei notelor
    float Medie(){
        float s=0;
        for(int i=0;i<nr_note;i++)
            s+=note[i];
        return (s/nr_note);
        
    }//metoda ce testeaza daca un student are restante
    int Cauta(){
        int ok=0;
        for(int i=0;i<nr_note;i++)
            if(note[i]<5)
                ok=1;
        return ok;
        
    }
    
};
int main()
{
    Student v[10];
    int i,n,max,k,j = 0;
    int medii[10];
    cout<<"Dati numarul de studenti din grupa (cuprins intre 4 si 10):";
    cin>>n;
    cout<<"Introduceti datele studentilor:";
    for(i=0;i<n;i++)
    {
        cout<<"\nstudentul "<<i+1<<"  \n";
        v[i].Initializare();
        
    }
    cout<<"Studenti cu restante in sesiunea de iarna :\n";
    for (i=0;i<n;i++)
        if (v[i].Cauta())v[i].Afisare();
    for(i=0;i<n;i++)
        medii[i]=v[i].Medie();
    cout<<"\nPrimi trei studenti cu cele mai mari medii sunt:\n";
    for(k=1;k<=3;k++)
    {
        max=0;
        for (i=0;i<n;i++)
            if (medii[i]>max)
            {
                max=medii[i];
                j=i;
                
            }
        medii[j]=0;
        v[j].Afisare();
    }
}

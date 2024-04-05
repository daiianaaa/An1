/*
 Horvath Daiana, E_2012
 Declarati o clasa Animal, care va contine o metoda pur virtuala, respira( ) si doua metode virtuale manaca( ) si doarme( ). Derivati in mod public o clasa Caine si alta Peste, care vor defini metoda pur virtuala, iar clasa Caine va redefini metoda mananca( ), iar Peste metoda doarme( ). Instantiati obiecte din cele doua clase si apelati metodele specifice. Definiti apoi un tablou de tip Animal, care va contine obiecte din clasele derivate, daca e posibil. Daca nu, gasiti o solutie adecvata.
 */
#include<iostream>
using namespace std;
class Animal
{
protected:
    virtual void respira()=0;
    virtual void mananca()
    {
        cout<<"mananca: ";
    }
    virtual void doarme()
    {
        cout<<"doarme";
    }
};
class Caine: public Animal
{
public:
    Caine(){}
    void respira() override{
        cout<<"Cainele respira";
    }
    void mananca() override{
        cout<<"Cainele mananca";
    }
};
class Peste: public Animal
{
public:
    Peste(){}
    void respira() override
    {
        cout<<"Pestele respira";
    }
        
    void doarme() override{
        cout<<"Pestele doarme";
    }
};
int main()
{
    Animal* obj[2];
    Caine obj1;
    obj1.respira();
    cout<<"\n";
    obj1.mananca();
    cout<<"\n";
    Peste obj2;
    obj2.respira();
    cout<<"\n";
    obj2.doarme();
    cout<<"\n";
    
    obj[0]=new(nothrow)Caine();
    obj[1]=new(nothrow)Peste();
    
    return 0;
}

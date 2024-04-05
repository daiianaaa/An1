/*
 Horvath Daiana, E_2012
 Write a C++ application in which the class Calculator has a private attribute called RAM_memory (int) and a friend function named service_technician( ) that can modify the attribute’s value. The friend function will be member in the class Motherboard, that encapsulates the processor_type variable (string of characters). Write the code that allows the modifying of the processor_type’s value and the RAM_memory from the friend function.
 */
#include<iostream>
#include<string.h>
using namespace std;
class Motherboard
{
private:
    char processor_type[20];
public:
    
    void setProcessorType(char *c)
    {
        strcpy(processor_type,c);
    }
    char* getProcessorType()
    {
        return processor_type;
        
    }

};
class Calculator{
private:
    int RAM_memory;
public:
    Motherboard ob;
    Calculator()=default;
    void setRAM(int x)
    {
        RAM_memory=x;
    }
    int getRAM()
    {
        return RAM_memory;
    }
    friend void service_technician(Calculator &c, char *s, int n);
};
void service_technician(Calculator &calc, char *string, int a)
{
    if (a!=0)
    {
        calc.setRAM(a);
    }
    calc.ob.setProcessorType(string);
}

int main()
{
    Calculator calc;
    int n;
    char s[20];
    cout<<"Enter the name of the processor: ";
    cin>>s;
    cout<<"Enter the RAM of the PC: ";
    cin>>n;
    calc.ob.setProcessorType(s);
    calc.setRAM(n);
    cout<<"Data for modifying the processor and RAM.";
    cout<<"\nEnter the name of the processor: ";
    cin>>s;
    cout<<"Enter the RAM of the PC: ";
    cin>>n;
    service_technician(calc, s, n);
    cout<<"The new data are: "<<calc.getRAM()<<", "<<calc.ob.getProcessorType()<<"\n'";
    return 0;
}

/*
 Horvath Daiana, E_2012
 Write a C++ application that reads from the keyboard a series of values of various types. Display the values using the standard manipulators.
 */
#include<iostream>
#include<iomanip>

using namespace std;
ostream& init(ostream& stream);
int main()
{
    int a;
    float b;
    double c;
    char d;
    cout<<"Enter an integer: ";
    cin>>a;
    cout<<right<<hex<<init<<a<<"\n";
    cout<<"Enter a float: ";
    cin>>b;
    cout<<left<<dec<<b<<"\n";
    cout<<"Enter a double: ";
    cin>>c;
    cout<<right<<init<<c<<"\n";
    cout<<"Enter a character: ";
    cin>>d;
    cout<<left<<init<<d<<"\n";
    
    return 0;
}
ostream& init(ostream& stream){
    stream.width(20);
    stream.precision(5);
    return stream;
}

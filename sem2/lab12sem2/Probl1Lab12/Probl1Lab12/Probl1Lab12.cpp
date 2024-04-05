/*
 Horvath Daiana, E_2012
 Write a C++ program that displays some numerical values in decimal, octal and hexadecimal. Display the values left and right aligned, inside a field that can hold 15 characters. Use the setfill( ) manipulator for setting the filling character and the width( ) and precision( ) methods for setting the displaying field size and the values representation precision.
 */
#include<iostream>
#include<iomanip>
using namespace std;
ostream &init(ostream &stream);
int main()
{
    int x;
    cout<<"Enter the value of the field: ";
    cin>>x;
    if (x<0|| x>15){
        cout<<"The field should be between 0 and 15!";
        exit(1);
    }
    cout<<right<<init<<hex<<100<<"\n";
    cout.unsetf(ios::hex);
    cout.setf(ios_base::dec);
    cout<<left<<init<<dec<<100<<"\n";
    cout.unsetf(ios::dec);
   
    cout.setf(ios_base::oct);
    cout<<left<<init<<oct<<100<<"\n";
   
    return 0;
    
}
ostream &init(ostream &stream) {
  stream << setfill('A');
  stream.width(10);
  stream.precision(5);

  return stream;
}

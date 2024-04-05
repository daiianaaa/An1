/*
 Horvath Daiana, E_2012
 Consider a data acquisition process from a hardware device (10 variables real type). Display, using an appropriate message, the data in a minimal format (the integer part). Determine the average value of the displayed numbers and if it is greater than a previously defined (or entered) threshold, display the data in a detailed format (float variables, 8 digits precision at the fractional part).
 */
#include<iostream>
#include<iomanip>
using namespace std;
ostream& init(ostream& stream);
int main()
{
    float v[10], threshold, count=0, avg;
    int i;
    cout<<"Enter 10 real values: ";
    for (i=0; i<10; i++)
    {
        cin>>v[i];
    }
    cout<<"The values are: ";
    for(i=0; i<10; i++)
    {
        cout<<v[i]<<" ";
        count+=v[i];
    }
    avg=count/10;
    cout<<"\n"<<"Enter a value for the threshold:  ";
    cin>>threshold;
    if (avg>=threshold)
        cout.precision(8);
    cout<<"The average nr is: "<<avg<<"\n";
    return 0;
}
ostream& init(ostream& stream)
{
    stream.width(20);
    stream.precision(5);
    return stream;
}

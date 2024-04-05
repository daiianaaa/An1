/*
 Horvath Daiana, E_2012
 Define a class called AcceleratedMovement that contains the private attributes dc (the current distance), vc (the current speed) and a (the acceleration). The values of dc, vc and a are initialized in the constructor and their values are equal to d0, v0 and a0 (as parameters).The class overloads the extraction and insertion operators for initializing and displaying the characteristics of a certain instance.
 Implement the method determineMovement that re-calculates the values of dc and vc, considering a number of seconds (received as paramenter) and the law of uniformly accelerated linear motion with a0 acceleration. Instantiate the class and use the defined members.
 */
#include<iostream>
using namespace std;
class AcceleratedMovement{
private:
    float vc, dc, a;
public:
    AcceleratedMovement()
    {
        vc=0;dc=0;a=0;
    }
    AcceleratedMovement(float vc, float dc, float a)
    {
        this->vc=vc;
        this->dc=dc;
        this->a=a;
    }
    void detMov(int sec)
    {
        dc += vc * sec + a / 2 * sec * sec;
        vc += a * sec;
    }
    friend istream& operator>>(istream& stream, AcceleratedMovement& obj);
    friend ostream& operator<<(ostream& stream, AcceleratedMovement obj);

};
//supraincarcarea operatorului de extractie (intrare)
istream& operator>>(istream& stream, AcceleratedMovement& obj) {
    cout << "\nIntroduce a value for dv(velocity): ";
    stream >> obj.vc;
    cout << "\nIntroduce a value for dc(distance):  ";
    stream >> obj.dc;
    cout << "\nIntroduce a value for a(acceleration):  ";
    stream >> obj.a;
    return stream;
    
}
//supraincarcarea operatorului de insertie (iesire)
ostream& operator<<(ostream& stream, AcceleratedMovement obj) {
    stream << "\nThe variables are: ";
    stream << obj.dc << ", "<<obj.vc<<", "<<obj.a;
    return stream;
}
int main()
{
    AcceleratedMovement obj;
    cin>>obj;
    int sec;
    cout<<"Enter the number of seconds: ";
    cin>>sec;
    obj.detMov(sec);
    cout<<obj<<"\n";

    return 0;
}

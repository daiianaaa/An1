/*
 Horvath Daiana, E_2012
 Write a C++ application that stores inside a class a public static integer variable called var_static. The variable is incremented each time the class’s constructor is called. After instantiating several objects, display their number using the value of the static variable.
 */
#include<iostream>
using namespace std;
class Static
{
private:
    int x;
public:
    static int var_static;
    Static (int a)
    {
        x=a;
        var_static++;
    }
    int getX()
    {
        return x;
    }
   static int x_var_static()
    {
        return var_static;
    }
};
int Static::var_static;
int main()
{
    Static x(10);
    cout<<"The value is: "<<x.getX()<<"\n";
    cout<<"The static value is: "<<Static::x_var_static()<<"\n";
    
    Static x2(5);
    cout<<"The value is: "<<x2.getX()<<"\n";
    cout<<"The static value is: "<<Static::x_var_static()<<"\n";
    
    Static x3(2);
    cout<<"The value is: "<<x3.getX()<<"\n";
    cout<<"The static value is: "<<Static::x_var_static()<<"\n";
    
    
}

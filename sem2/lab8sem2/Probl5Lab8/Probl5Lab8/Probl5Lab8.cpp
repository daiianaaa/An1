/*
 Horvath Daiana, E_2012
 Implement the 4-th problem by changing the static variable’s access modifier to private. Define a method that returns the counter’s value. Analyze the case if the getter method is static or non-static and the way it is called.
 */
#include<iostream>
using namespace std;
class Static
{
private:
    int x;
    static int var_static;
public:
    
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


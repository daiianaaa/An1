/*
 Horvath Daiana, E_2012
 Define a class called Repository that has 2 integer private variables. The class contains an empty constructor and another one with 2 parameters. An accesor method that displays the variables values is also included in the class. Write another class called Mathematics which is friend to the first one. This class contains the implementation of the elementary arithmetical operations (+, -, *, /) applied to the values stored in the first class. Each arithmetical method receives as parameter an object instantiated from the first class.
 */
#include<iostream>
using namespace std;
class Repository{
private:
    int a, b;
public:
    Repository()=default;
    Repository(int x, int y)
    {
        a=x;
        b=y;
    }
    int getA()
    {
        return a;
    }
    int getB()
    {
        return b;
    }
    friend class Mathematics;
};
class Mathematics{
public:
    int Sum(Repository obj)
    {
        return obj.a+obj.b;
    }
    int Diff(Repository obj)
    {
        return obj.a-obj.b;
    }
    int Product(Repository obj)
    {
        return obj.a*obj.b;
    }
    int Div(Repository obj)
    {
        return (float)obj.a/obj.b;
    }
};
int main()
{
    int a, b;
    cout<<"Enter the values for a and b: ";
    cin>>a;
    cin>>b;
    Repository obj(a, b);
    Mathematics m;
    cout<<"The sum of the two numbers is: "<<m.Sum(obj);
    cout<<"\nThe differencce of the two numbers is: "<<m.Diff(obj);
    cout<<"\nThe product of the two numbers is: "<<m.Product(obj);
    cout<<"\nThe division of the two numbers is: "<<m.Div(obj)<<"\n";
   
    return 0;
    
    
}

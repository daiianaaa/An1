/*

Horvath Daiana, E_2012
 Write the program that considers a MyClass class with three int-type attributes. The class considers on the basis of the overload mechanism public methods int myFunction ( ), which depending on the number of parameters received, returns either the value received (1 parameter) or the product of the input variables (0- all,2, 3 parameters). Instantiate an object of the class in main(), set the attributes using dedicated setter methods from the class, and display the values at method calls.
*/
#include<iostream>
using namespace std;
class MyClass
{
private:
        int a,b,c;
public:
    
        MyClass() {};
        void setNr(int x, int y, int z)
        {
            a=x;
            b=y;
            c=z;
        }
        int myFunction()
        {
                return a*b*c;
        }
        int myFunction(int x)
        {
                return x;
        }
        int myFunction(int x, int y)
        {
                return x*y;
        }
        int myFunction(int x, int y, int z)
        {
                return x*y*z;
        }
};

int main()
{
    int a,b,c;
    cout<<"Enter the value for a: ";
    cin>>a;
    cout<<"Enter the value for b: ";
    cin>>b;
    cout<<"Enter the value for c: ";
    cin>>c;
    MyClass function;
    function.setNr(a,b, c );
    cout<<"No parameter: "<<function.myFunction();
    cout<<"\nFirst parameter:"<<function.myFunction(a);
    cout<<"\nTwo parameter: "<<function.myFunction(a,b);
    cout<<"\nThree parameter: "<<function.myFunction(a,b,c)<<endl;

    return 0;
}

/*
 Horvath Daiana, E_2012
 Modify the 2-nd example so that the code could be launched into execution. The attribute of the class will be considered private.
 */
#include <iostream>
using namespace std;
class Test2{
    int x;
public:
    Test2()
    {
        cout<<"Apel constructor explicit vid.";
        
    }
    void write_x(int y)
    {
        x=y;
        
    }
    
};
int main(void)
{
    Test2 ob1;
    int a;
    cout<<"\nIntroduceti valoarea variabilei de tip \"int\" din clasa: ";
    cin>>a;
    ob1.write_x(a);
    return 0;
    
}

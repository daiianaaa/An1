#include<iostream>
using namespace std;
class Arithmetics
{
private:
    int a,b;
public:
        void setXY(int n1, int n2)
        {
                a = n1;
                b = n2;
        }
        int getX()
        {
                return a;
        }
        int getY()
        {
                return b;
        }
        int sum()
        {
                return a + b;
        }
        int difference();
};
int Arithmetics::difference()
{
        return a - b;
}

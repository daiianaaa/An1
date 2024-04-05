#include<iostream>
using namespace std;
class Calcule
{
private:
    int x, y;
public:
    int plus(int x, int y)
    {
        return (x+y);
    }
    int minus(int x, int y)
    {
        return (x-y);
    }
    int inmultire(int x, int y)
    {
        return (x*y);
    }
    int impartire(int x, int y)
    {
        if (y==0)
        {
            cout<<("Impartirea la 0 nu este posibila!");
        }
        else
        {
            return (x/y);
        }
        return 0;
    }
};

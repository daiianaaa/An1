#include<iostream>
using namespace std;
class Safe
{
private:
        int cipher=2002;
        float money=0;
        float getMoney()
        {
                return money;
        }
        void setMoney(float n)
        {
                money += n;
        }
public:
   void putInSafe(int key)
    {
            float n = 0;
            if (key == cipher)
            {
                    cout<<"Enter the amount of money: ";
                    cin>>n;
                    setMoney(n);
            }
            else
            {
                    cout<<"The PIN is wrong!Try again!";
                    exit(0);
            }
    }
    double getFromSafe(int key)
    {
            double aux=0;
            if (key==cipher)
            {
                    aux = getMoney();
            }
            return aux;
    }
        
    void getBalance(int key)
        {
                if (key == cipher)
                {
                        cout<<"Your account balance is: "<<getFromSafe(key);
                }
                else
                {
                        cout<<"The PIN is wrong!Try again";
                        exit(0);
                }
    }
};

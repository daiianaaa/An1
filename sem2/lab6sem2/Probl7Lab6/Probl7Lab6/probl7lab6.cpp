/*
 Horvath Daiana, e_2012
 Write a class named Safe that has as private attributes the cipher and the amount of money. Implement the private methods getMoney( ) and setMoney( ). The public methods putInSafe( ) and getFromSafe( ) will call the previous methods only if the cipher sent as parameter matches the value stored inside the class. Display a message if the cipher is not correct.
 */
 #define _CRT_SECURE_NO_WARNINGS

 #include<iostream>
 #include<stdio.h>
 #include"Safe.h"
/*
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
 */
 using namespace std;
 int main()
 {
         
     int n,s;
     Safe card;
     cout<<"1. Put in safe\n";
     cout<<"2. Account Balance\n";
     do
     {
             cout<<"\nWaiting for your command: ";
             cin>>s;
             cout<<"Enter your PIN: ";
             cin>>n;
             if (s==1)
             {
                     card.putInSafe(n);
             }
             else if (s==2)
             {
                     card.getBalance(n);
             }
             
     } while (s != 0);

     return 0;
 }

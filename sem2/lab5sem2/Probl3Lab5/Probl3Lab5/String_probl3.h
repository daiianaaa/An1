#include<iostream>
#include<string.h>
using namespace std;

class String
{
private:
    char *sir;
    int dim;
public:
    String()
    {
        dim=100;
        sir= new char[dim];
    }
    ~String()
    {
        delete []sir;
    }
    void Init()
    {
        char buff[60];
        cout<<"Introduce the array(max 10):";
        cin>>buff;
        strncpy(sir,buff,10);
        sir[10]='\0';
    }
    int Len()
    {
        int k;
        k=strlen(sir);
        return k;
    }
    int Last_index(char c, int n)
    {
        int i, poz = 0;
        for (i=0; i<n; i++)
        {
            if (sir[i]==c)
            {
                poz=1+i;
            }
        }
        return poz;
    }
    void Capital_letter(int n)
    {
        int i;
        for (i=0; i<n; i++)
        {
            cout<<(char)toupper(sir[i]);
        }
    }
    int Nr_app(int n, char c)
    {
        int i, ok = 0;
        for (i=0; i<n; i++)
        {
            if (sir[i]==c)
            {
                ok++;
            }
        }
        return ok;
    }
};

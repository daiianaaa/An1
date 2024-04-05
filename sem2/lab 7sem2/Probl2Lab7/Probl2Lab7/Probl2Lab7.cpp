/*
Horvath Daiana, e_2012

Write a C/C++ application that models in OOP a real numbers one dimensional array.

Instantiate two objects of this class with the same length n and store in a third one the results of subtracting each of the two real number arrays’ elements. If the source arrays have different lengths, the result has the length of the shortest array.

*/
#include<iostream>
using namespace std;
class Array
{
private:
    int n;
    int* v = NULL;
public:
    Array(int m)
    {

        n = m;
        v = new int[n];
    }
    void readArray()
    {
        for (int i = 0; i < n; i++)
        {
            cout << "v[i]= ";
            cin >> v[i];
        }
    }
    void setDimension(int n)
    {
    this->n = n;
    v = new int[n];
    }
    Array (const Array& obj)
    {
    v= new (std::nothrow)int;
    *v = *(obj.v);
    }


    ~Array()
    {
       delete []v;

    }
    void Afis()
    {
        for (int i = 0; i < n; i++)
        {
            cout << v[i] << " ";
        }
    cout << "\n";
    }
    void new_array(Array v1, Array& result)
    {
        int l = 0;
        if (n > v1.n)
            {
                l = v1.n;
            }
        else
        {
            l = n;
        }
    result.setDimension(l);
        for (int i = 0; i < l; i++)
        {
            result.v[i] = v[i] - v1.v[i];
        }
    }
};

    int main()
    {
        int n;
        cout << "Enter the number of the elements of the first array: ";
        cin >> n;
        Array v1(n);
        v1.readArray();
        cout << "Enter the number of the elements of the second array: ";
        cin >> n;
        Array v2(n);
        v2.readArray();
        Array v3(n);
        v1.new_array(v2, v3);
        cout << "The array is: ";
        v3.Afis();

    }


/*
 Horvath Daiana, E_2012
 Overload the new and delete operators for one of the classes implemented before, in order to allocate / de- allocate the necessary amount of memory.
 */
#include<iostream>
#include<string.h>
using namespace std;
class Department;
class Employee
{
private:
        char name[20];
        float salary;
public:
        friend class Department;
        Employee()
       {
            
        }
        void print()
       {
           cout<<"\nName: "<< name;
           cout<<"\nSalary: "<< salary;
        }
        char* getName()
        {
            return name;
        }
        float getSalary()
       {
            return salary;
        }
    void* operator new(size_t size)
    {
        return malloc(size);
       
    }
    void operator delete(void* a)
    {
        free(a);
    }
    void* operator new[](size_t size)
    {
        return malloc(size);
    }
    void operator delete[](void* a)
    {
        free(a);
    }
};

class Department
{
private:
        int n;
        Employee* emp;
public:
       Employee operator[](int index)
       {
           return emp[index-1];
       }
        Department(int nr)
       {
            n=nr;
            emp=new Employee[n];
        }
        
        void read()
       {
            
            for(int i=0;i<n;i++)
            {
                cout<<"Name: ";
                cin>>emp[i].name;
                cout<<"Salary: ";
                cin>>emp[i].salary;
            }
        }
    void* operator new[](size_t size)
    {
        return malloc(size);
    }
    void operator delete[](void* a)
    {
        free(a); 
    }
};

int main()
{
    int n,i;
    cout<<"How many employees do you want to enter?\n";
    cin>>n;

    Department obj(n);
    obj.read();

    cout<<"Read data from employee number: ";
    cin>>i;

    if((i>=1)&&(i<=n))
    {
        cout<<"\nThe employee number is:\n"<<i;
            obj[i].print();
    }
    else
            cout<<"Not a valid number!";

    return 0;
}


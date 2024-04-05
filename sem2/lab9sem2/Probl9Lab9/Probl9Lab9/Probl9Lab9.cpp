/*
 Horvath Daiana, E_2012
 Define a class called Student, containing as private member: name (pointer to character array), marks (integer pointer) and no_marks (int). The class also contains a constructor with parameters, a copy/move constructor, a method for assign operator overloading, a method for marks setting, a display method and a destructor. Create some objects using the constructor with parameters, another one using the copy constructor as a clone object, displaying each time the attributes of the created object. Copy an object into another one, both being created. Display the result of the copy operation. Analyze the used methods. Make another implementation in which the name is given by a fixed character string or pseudo container string, and marks is a fixed size array specified by a constant, the no_marks attribute being removed.
 */
#include<iostream>
#include<stdio.h>
#define DIM 30
using namespace std;
class Student
{
private:
        char name[DIM];
        int* marks;
        int no_marks;

public:
    Student(char n[], int* c, int k)
    {
        strcpy(name, n);
        no_marks = k;
        marks = (int*)malloc(sizeof(int));
        for (int i = 0; i < no_marks; i++)
        {
                *(marks + i) = *(c + i);
        }
    }
    Student(const char a[], int n)
    {
            strcpy(name, a);
            for (int i = 0; i < 3; i++)
                    {
                            *(marks + i) = n;
                    }
    }
    Student(Student &s1)
    {
        printf("Copy constructor:\n");
        strcpy(name, s1.name);
        no_marks = s1.no_marks;
        marks = (int*)malloc(sizeof(int));
        for (int i = 0; i < no_marks; i++)
        {
                *(marks + i) = s1.marks[i];
        }
    }
    ~Student()
    {
        free(marks);
    }

    Student operator=(Student& s1)
    {
        cout << "\nCopiere prin utilizarea supraincarcarii operatorului de atribuire!\n";
        if (this != &s1)
        {
                strcpy(name, s1.name);
                no_marks = s1.no_marks;
                marks = (int*)malloc(sizeof(int));
                for (int i = 0; i < no_marks; i++)
                {
                        *(marks + i) = s1.marks[i];
                }
        }
        return *this;
    }
    
    void setData(char n[],int* c,int k)
    {
        strcpy(name, n);
        marks = c;
        no_marks = k;
    }
    void display()
    {
        cout<<"The name is: "<< name;
        cout<<"\nThe marks are: ";
        for (int i = 0; i < no_marks; i++)
        {
                cout<< marks[i]<<"\n";
        }
    }
};

int main()
{
    char name[DIM];
    int marks[DIM], no_marks;
    cout<<"Enter the name: ";
    cin>>name;
    cout<<"Enter the number of marks: ";
    cin>>no_marks;
    cout<<"Enter the marks: ";
    for (int i = 0; i < no_marks; i++)
    {
        cin>>marks[i];
    }

    Student student1(name, marks, no_marks);
    student1.display();

    Student student2(student1);
    student2.display();
    cout<<"Enter a name: ";
    cin>>name;
    cout<<"Enter the number of marks: ";
    cin>>no_marks;

    cout<<"Enter the marks: \n";

    for (int i = 0; i < no_marks; i++)
    {
        cin>>marks[i];
    }

    Student student3(name, marks, no_marks);
    student3.display();
    
    student3 = student1;
    student3.display();

    return 0;
}

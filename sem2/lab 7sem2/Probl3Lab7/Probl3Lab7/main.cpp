/*
 Horvath Daiana, E_2012
 Create a class named Student that has as private attributes the name, surname, some marks (array 7 int values), the group. Allocate the necessary amount of memory for storing n students. Determine the average mark with a method from the class for each student and use it for sorting the students. Display the ordered array (name, surname, group, average_mark). The destructor will display a message.
 */
#include<iostream>
#include<stdlib.h>
#include<string.h>
using namespace std;
#define dim 30
class Student{
private:
    char name[dim];
    char surname[dim];
    int marks[7];
    int group;
public:
    void set_name(char *n)
    {
        if (n != 0)
        strncpy(name, n, dim-1);
    else
        strcpy(name, "Necunoscut");
        
    }
    void set_surname(char *p)
    {
        if (p != 0)
        strncpy(surname, p, dim-1);
    else
        strcpy(surname, "Necunoscut");
    }
    void set_mark(int x, int i)
    {
        marks[i]=x;

    }
    void set_group(int y)
    {
        group=y;
    }
    char* getName()
    {
        return name;
    }
    char* getSurname()
    {
        return surname;
    }
    int* get_mark()
    {
        return marks;
    }
    int get_group()
    {
        return group;
    }
    float average_mark(int i, int n)
    {
        return (float)marks[i]/n;
    }
};
void readStudent(Student s);
int main()
{
    Student *s;
    int n, i;
    cout<<"Enter the number of studens: ";
    cin>>n;
    s=new Student[n];
    for (i=0; i<n; i++)
    {
        readStudent(*s);
    }
}
void readStudent(Student s)
{
    int a, i = 0;
    char string [30];
    cout<<"Enter the name of the student: ";
    cin>>string;
    s.set_name(string);
    cout<<"Enter the surname of the student: ";
    cin>>string;
    s.set_surname(string);
    cout<<"Enter the marks of the student(maximum 7): ";
    cin>>a;
    s.set_mark(a, i);
    cout<<"Enter the group of the student: ";
    cin>>a;
    s.set_group(a);
    
    
}

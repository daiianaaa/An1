/*
 Horvath Daiana, E_2012
 Develop a C/C++ program that displays the name, surname, and media of the student with the best results in the group after the winter exams. Define a user-type table of structures named Student, using dynamic memory allocation and a function that will return the record of the best student.
 */
#define _CRT_SECURE_NO_WARNINGS
#include<cstdio>
#include<stdlib.h>
struct student{
    char name[20];
    char surname[30];
    float result;
};
struct student med(struct student* a, int n);
void read(struct student* a);
void display(struct student a);
int main()
{
    struct student *a, max;
    int n, i;
    printf ("Enter the number of students: ");
    scanf ("%d", &n);
    a=(struct student*)malloc(n*sizeof(struct student));
    for (i=0; i<n; i++)
    {
        read(&a[i]);
    }
    max=med(a, n);
    printf ("The student with the best result is:\n");
    display(max);
    free (a);
    return 0;
    
    
        
}
void read(struct student *a)
{
    printf("Enter the name of the student: ");
    scanf("%s", a->name);
    
    printf ("Enter the surname of the student: ");
    scanf ("%s", a->surname);
    
    printf ("Enter the result of the student: ");
    scanf ("%f", &a->result);
}
void display(struct student a)
{
    printf ("The student with the result %.2f is %s %s ", a.result, a.name, a.surname);
}
struct student med(struct student* a, int n)
{
    int i;
    float max = 0.0;
    for (i=0; i<n; i++)
    {
        if (a[i].result>max)
        {
            max=a[i].result;
        }
    }
    for (i = 0; i < n; i++) {
        if (a[i].result == max) {
            return a[i];
        }
    }
    return a[0];
}

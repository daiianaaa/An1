/*
 Horvath Daiana, E_2012
 Using included structures, Data_calend with fields day, month, year and Personal_data with fields name, surname, occupation, code, department, birth_date and empl_date of type Data_calend, generate an array of structures of type Personal_data, containing couple of employees (max. 20), reading their data from the keyboard. Considering “engineer”, “teacher”, “student” and “manager” as possible values for the field occupation, display all engineer’s records.
 */
#define _CRT_SECURE_NO_WARNINGS
#include<cstdio>
#include<string.h>
#include<stdlib.h>
struct data_calend{
    int day;
    char month[20];
    int year;
    
};
struct personal_data{
    char nume[20];
    char prenume[20];
    char ocupatie[20];
    int data_nasterii;
    char sectie[20];
    struct data_calend c;
};
void read(struct personal_data *a);
void display(struct personal_data a);
int main()
{
    int n, i;
    printf ("Enter the number of the employees(max 20): ");
    scanf ("%d", &n);
    struct personal_data ang[20];
    for (i=0; i<n; i++)
    {
    read (&ang[i]);
    }
    printf ("The employees which are engineers are:\n ");
    for (i=0; i<n; i++)
    {
        if (strcmp(ang[i].ocupatie, "engineer")==0)
        {
            display(ang[i]);
        }
    }
    return 0;
    
}
void read(struct personal_data *a)
{
    printf ("Enter the name: ");
    scanf ("%s", a->nume);
    
    printf ("Enter the surname: ");
    scanf ("%s", a->prenume);
    
    printf ("Enter the occupation: ");
    scanf ("%s", a->ocupatie);
    
    printf ("Enter the date of birth: D/M/Y\n");
    scanf ("%d%s%d", &a->c.day, a->c.month, &a->c.year);
}
void display(struct personal_data a)
{
    printf ("The name of the employee is %s, the surname is %s, the occupation is %s and its date of birth is %d%s%d\n", a.nume, a.prenume, a.ocupatie, a.c.day, a.c.month, a.c.year);
}

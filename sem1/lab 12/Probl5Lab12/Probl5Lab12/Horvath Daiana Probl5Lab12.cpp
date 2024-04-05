/*
 Horvath Daiana, E_2012
 Using the previous array of structures, generate a list of records being sorted in ascending order by their code, and in descending order by the empl_date.
 */
#define _CRT_SECURE_NO_WARNINGS
#include<cstdio>
#include<string.h>
#include<stdlib.h>
struct data_calend{
    int day;
    int month;
    int year;
    
};
struct personal_data{
    char nume[20];
    char prenume[20];
    char ocupatie[20];
    char sectie[20];
    char cnp[20];
    struct data_calend date_birth;
    struct data_calend empl_date;
};
void read(struct personal_data *a);
void display(struct personal_data a);
int cmp_cnp(const void* a, const void* b);
int comp_empldate(const void* a, const void* b);
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
    
    printf ("The employees sorted by their CNP are:\n ");
    qsort(ang, n, sizeof(struct personal_data), cmp_cnp);
    for (i=0; i<n; i++)
    {
        display(ang[i]);
    }
    printf ("The employees sorted by their empl date are: ");
    qsort(ang, n, sizeof(struct personal_data), comp_empldate);
    for (i=0; i<n; i++)
    {
        display(ang[i]);
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
    
    printf ("Enter the code of the employees: ");
    scanf ("%s", a->cnp);
    
    printf ("Enter the empl date: D/M/Y\n");
    scanf ("%d%d%d", &a->empl_date.day, &a->empl_date.month, &a->empl_date.year);
    
    printf ("Enter the date of birth: D/M/Y\n");
    scanf ("%d%d%d", &a->date_birth.day, &a->date_birth.month, &a->date_birth.year);
}
void display(struct personal_data a)
{
    printf ("The name of the employee is %s, the surname is %s, the occupation is %s, the CNP is %s, its date of birth is %d %d %d and its empl date is %d %d %d \n", a.nume, a.prenume, a.ocupatie, a.cnp, a.date_birth.day, a.date_birth.month, a.date_birth.year, a.empl_date.day, a.empl_date.month, a.empl_date.year);
}
int cmp_cnp(const void* a, const void* b)
{
    personal_data* pa = (personal_data*)a;
    personal_data* pb = (personal_data*)b;
    return strcmp(pa->cnp, pb->cnp);
}
int comp_empldate(const void* a, const void* b)
{
    personal_data* pa = (personal_data*)a;
    personal_data* pb = (personal_data*)b;
    if (pa->empl_date.year == pb->empl_date.year)
    {
        if (pa->empl_date.month==pb->empl_date.month)
        {
            if (pa->empl_date.day==pb->empl_date.day)
            {
                return 0;
            }
            else
            {
                return pb->empl_date.day-pa->empl_date.day;
            }
        }
        else
        {
            return pb->empl_date.month-pa->empl_date.month;
        }
    }
    else
    {
        return pb->empl_date.year-pa->empl_date.year;
    }
}



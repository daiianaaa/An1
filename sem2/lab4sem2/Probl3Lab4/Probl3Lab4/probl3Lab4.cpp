/*
 Horvath Daiana, E_2012
 Use the library function "qsort( )" for sorting an array of records that contain a name, a surname, a personal identification code and an employment date. The sorting is based on the data stored in some specific fields (like name, employment date, etc.).
 */
#define CRT_SECURE_NO_WARNINGS
#include<cstdio>
#include<stdlib.h>
struct Date
{
    int day;
    char month[20];
    int year;
};
struct Angajat
{
    char name[20];
    char surname[20];
    struct Date c;
};
int sort_date(const void* a, const void* b);
int sort_name(const void* a, const void* b);
void read(struct Angajat *a);
void display(struct Angajat *a);

int main()
{
    int n, i;
    printf ("Enter the number of the employees: ");
    scanf ("%d", &n);
    struct Angajat ang[20];
    for (i=0; i<n; i++)
    {
    read (&ang[i]);
    }
    qsort(ang, n, sizeof(Angajat), sort_date);
    printf("\nEmployees sorted by date: \n");
    for (int i = 0; i < n; i++)
    {
        display(ang + i);
        printf("\n");
    }
    qsort(ang, n, sizeof(Angajat), sort_name);
    printf("Employees sorted by name: \n");
    for (int i = 0; i < n; i++)
    {
        display(ang + i);
        printf("\n");
    }
    return 0;
    
}
void read(struct Angajat *a)
{
    printf ("Enter the name: ");
    scanf ("%s", a->name);
    
    printf ("Enter the surname: ");
    scanf ("%s", a->surname);
    
    printf ("Enter the date of employment: D/M/Y\n");
    scanf ("%d%s%d", &a->c.day, a->c.month, &a->c.year);
}
void display(struct Angajat *a)
{
    printf ("The name of the employee is %s, the surname is %s its date of employment is %d %s %d\n", a->name, a->surname, a->c.day, a->c.month, a->c.year);
}
int sort_name(const void* a, const void* b)
{
   char* c1 = (char*)a;
   char* c2 = (char*)b;
   int k = 0;
   while (*(c1 + k) && *(c2 + k))
   {
           if (*(c1 + k) > *(c2 + k))
                   return 1;
           if (*(c2 + k) > *(c1 + k))
                   return -1;
   }
   if (!(*(c1 + k)))
           return -1;
   if (!(*(c2 + k)))
           return 1;
   return 0;
}
int sort_date(const void* a, const void* b)
{
        Date d1 = *(Date*)a;
        Date d2 = *(Date*)b;
        if (d1.year > d2.year)
                return 1;
        else
                if (d1.year < d2.year)
                        return -1;
                else
                        if (d1.month > d2.month)
                                return 1;
                        else
                                if (d2.month > d1.month)
                                        return -1;
                                else
                                        if (d1.day > d2.day)
                                                return 1;
                                        else
                                                if (d1.day < d2.day)
                                                        return -1;
        return 0;
}

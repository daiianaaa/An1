/*
 Horvath Daiana, E_2012
 Write a C/C++ application that allocates dynamically memory for the data of n students (surname, name, gendre), reading from the keyboard all the required info, the program displays the number of female students and frees up the allocated memory.
 */
#define _CRT_SECURE_NO_WARNINGS
#include<cstdio>
#include<string.h>
#include<stdlib.h>
struct student{
    char name[20];
    char surname[20];
    char gendre[20];
    
};
void read(struct student *a);
int fem(struct student *a, int n);
int main()
{
    struct student *a;
    int n, i;
    printf ("Enter the number of students: ");
    scanf("%d", &n);
    a=(struct student*)malloc(n*sizeof(struct student));
    for (i=0; i<n; i++)
    {
        read(&a[i]);
    }
    printf ("The number of female students is %d\n", fem(a, n));
    free(a);
    return 0;
    
}
void read(struct student *a)
{
    printf ("Enter the name of the student: ");
    scanf("%s", a->name);
    
    printf("Enter the surname of the student: ");
    scanf ("%s", a->surname);
    
    printf ("Enter the gender of the student: ");
    scanf ("%s", a->gendre);
}

int fem(struct student *a, int n)
{
    int i, nr=0;
    for (i=0; i<n; i++)
    {
        if (strcmp(a[i].gendre, "female")==0)
        {
            nr++;
        }
    }
    return nr;
}

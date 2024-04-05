/*
 Horvath Daiana, E_2012
 Develop a C/C++ application considering an adequate data structure named Student having the fields: name, surname, country, group and birth_year. Count all the non- Romanian students from the group (MAX students in the group). The effective fields will be introduced from the keyboard generating an array of structures. A name AAA (upper or lower case) will finish the introduction process.
 */
#define CRT_SECURE_NO_WARNINGS
#include<cstdio>
#include<string.h>
#include<stdlib.h>
struct Student{
    char name[30];
    char surname[30];
    char country[30];
    int group;
    int birth_year;
};
void display(struct Student *s);
int main()
{
    struct Student *st;
    void *p;
    st=(struct Student*)malloc(sizeof(struct Student));
    int n = 0, i;
    do
    {
        p=realloc(st,(n+1)*sizeof(struct Student));
        
        printf ("The name of the student is: (Press AAA if you want to finish the process)\n");
        scanf("%s", st[n].name);
        if (strcmp(st[n].name, "AAA")==0)
        {
        break;
        }
        printf ("The surname of the student is:\n ");
        scanf ("%s", st[n].surname);
        
        printf ("The country of the student is:\n ");
        scanf ("%s", st[n].country);
        
        printf ("The group of the student is:\n ");
        scanf ("%d", &st[n].group);
        
        printf ("The birth year of the student is:\n ");
        scanf ("%d", &st[n].birth_year);
        n++;

    }while(true);
    printf ("The students which are not from Romania: \n ");
    for (i=0; i<n; i++)
    {
        if (strcmp(st[i].country, "Romania")!=0)
        {
            display(&st[i]);
        }
    }
    free (st);
    return 0;
        
}
void display(struct Student *s)
{
    printf ("The student's name is %s, the surename is %s, the country from which he comes is %s, the group is %d and the birth year is %d\n",s->name, s->surname, s->country, s->group, s->birth_year);
}

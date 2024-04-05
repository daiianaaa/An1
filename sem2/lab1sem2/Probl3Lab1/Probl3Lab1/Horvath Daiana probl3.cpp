/*
 Horvath Daiana, E_2012
 Consider a Student data structure, which contains a string field (maximum 30) for name_surname and another note field of type int. Define a Student object where the data will be read from the keyboard. Validate that name_surname has at least 5 characters and the note should be> = 5 and <=10. Display the object fields if entered correctly.
 */
#define _CRT_SECURE_NO_WARNINGS
#include<cstdio>
#include<assert.h>
#include<string.h>
void read(struct Student* s);
void write (struct Student* s);

struct Student
{
    char name_surname[30];
    int mark;
};
int main()
{
    int n, i;
    Student* s;
    printf ("Enter the number of the students: ");
    scanf ("%d", &n);
    s=(struct Student*)malloc(n*sizeof(struct Student));
    for (i=0; i<n; i++)
    {
        read(&s[i]);
    }
    printf ("The students which have the correct fields entered are:\n");
    for (i=0; i<n; i++)
    {
        write(s+i);
    }
    free (s);
    return 0;
}
void read (struct Student* s)
{
    printf ("Enter the name and surname: ");
    scanf ("%[^\n]%*c", s->name_surname);
    assert(strlen(s->name_surname) >= 5);
    
    printf ("Enter the note: ");
    scanf ("%d", &s->mark);
    assert((s->mark >= 5)&&(s->mark <= 10));
}
void write (struct Student* s)
{
    printf ("The student %s which has the mark %d\n", s->name_surname, s->mark);
}

/*
 Horvath Daiana, E_2012
 This program reads from the keyboard the names and the marks of 2 students (each student has a single mark) and displays on separate lines, the name of each student (right aligned and left aligned) in two 20 characters fields and their marks with 2 digits precision.
 */
#define _CRT_SECURE_NO_WARNINGS
#include<cstdio>
float calcMedie(int, int);
const int dim=100;


int main()
{
    char name1[dim], name2[dim];
    int n1, n2;
    
   
    printf("The first name is: \n");
    scanf("%s", name1);
    
    printf("The mark of the first student is: \n");
    fflush(stdin);
    scanf("%d", &n1);
    
    printf ("The second name is: \n");
    scanf ("%s", name2);
    
    printf("The mark of the second student is: \n");
    fflush(stdin);
    scanf("%d", &n2);
    
    printf ("The first name of the first student is: %+20.20s\n", name1);
    printf("The first name of the second student is: %-20.20s\n", name2);
    printf ("The media is: %-10.2f\n", calcMedie(n1, n2));
    return 0;
    
}
float calcMedie(int a, int b)
{
    float medie;
    medie=(a+b)/2.0f;
    return medie;
}

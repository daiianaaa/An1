/*
 Horvath Daiana, E_2012
 This program reads from the keyboard n real numbers, stores them into a dinamically allocated array, displays the sum of the negative elements and frees the allocated memory.
 */
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int main()
{
int i,n, *tab=NULL, s=0;
printf("Enter the dimension of the array: ");
scanf("%d", &n);
if((tab = (int *)malloc(n * sizeof(int))))
{
    for(i=0; i<n; i++)
    {
        printf("\t tab[%d]= ", i);
        scanf("%d", tab+i);
        
    }
    for(i=0; i<n; i++)
    {
        if (*(tab+i)<0)
        {
            s+=*(tab+i);
        }
    }
    
}
else
printf("Allocation failed!\n");
    if (s==0)
    {
        printf ("There are not negative elements in the array!\n");
    }
    else
    printf ("The sum of the negative elements is %d\n", s);
if(tab)
free(tab);
    return 0;
}



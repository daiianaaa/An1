/*
 Horvath Daiana, E_2012
 This program, considering the algorithm that directly introduces the numbers from KB in a sorted mode in a one-dimensional array, uses the mechanism to access by pointers the elements. Develop a C/C++ application considering a function having as formal parameters a pointer to a one-dimensional array of float type and the dimension. (void dir_sort(float *, int n);)
 */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void dir_sort(float *p, int n);
int main()
{
   int n;
   float f[101],*pf;
   printf ("Introduce the number of elements: ");
   scanf("%d",&n);
   pf=f;
   dir_sort(pf,n);
   pf=f;
   while(pf-f<n)
   {
       printf("%f ",*pf);
       pf++;
   }
}
void dir_sort(float *p, int n)
{
    int i;
    float x, *pf;
    for(i=0; i<n; i++)
    {
        scanf("%f",&x);
        pf=p+i-1;
        while((pf-p)>=0 && x<(*pf))
        {
            *(pf+1)=*pf;
            pf--;
        }
        *(pf+1)=x;
    }
}

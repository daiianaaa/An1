/*
 Horvath Daiana, E_2012
Generate in a random mode maximum 200 smaller than 100 integer numbers and store them into an array.
 Determine and display the minimum, the median and the maximum value and sort the array in order to
 accomplish that. Determine the average value and display the difference between it and the calculated median.
 Check if the average value is part of the initial array.
 */

 #define _CRT_SECURE_NO_WARNINGS
 #include <stdio.h>
 #include<stdlib.h>
 #include <time.h>
 int cmp(const void* a, const void* b);
 int avg(int* v, int n);
 void dif(int* v, int n);
 void check_avg(int*, int);
 int main()
 {
     int n;
     printf("Enter the number of elements u want to generate: \n");
     scanf("%d", &n);
     if (n > 200)
     {
         printf("Enter maxium 200 numbers.");
         return 0;
     }
     int* v = (int*)malloc(n*sizeof(int));
     for (int i = 0; i < n; i++)
     {
             *(v + i) = rand() % 100;
     }
     printf("Your array is:\n");
     for (int i = 0; i < n; i++)
     {
             printf("%d ", *(v + i));
     }
     qsort((int*)v, n, sizeof(int), cmp);
     printf("\nThe minimum value is: %d", *(v + 0));
     printf("\nThe median value is: %d", *(v + n/2));
     printf("\nThe maximum value is: %d", *(v + n-1));
     printf("\nThe average value is: %d", avg(v,n));
     dif(v, n);
     check_avg(v, n);
     free (v);
     return 0;
}

int cmp(const void* a, const void* b)
{
     return (*(int*)a - *(int*)b);
}

int avg(int* v, int n)
{
     int avg = 0;
     for (int i = 0; i < n; i++)
     {
             avg += *(v + i);
     }

     return avg / n;
}

void check_avg(int* v, int n)
{
     int a = avg(v, n);
     int ok = 0;
     for (int i = 0; i < n; i++)
     {
             if (*(v + i) == a)
                     ok = 1;
     }
     if(ok==1)
             printf("\nThe average value is in the array \n");
     else
     {
     printf("\nThe average value is not in the array \n");
     }
}


void dif(int* v, int n)
{
     if((*(v+n/2) - avg(v, n))>0)
     printf("\nThe difference between the average value and the median is: %d", *(v + n / 2) - avg(v, n));
     else
     {
     printf("\nThe difference between the average value and the median is: %d", avg(v, n)- *(v + n / 2));
     }
}


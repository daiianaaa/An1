/*
 Horvath Daiana, E_2012
 Add some new sorting methods to the code presented in the examples area (example 2 - selection sort, shell sort, etc.). Read from the keyboard the number of elements from the array and pass it as parameter to each sorting function. Compare the working times scored by each implemented sorting algorithm.
 */
#define _CRTT_SECURE_NO_WARNINGS
#include<cstdio>
#include<stdlib.h>
void SortIns(int *p, int n);
void SortSel(int *p, int n);
void SortBoubble(int *p, int n);
void QuickSort(int *p, int prim, int ultim);
int comparare( const void *arg1, const void *arg2 );
int main()
{
    int n,*p;
    printf("Introduceti numarul de elemente ce urmeaza a fi citite:");
    scanf("%d",&n);
    p=new int[n];
    for(int i=0;i<n;i++)
    {
        printf("Introduceti p[%d]=",i);
        scanf("%d",&p[i]);
        
    }
    SortBoubble(p,n);
    QuickSort(p,0,n-1);
    SortSel(p,n);
    SortIns(p,n);
    qsort( (int*)p, n, sizeof( int ), comparare);
    printf("Sirul sortat este:\n");
    for(int i=0;i<n;i++)
    {
        printf("%d ",p[i]);
        
    }
    delete p;
    
}
void SortBoubble(int *p, int n)
{
    int i, j, temp;
    for(i=1; i<n; i++)
    {
        for(j=n-1; j>=i; j--)
        {
            if(p[j-1] < p[j])
            {
                temp = p[j];
                p[j] = p[j-1];
                p[j-1] = temp;
                
            }
            
        }
        
    }
    
}
void SortSel(int *p, int n)
{
    int i, j, pozmin, temp;
    for(i=0; i<n; i++)
    {
        pozmin = i;
        for(j=i+1; j<n; j++)
        {
            if(p[pozmin] < p[j])
                pozmin = j;
            
        }
        temp = p[pozmin];
        p[pozmin] = p[i];
        p[i] = temp;
        
    }

    
}
void QuickSort(int *p, int prim, int ultim)
{
    int i, j, pivot, temp;i = prim;
    j = ultim;
    pivot = p[ultim];
    do{
        while(p[i] > pivot)
            i++;
        while(p[j] < pivot)
            j--;
        if(i < j)
        {temp = p[i];
            p[i] = p[j];
            p[j] = temp;
            
        }
        if(i <= j)
        {
            j--;
            i++;
            
        }
        
    }while(i < j);
    if(prim < j)
        QuickSort(p, prim, j);
    if(i < ultim)
        QuickSort(p, i, ultim);
    
}
void SortIns(int *p, int n)
{
    int i, j, temp;
    for(i=1; i<n; i++)\
    {
        temp = p[i];
        for(j=i-1; j>=0; j--)
        {
            if(p[j] < temp)
                p[j+1] = p[j];
            else
                break;
            
        }
        p[j+1] = temp;
        
    }
    
}
    
int comparare(const void *arg1, const void *arg2)
{
    if(*(int *)arg1<*(int *)arg2)
        return 1;
    if(*(int *)arg1==*(int *)arg2)
        return 0;
    if(*(int *)arg1>*(int *)arg2)
        return -1;
    return 0;
}





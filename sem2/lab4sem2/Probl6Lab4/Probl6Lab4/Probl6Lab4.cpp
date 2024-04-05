/*
 Horvath Daiana, E_2012
 Read from the keyboard a string of m integers and an integer value n<m. Split the string in 2 substrings as it follows:
 a) the first substring will contain the first n elements of the initial string
 b) the second substring will contain the rest elements of the initial string
 Realize the following operations:
 - sort increasingly the substrings
 - sort the initial string, by interlacing the sorted substrings (merge-sort)
 */
#include<stdio.h>
#include<stdlib.h>
int comparare(int *v1,int *v2);
int main()
{
    int m,n=0,*sir,*sir1,*sir2;
    printf("Introduceti numarul de elemente ale sirului initial: ");
    scanf("%d",&m);
    sir=new int[m];
    for(int i=0;i<m;i++)
    {
        printf("Introduceti sir[%d]: ",i+1);
        scanf("%d",&sir[i]);
        
    }
    while(!n)
    {
        printf("Introduceti  un numar n<%d: ",m);
        scanf("%d",&n);
        if(!(n<m))
        {
            printf("Numarul introdus nu este mai mic ca si %d: ",m);
            n=0;
        }
    }
    sir1=new int[n];
    sir2=new int[m-n];
    for(int i=0;i<n;i++)
    {
        sir1[i]=sir[i];
        
    }
    for(int i=m-n,j=0;i<m;i++)
    {
        sir2[j]=sir[i];
        
    }
    int i=0,j=0,k=0;
    qsort( (int *)sir1, n, sizeof( int ), (int (*) (const void *, const void *)) comparare );
    qsort( (int *)sir2, m-n, sizeof( int ), (int (*) (const void *, const void *)) comparare);
    while(i+j<m+1)
    {
        if(sir1[i]<sir2[j])
        {
            if(i<n)
                sir[k++]=sir1[i++];
            else sir[k++]=sir2[j++];
            
        }
        else
        {
            if(j<m-n)
                sir[k++]=sir2[j++];
            else
                sir[k++]=sir1[i++];
            
        }
        if(k-1)
            if(sir[k-1]==sir[k-2])
                k--;
    }
    printf("Sirul interclasat este: ");
    for(int i=0;i<k-1;i++)
    {
        printf("%d, ",sir[i]);
        
    }
    return 0;
    
}
int comparare(int *v1,int *v2)
{
    return *v1-*v2;
    
}

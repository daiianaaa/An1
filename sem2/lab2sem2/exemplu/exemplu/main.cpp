#include<iostream>
using namespace std;
const int dim = 20;
 int k=0;
double mediaEven(int* a, int n);
int sumEven(int *a, int n);
int main( ) {
int a[dim], s=0, n;
cout << "How many elements? (n>0, n<20) ";//printf("How many elements? (n>0, n<20) ") ;
    cin >> n;// scanf("%d", &n) ;
cout << "\nEnter " << n << " int elements:" << endl;//printf("\nEnter %d elements:\n", n) ;
    for (int i = 0; i < n; i++)
cin >> a[i];//scanf("%d", &a[i])
cout << "Media of even elements (recursive)= " << mediaEven(a, n);
    //printf("Media of even elements (recursive)= %.2lf ", mediaEven(a, n));
    k = 0;
s = sumEven(a, n);
cout << "\nSum of even elements (recursive)= " << s << " even numbers = " << k << " Media with sum= " << s / (double)k;
//printf("\nSum of even elements (recursive)= %d even numbers = %d Media with sum = %.2lf", s, k, s/(double)k);
}//main
double mediaEven(int* a, int n)
{ if (n == 0) return 0;
else if (a[n - 1] % 2 == 0)
{ k++; return mediaEven(a, n - 1) + (double)a[n - 1] / k;
    
}
else return mediaEven(a, n - 1);
    
}//mediaEven
int sumEven(int *a, int n)
{
if (n == 0) return 0;
else if (a[n - 1] % 2 == 0)
{ k++; return sumEven(a, n - 1) + a[n - 1];
    
}
else return sumEven(a, n - 1);
    
}//sumEven

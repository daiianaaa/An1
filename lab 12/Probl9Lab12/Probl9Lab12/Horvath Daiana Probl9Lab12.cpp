/*
 Horvath Daiana, E_2012
 Write a C/C++ application that allocates the necessary amount of memory for storing n products, using a structure named Product having the fields: name, price, quantity. After reading from the keyboard each product’s data, display the item that has the biggest stock value. Free up the allocated memory.
 */
#define _CRT_SECURE_NO_WARNINGS
#include<cstdio>
#include<stdlib.h>
struct product{
    char name[20];
    float price;
    int quantity;
};
void read(struct product *a);
void display(struct product *a);
void biggestStock(struct product *a, int n);
int main()
{
    struct product *a;
    int n, i;
    printf ("Enter the number of products: ");
    scanf ("%d", &n);
    a=(struct product*)malloc(n*sizeof(struct product));
    for (i=0; i<n; i++)
    {
        read(&a[i]);
    }
    biggestStock(a,n);
    display(a);
    free (a);
    return 0;
    
}
void read(struct product *a)
{
    printf ("Enter the name of the product: ");
    scanf ("%s", a->name);
    
    printf ("Enter the price of the product: ");
    scanf ("%f", &a->price);
    
    printf ("Enter the quantitiy of the product: ");
    scanf ("%d", &a->quantity);
}
void display(struct product *a)
{
    printf ("The product %s which has the price %.2f and the quantity %d has the biggest stock.\n", a->name, a->price, a->quantity);
}
void biggestStock(struct product *a, int n)
{
    int i, max=0;
    for (i=0; i<n; i++)
    {
        if (a[i].quantity>max)
        {
            max=a[i].quantity;
        }
    }
}

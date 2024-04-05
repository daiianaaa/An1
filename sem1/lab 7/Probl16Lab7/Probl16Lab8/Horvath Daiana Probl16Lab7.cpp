/*
 Horvath Daiana, E_2012
 This program..
 */
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
int main()
{
    int n,s=0,nr=0,a;
    bool ok=true;

    while(ok)
    {
        printf ("Enter an integer number: ");
        scanf ("%d", &n);
        if (n>0 && n%2!=0)
        {
            s=s+n;
            nr++;
        }
        
        printf ("The program will end if you press ESC: ");
        cin.get();
        a=cin.get();
        if (a==27)
        {
            ok=false;
        }
        printf ("%d", a);
    }
    
    printf ("The media of the numbers is: %.2f\n", (float)s/nr);
    return 0;
}

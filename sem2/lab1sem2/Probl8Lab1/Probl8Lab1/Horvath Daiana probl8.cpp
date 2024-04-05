/*
 Horvath Daiana, E_2012
 Write a program that displays the name of the program, the compilation date and time and the number of code lines included in the program.
 */
#define _CRT_SECURE_NO_WARNINGS
#include<cstdio>
int main()
{
    printf ("The name of the program is: %s\n", __FILE__);
    printf ("The date and the time of the compilation is: %s %s\n", __DATE__, __TIME__);
    printf ("The number of code lines included in the program is: %d \n", __LINE__);
    return 0;
}


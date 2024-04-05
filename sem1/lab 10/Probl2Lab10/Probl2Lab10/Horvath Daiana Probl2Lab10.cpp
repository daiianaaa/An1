/*
 Horvath Daiana, E_2012
 This program considers two integer and two float parameters from the command line, display the sum and the product of these parameters.
 */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main( int argc, char *argv[] )  {

int a,b;
float c,d;
if( argc == 5 )
{
  printf("The arguments supplied are %s %s %s %s\n", argv[1],argv[2],argv[3],argv[4]);
  a=atoi(argv[1]);
  b=atoi(argv[2]);
  c=atof(argv[3]);
  d=atof(argv[4]);
  printf("The sum of the numbers is : %.2f\n",(float)(a+b+c+d));
  printf("The product of the numbers is: %.2f\n", (float)(a*b*c*d));

  
}
else if( argc > 5 ) {
  printf("Too many arguments supplied.\n");
}
else
{
  printf("One argument expected.\n");
}
return 0;
}

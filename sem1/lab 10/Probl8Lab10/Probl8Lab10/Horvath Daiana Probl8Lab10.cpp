/*
 Horvath Daiana, E_2012
 This program inverts a string of characters read from the command
 line.
 */
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(int argc, char* argv[])
{

  size_t l = strlen(argv[1]);
  char* r = (char*)malloc((l + 1) * sizeof(char));
  r[l] = '\0';
  int i;
  for(i = 0; i < l; i++)
  {
    r[i] = argv[1][l - 1 - i];
  }
  printf("normal: %s\n", argv[1]);
  printf("reverse: %s\n", r);
  free(r);
  r=NULL;
  return 0;

}

    


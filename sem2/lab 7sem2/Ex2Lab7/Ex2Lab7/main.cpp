
// test program - main
#include <iostream>
#include<string.h>
using namespace std;
#include "Stiva.h"

int
main ()
{
  unsigned int i;
  char buf1[dim_char] = "Bafta in sesiune !", buf2[dim_char], buf3[dim_char];    //strcpy_s(buf1, "Bafta in sesiune !");
  cout << endl << "Initial string: " << buf1 << endl;
  Stiva mesaj1;
  for (i = 0; i < (strlen (buf1)); i++)
    mesaj1.push (buf1[i]);
  i = 0;
  while (!mesaj1.isEmpty ())
    mesaj1.pop (buf2[i++]);
  buf2[i] = '\0';
  cout << endl << " push() -> pop() -> reverse: " << buf2 << endl;
// re-populate mesaj1
  for (i = 0; i < (strlen (buf1)); i++)
    mesaj1.push (buf1[i]);    // copy constructor -init
  Stiva mesaj2 (mesaj1);
  i = 0;
  while (!mesaj2.isEmpty ())
    mesaj2.pop (buf3[i++]);
  buf3[i] = '\0';
  cout << endl << "Copy previous object: " << buf3 << endl;
  char sTest[15] = "Sir_de_test";
  cout << endl << "Test string: " << sTest << endl;
  Stiva mesaj3 ((int) strlen (sTest) + 1);    //second constructor
    for (i = 0; i < (strlen(sTest)); i++)
  mesaj3.push (sTest[i]);
// copy constructor -init with assign
    Stiva mesaj4 = mesaj3;
  i = 0;
  while (!mesaj4.isEmpty ())
    mesaj4.pop (sTest[i++]);
  sTest[i] = '\0';
  cout << endl << "Copy initial test string extracted with pop(): " << sTest
    << endl;
}                //main


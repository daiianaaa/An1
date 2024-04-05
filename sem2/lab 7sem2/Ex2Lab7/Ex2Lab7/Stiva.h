#include<iostream>
using namespace std;
const int dim_char = 256;
class Stiva
{
  int dim;
  char *stack;
  int next;
public:
    Stiva ();
    Stiva (int);
    Stiva (const Stiva &);
   ~Stiva ();
  int push (char c);
  int pop (char &c);
  int isEmpty (void);
  int isFull (void);
};
//constructors
Stiva::Stiva() {
next = 0;
dim = dim_char;
stack = new (std::nothrow)
     char[dim];
}

Stiva::Stiva (int dim_i)
{
  next = 0;
  dim = dim_i;
  stack = new (std::nothrow) char[dim];
}

// copy constructor
Stiva::Stiva(const Stiva& instack)
{
next = instack.next;
dim = instack.dim;
stack = new (std::nothrow)
     char[dim];
for (int i = 0; i < dim; i++)
  stack[i] = (char) instack.stack[i];
cout << "\nCopy constructor\n";
}

//destructor
Stiva::~Stiva ()
{
  delete[]stack;
  cout << "\nDestructor\n";
}

//isEmpty
int
Stiva::isEmpty ()
{
  if (next <= 0)
    return 1;
  else
    return 0;
}

//isFull
int
Stiva::isFull ()
{
  if (next >= dim)
    return 1;
  else
    return 0;
}

// push
int
Stiva::push (char c)
{
  if (isFull ())
    return 0;
  *(stack + next) = c;
  next++;
  return 1;
}

// pop
int
Stiva::pop (char &c)
{
  if (isEmpty ())
    return 0;
  next--;
  c = *(stack + next);
  return 1;
}


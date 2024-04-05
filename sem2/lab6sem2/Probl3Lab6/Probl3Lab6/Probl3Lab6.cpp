/*
 Horvath Daiana, E_2012
 Starting from the example that deals with Matrix class, consider as attributes the matrix given by a double pointer to allocate an array of pointers to the rows of the matrix (or simple pointer to the contiguous dynamic allocation of the matrix), and two attributes of type int for the number of rows and columns. The two-parameter constructor will dynamically allocate space for the array by initializing the elements with 0. Implement an explicit destructor to free up space. Define a public method void setElement (int l, int c, int v) that will set an element with the value v, on row l and column c. Declare a global function void readMatrix (Matrix m) that will have as parameter a matrix object that will have the dimensions validated in main() so that the dimensions are correct, >1 and <= 10, and that will read the elements of the matrix from the keyboard (it will also use the public method setElement()). The method displayMatrix() from the class will be defined as a global function just like readMatrix() considering the getElement() method as a public method. The method of displaying a column will not validate the column number, the column being validated in main().
 Fill in the written code specific methods for:
 - displaying the elements from the main diagonal of the matrix, in case the matrix is square;
 if not, display a significant message.
 - displaying the elements which are below the secondary diagonal.
 - displaying a matrix that has identical dimensions with the original matrix and its elements
 can have as possible values 0’s (if the corresponding element is less than a previously read value of the threshold) or 1 (otherwise), and check if the matrix is rare, > = 67% of the elements are zero);
 Redo the application in which you consider the getElement() and setElement() private methods and the readMatrix() and displayMatrix() functions, public member methods within the class.
 */
#include <iostream>
using namespace std;
class Matrix
{
    int matrix[10][10], dim1, dim2;
private:
    int returnElement(int row, int column);
public:
    Matrix()
{
    int i, j;
    cout<<"\nIntroduceti dimensiunile matricii: ";
    cin>>dim1;
    cin>>dim2;
    cout<<"\nIntroduceti elementele matricii: ";
    for(i=0; i<dim1; i++)
    {
        for(j=0; j<dim2; j++)
        {
            cout<<"\nmatrix["<<i<<"]["<<j<<"] = ";
            cin>>matrix[i][j];
        }
    }
}
void displayMatrix()
{
    int i, j;
    cout<<"\nElementele matricii: ";
    for(i=0; i<dim1; i++)
    {
        cout<<"\n";
        for(j=0; j<dim2; j++)
        {
            cout<<returnElement(i, j)<<" ";
        
        }
    }
    cout<<"\n";
    
}
void displayDiagonal()
{
    if(dim1==dim2)
    {
        cout<<"Diagonala principala contine urmatoarele elemente: ";
        for(int i=0;i<dim1;i++)
        {
            cout<<returnElement(i,i);
            if(i!=dim1-1)
            cout<<", ";
            else
            cout<<"."<<endl;
        }
    }
    else
    {
        cout<<"Matricea nu este patratica=>diagonala principala nu poate fi afisata";
    }
  cout << endl;
}
void displayunderDiagonal ()
{
    int i, j;
    cout<<"\nElementele matricii: ";
    for(i=0; i<dim1; i++)
    {
        cout<<"\n";
        for(j=0; j<dim2; j++)
        {
            if(i>j)
                cout<<returnElement(i, j)<<" ";
        }
    
    }
    cout<<"\n";
    
}
void displayAnother(int v)
{
    int i, j, t;
    cout<<"\nElementele matricii: ";
    for(i=0; i<dim1; i++)
    {
        cout<<"\n";
        for(j=0; j<dim2; j++)
            {
                t=returnElement(i, j)>v?0:1;
                cout<<t<<" ";
            
            }
    
}
cout<<"\n";
    
}
    
void displayColumn(int col);
};
void Matrix::displayColumn(int col)
{
    if(col<0||col>dim2)
    {
        cout<<"\nColoana cu numarul "<<col<<" nu exista in matricea din clasa!\n";
        
    }
    else{
        cout<<"\nElementele coloanei "<<col<<": ";
        for(int i=0; i<dim1; i++)
        {
            cout<<returnElement(i, col)<<" ";
            
        }
        
    }
  cout << endl;
}
int Matrix::returnElement (int row, int column)
{
  return matrix[row][column];
}

int main ()
{
  Matrix m1;
  int c;m1.displayMatrix();
  cout<<"\nIntroduceti un numar de coloana ale carei elemente vor fi afisate: ";
  cin>>c;
  m1.displayColumn(c);
  m1.displayDiagonal();
  m1.displayunderDiagonal();
  cout<<"\nIntroduceti o valoare de referinta pentru matrice:";
  cin>>c;
  m1.displayAnother(c);//incercare (imposibila) de a accesa direct un membru privat al clasei//
  //m1.returnElement(0, 0);
  return 0;
}

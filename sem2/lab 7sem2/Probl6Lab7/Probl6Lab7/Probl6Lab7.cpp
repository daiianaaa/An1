/*
 Horvath Daiana, E_2012
 Define a class called Complex that stores the double variables real, imag and a pointer of character type that holds the name of the complex number. Define an explicit constructor with 2 parameters that have 1.0 as implicit value. The constructor also initializes the pointer with a 15 characters wide memory zone. Define a copy constructor for this class. Implement the mutator/setter and accessor/getter methods for each variable stored inside the class. All the operations related to the complex numbers are also emulated using some specific methods. An explicit destructor method is also part of the class. Define an array of not more than 10 complex numbers. Determine the sum of all the numbers in this array and use this value for initializing a new instance of the class named complex_sum. Repeat this action for all the rest of the operations implemented inside the class.
 */
#include <iostream>
using namespace std;
#define DIM 10

class Complex{
private:
    double real, imag;
    char *name;
public:
    //constructor
    Complex(double re = 1.0, double im = 1.0){
        real = re;
        imag = im;
        name = new char[7];
    }
    //copy constr
    Complex(const Complex &nr){
        name = new char[strlen(nr.name) + 1];
        strcpy(name, nr.name);
    }
    void setName(char *name){
            this->name = name;
        }
    void setReal(double r){
        this->real = r;
    }
    void setImag(double i){
        this->imag = i;
    }
    char* getName(){
            return name;
        }

    double getReal(){
        return real;
    }

    double getImag(){
        return imag;
    }

    
};

int main(){
    double sum_r = 0, sum_im = 0, dif_r = 0, dif_im = 0;
    char *name = "sum", *name2 = "dif";
    Complex num[10];
    for (int i = 0; i < DIM; i++)
    {
        sum_r= sum_r + num[i].getReal();
        dif_r= dif_r - num[i].getReal();
        sum_im = sum_im + num[i].getImag();
        dif_im = dif_im - num[i].getImag();
    }
    Complex nr;
    nr.setImag(sum_im);
    nr.setReal(sum_r);
    nr.setName(name);
    cout << "Numarul " << nr.getName() << " este:" << nr.getReal() << "+" << nr.getImag() << "i";
    Complex nrDif;
    nrDif.setImag(dif_im);
    nrDif.setReal(dif_r);
    nrDif.setName(name2);
    cout << "\nNumarul " << nrDif.getName() << " este:" << nrDif.getReal() << "+" << nrDif.getImag() << "i";
    return 0;
}

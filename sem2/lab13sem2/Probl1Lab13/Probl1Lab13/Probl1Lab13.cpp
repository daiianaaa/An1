/*
 Horvath Daiana, E_2012
 Write a program that uses the seekg( ) method for mid-file positioning and then displays the file’s content, starting with this position. The filename is read from the command line.
 */
#include<iostream>
#include<fstream>
using namespace std;
int main(int argc, char*argv[])
{
    long long var;
    char car;
    if (argc!=2) {
        cout <<"Specificati numele fisierului! \n" ;
        exit(1);
    }
    ifstream in;
    in.open(argv[1]);
    if(!in)
    {
        cout <<"Nu poate deschide fisierul";
        exit(1);
    }
    
    in.seekg(0, in.end);
    var=in.tellg();//current position in the stream
    in.seekg(var/2);
    
   
    do {
        in >> car;
        if (in.eof())
            break;
        cout << car << " ";
        
    }
    while (true);
    in.close();
    return 0;
    
}

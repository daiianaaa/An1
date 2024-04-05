class String
{
private:
    char *sir;
    int DIM;
public:
    String()
    {
        DIM=100;
        sir=new char[DIM];
    }//alocare
    ~String()
    {
        delete []sir;
    }//dealocare
    void init()
    {
        std::cout<<"Introduce the array: ";
        std::cin>>sir;
    }
    size_t Len()
    {
        size_t k;
        k=strlen(sir);
        return k;
    }//a
    int Last_index(int n, char c)
    {
        int i, poz = 0;
        for (i=0; i<n; i++)
        {
            if (sir[i]==c)
            {
                poz=i+1;
            }
        }
        return poz;
    }//b
    void Capital_letter(int n)
    {
        int i;
        for (i=0; i<n; i++)
        {
            std::cout<<(char)toupper(sir[i]);
        }
    }//c
    int Nr_App(int n, char c)
    {
        int i, k=0;
        for (i=0; i<n; i++)
        {
            if (sir[i]==c)
            {
                k++;
            }
        }
        return k;
    }//d
    
};

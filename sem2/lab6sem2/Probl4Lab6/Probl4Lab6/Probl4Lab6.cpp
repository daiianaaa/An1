/*
 Horvath Daiana, E_2012
 Write a C++ class that has as private variable a date field. The date is defined as a structure declared outside the class and it contains the fields day – int, month – int, year – int. The class contains public accessor/getter and mutator/setter methods that are capable of using the private information. The class also contains two public methods that:
 - test the validity of the stored date.
 - write into a file all the dates from the current year that precede chronologically the class
 stored date.
 In the main( ) function, after instantiating the class and after reading from the keyboard all the components of a date, call the member methods and then verify the obtained results.
 */
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct data
{
    int zi;
    int luna;
    int an;
    
};
class Calendar
{
    data calend;
public:
    void write_data(data cal)
    {
        calend.zi=cal.zi;
        calend.luna=cal.luna;
        calend.an=cal.an;
    }
data get_data()
    {
        return calend;
        
    }
int validate(data cal)
    {
    if((cal.zi>=1&&cal.zi<=31)&&(cal.luna>=1&&cal.luna<=12)&&(cal.an>=1&&cal.an<=100000))
        return 1;
    else return 0;
    }
void write_file(const char *calea)
    {
    FILE *f;
    if(!(f=fopen(calea,"w")))
    {
        printf("Eroare la crearea fisierului\n");
        return;
        
    }
    for(int i=calend.luna;i<=12;i++)
    {
        for(int j=calend.zi;j<=31;j++)
        {
            fprintf(f,"%d.%d.%d\n",j,i,calend.an);
            
        }
        
    }
    printf("Datele au fost scrise cu success!\n");
    fclose(f);
    
    }
    
};
int main()
{
    Calendar cal;
    data tmp;
    printf("Introduceti o data in formatul dd/zz/aaaa: ");
    scanf("%d/%d/%d",&tmp.zi,&tmp.luna,&tmp.an);
    cal.write_data(tmp);
    if(cal.validate(cal.get_data()))
        cal.write_file("txt.txt");
    else
        printf("Data nu are formatul corect. Datele nu au fost scrise in fisier.\n");
    printf("Data scrisa in clasa este: %d/%d/%d",cal.get_data().zi,cal.get_data().luna,cal.get_data().an);
    return 0;
}

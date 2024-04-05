/*
 Horvath Daiana, e_2012
 Write a C++ application that implements a class called F1Pilot. The class defines the private variables name (array of characters), team (array of characters), age (int), best_time (int) and pole_position_nr. As public members, the class contains mutator/setter and accessor/getter methods for each of the class’s attributes.
 In function main( ), create 3 different instances of the F1Pilot class and use the mutator methods for initializing each object’s data with the corresponding information read from the keyboard. Using the accessor methods, display all the data related to the pilot that has the best time.
 */
#include<iostream>
#include "F1Pilot.h"
using namespace std;
//F1pilot.h
class F1Pilot{
private:
    char name[30];
    char team[30];
    int age;
    int best_time;
    int pole_position_nr;
public:
    void setName(char* new_name)
    {
        strcpy(name, new_name);
    }
    void setTeam(char* new_team)
    {
        strcpy(team, new_team);
    }
    void setAge(int a)
    {
        age=a;
    }
    void setBestTime(int a)
    {
        best_time=a;
    }
    void setPolePosition(int a)
    {
        pole_position_nr=a;
    }
    char* getName()
    {
        return name;
    }
    char* getTeam()
    {
        return team;
    }
    int getAge()
    {
        return age;
    }
    int getBestTime()
    {
        return best_time;
    }
    int getPolePosition()
    {
        return pole_position_nr;
    }
    
};
//end class
void read(F1Pilot* pilot);
int min_of_2(int a, int b);
void afis(F1Pilot pilot);
int main()
{
    F1Pilot pilot1, pilot2, pilot3;
    read(&pilot1);
    read(&pilot2);
    read(&pilot3);
    int record1=pilot1.getBestTime();
    int record2=pilot2.getBestTime();
    int record3=pilot3.getBestTime();
    int min_record=min_of_2(min_of_2(record1, record2),record3);
    if (min_record==record1)
    {
        afis(pilot1);
    }
    if(min_record==record2)
    {
        afis(pilot2);
    }
    if (min_record==record3)
    {
        afis(pilot3);
    }
    return 0;
    

}
void read(F1Pilot* pilot)
{
    int a;
    char string[30];

    cout<<"Enter the name of the pilot: ";
    cin>>string;
    pilot->setName(string);
        
    cout<<"Enter the team of the pilot: ";
    cin>>string;
    pilot->setTeam(string);
        
    cout<<"Enter the age of the pilot: ";
    cin>>a;
    pilot->setAge(a);
        
    cout<<"Enter the time of the pilot: ";
    cin>>a;
    pilot->setBestTime(a);
        
    cout<<"Enter the pole position number for the pilot: ";
    cin>>a;
    pilot->setPolePosition(a);
    
}
void afis(F1Pilot pilot)
{
    cout<<"Pilot which has the best record is: "<<pilot.getName()<<", "<<pilot.getTeam()<<", "<<pilot.getAge()<<", "<<pilot.getPolePosition()<<", "<<pilot.getBestTime()<<"\n";
}
int min_of_2(int a, int b)
{
    if (a<b)
        return a;
    return b;

}

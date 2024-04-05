#include<iostream>
#include<string.h>
using namespace std;
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


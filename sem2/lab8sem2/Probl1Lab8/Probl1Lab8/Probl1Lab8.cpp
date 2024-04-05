/*
 Horvath Daiana, E-2012
 Implement a C++ application that defines the class called CurrentHour with hour, minute, second as private attributes. The class has public setter/getter methods for each attribute. Add a friend function that copies the content of a CurrentHour object used as parameter into another instance of the class that will be returned by the function, hour being modified to Greenwich Mean Time. Use the computer local current time.
 */
#include<iostream>
#include<time.h>
using namespace std;
class CurrentHour{
private:
    int hour;
    int minutes;
    int second;
public:
    void setHour(int x)
    {
        hour=x;
    }
    void setMinutes(int y)
    {
        minutes=y;
    }
    void setSecond(int z)
    {
        second=z;
    }
    int getHour()
    {
        return hour;
    }
    int getMinutes()
    {
        return minutes;
    }
    int getSecond()
    {
        return second;
    }
    friend CurrentHour copy(CurrentHour ob1);
};
CurrentHour copy(CurrentHour ob1)
{
    CurrentHour o;
    o.hour=ob1.hour-3;
    o.minutes=ob1.minutes;
    o.second=ob1.second;
    return o;
    
}
int main()
{
    CurrentHour obj1, obj2;
    time_t seconds;
    struct tm *timeStruct;
    seconds = time(NULL);
    timeStruct = localtime(&seconds);
    obj1.setHour(timeStruct->tm_hour);
    obj1.setMinutes(timeStruct->tm_min);
    obj1.setSecond(timeStruct->tm_sec);
    cout<<"The local hour is: "<<obj1.getHour()<<":"<<obj1.getMinutes()<<":"<<obj1.getSecond()<<"\n";
    obj2=copy(obj1);
    cout<<"The Greenwhich Mean Time is: "<<obj2.getHour()<<":"<<obj2.getMinutes()<<":"<<obj2.getSecond()<<"\n";
}

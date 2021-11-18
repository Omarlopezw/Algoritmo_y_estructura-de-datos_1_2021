#ifndef Class_Person
#define Class_Person
#include <iostream>

using namespace std;

class Person
{
    private:
        string Name;
        int Age;
        int Day;
        int Month;
        int Year;
        int CurrentDay;
        int CurrentMonth;
        int CurrentYear;
    public:
        Person();
        void SetName(string _Name);
        string GetName();
        void SetDay(int _Day);
        int GetDay();
        void SetMonth(int _Month);
        int GetMonth();
        void SetYear(int _Year);
        int GetYear();
        void SetCurrentDay(int _CurrentDay);
        int GetCurrentDay();
        void SetCurrentMonth(int _CurrentMonth);
        int GetCurrentMonth();
        void SetCurrentYear(int _CurrentYear);
        int GetCurrentYear();
        int GetAge();
};
#endif
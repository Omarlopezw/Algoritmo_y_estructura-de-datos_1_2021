#include "Class_Person.hpp"
Person::Person()
{

}
void Person::SetName(string _Name)
{
    Name = _Name;
}
string Person::GetName()
{
    return Name;
}
void Person::SetDay(int _Day)
{
    Day = _Day;
}
int Person::GetDay()
{
    return Day;
}
void Person::SetMonth(int _Month)
{
    Month = _Month;
}
int Person::GetMonth()
{
    return Month;
}
void Person::SetYear(int _Year)
{
    Year = _Year;
}
int Person::GetYear()
{
    return Year;
}

void Person::SetCurrentDay(int _CurrentDay)
{
    CurrentDay = _CurrentDay;
}
int Person::GetCurrentDay()
{
    return CurrentDay;
}
void Person::SetCurrentMonth(int _CurrentMonth)
{
    CurrentMonth = _CurrentMonth;
}
int Person::GetCurrentMonth()
{
    return CurrentMonth;
}
void Person::SetCurrentYear(int _CurrentYear)
{
    CurrentYear = _CurrentYear;
}
int Person::GetCurrentYear()
{
    return CurrentYear;
}

int Person::GetAge()
{
    if(CurrentMonth > Month)
    {
        Age = CurrentYear - Year;
    }
    else if(CurrentMonth == Month)
    {
        if(CurrentDay <= Day)
        {
            Age = (CurrentYear - Year)-1;
        }

        else if(CurrentDay > Day)
        {
            Age = CurrentYear - Year;
        }
    }
    else if(CurrentMonth < Month)
    {
        Age = (CurrentYear - Year)-1;
    }

    return Age;
}
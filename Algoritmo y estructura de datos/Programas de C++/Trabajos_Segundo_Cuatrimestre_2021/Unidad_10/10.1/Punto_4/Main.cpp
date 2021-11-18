

#include "Class_Person.hpp"

int main()
{
    Person *PersonOne = new Person;
    string _Name;
    int _Day,_Month,_Year;
    int _CurrentDay,_CurrentMonth,_CurrentYear;

    cout << "\nIngrese su nombre: ";
    cin >> _Name;

    PersonOne->SetName(_Name);

    cout << "\nIngrese su dia de nacimiento: ";
    cin >> _Day;

    PersonOne->SetDay(_Day);

    cout << "\nIngrese su mes de nacimiento: ";
    cin >> _Month;

    PersonOne->SetMonth(_Month);

    cout << "\nIngrese su anio de nacimiento: ";
    cin >> _Year;

    PersonOne->SetYear(_Year);

    cout << "\nIngrese el dia actual: ";
    cin >> _CurrentDay;

    PersonOne->SetCurrentDay(_CurrentDay);

    cout << "\nIngrese el mes actual: ";
    cin >> _CurrentMonth;

    PersonOne->SetCurrentMonth(_CurrentMonth);

    cout << "\nIngrese el anio actual: ";
    cin >> _CurrentYear;

    PersonOne->SetCurrentYear(_CurrentYear);

    cout << "\nSu nombres es: " <<PersonOne->GetName();
    cout << "\nSu edad es: " <<PersonOne->GetAge();

    delete PersonOne;

    return 0;
}
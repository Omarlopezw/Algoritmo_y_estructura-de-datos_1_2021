#include "Class_Student.hpp"


int main()
{
    Student *StudentOne = new Student;
    string Name;
    string Cedula;
    float GradeOne,GradeTwo,GradeThree;

    cout << "\nIngrese la cedula del alumno: ";
    cin >> Cedula;
    
    StudentOne->SetIdentificationCard(Cedula);

    cout << "\nIngrese el nombre del alumno: ";
    cin >> Name;

    StudentOne->SetName(Name);

    cout << "\nIngrese la primer nota del alumno: ";
    cin >> GradeOne;

    StudentOne->SetGradeOne(GradeOne);

    cout << "\nIngrese la segunda nota del alumno: ";
    cin >> GradeTwo;

    StudentOne->SetGradeTwo(GradeTwo);

    cout << "\nIngrese la tercer nota del alumno: ";
    cin >> GradeThree;

    StudentOne->SetGradeThree(GradeThree);

    cout << "\nCedula: " << StudentOne->GetIdentificationCard();

    cout << "\nNombre: " << StudentOne->GetName();

    cout << "\nSu nota final es: " << StudentOne->FinalGrade();

    cout << " " << StudentOne->ApproveDisapproved()<<endl;

    delete StudentOne;

    return 0;
}
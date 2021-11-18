#include "Class_Student.hpp"

Student::Student()
{

}

void Student::SetIdentificationCard(string _IdentificationCard)
{
    IdentificationCard = _IdentificationCard;
}
string Student::GetIdentificationCard()
{
    return IdentificationCard;
}
void Student::SetName(string _Name)
{
    Name = _Name;
}
string Student::GetName()
{
    return Name;
}

void Student::SetGradeOne(float _GradeOne)
{
    GradeOne = _GradeOne;
}
float Student::GetGradeOne()
{
    return GradeOne;
}
void Student::SetGradeTwo(float _GradeTwo)
{
    GradeTwo = _GradeTwo;
}
float Student::GetGradeTwo()
{
    return GradeTwo;
}
void Student::SetGradeThree(float _GradeThree)
{
    GradeThree = _GradeThree;
}
float Student::GetGradeThree()
{
    return GradeThree;
}
float Student::FinalGrade()
{
    GradeOne += GradeTwo + GradeThree;

    return GradeOne;
}
string Student::ApproveDisapproved()
{
    float Grade = FinalGrade();
    string ApproveOrDisapproved;

    if(Grade >= 48 )
    {
        ApproveOrDisapproved = "\nEl alumno ha aprobado";
    }
    else
    {
        ApproveOrDisapproved = "\nEl alumno ha desaprobado";
    }

    return ApproveOrDisapproved;
}
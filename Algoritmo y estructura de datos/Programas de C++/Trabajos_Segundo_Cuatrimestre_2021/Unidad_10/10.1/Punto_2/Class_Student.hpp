#ifndef Class_Student
#define Class_Student

#include <iostream>

using namespace std;

class Student
{
    private:
        string IdentificationCard;
        string Name;
        float GradeOne;
        float GradeTwo;
        float GradeThree;
    public:
        Student();
        void SetIdentificationCard(string _IdentificationCard);
        string GetIdentificationCard();
        void SetName(string _Name);
        string GetName();
        void SetGradeOne(float _GradeOne);
        float GetGradeOne();
        void SetGradeTwo(float _GradeTwo);
        float GetGradeTwo();
        void SetGradeThree(float _GradeThree);
        float GetGradeThree();
        float FinalGrade();
        string ApproveDisapproved();

};

#endif
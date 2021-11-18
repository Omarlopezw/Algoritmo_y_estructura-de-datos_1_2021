#include <iostream>

using namespace std;

class Rectangle
{
    private:
        float Height;
        float Base;
    public:
        Rectangle();//Constructor
        void SetHeight(float _Height);
        float GetHeight();
        void SetBase(float _Base);
        float GetBase();
        float Area();
        float Perimeter();

};
#include "Class_Rectangle.hpp"

Rectangle::Rectangle()
{

}

void Rectangle::SetHeight(float _Height)
{
    Height = _Height;
}
float Rectangle::GetHeight()
{
    return Height;
}
void Rectangle::SetBase(float _Base)
{
    Base = _Base;
}
float Rectangle::GetBase()
{
    return Base;
}
float Rectangle::Area()
{
    Base = Base * Height;//Calculamos el area,el resultado se almacena en base

    return Base;
}
float Rectangle::Perimeter()
{
    Base = (2*Base) + (2*Height);//Calculamos el perimetro,el resultado se almacena en base

    return Base;
}
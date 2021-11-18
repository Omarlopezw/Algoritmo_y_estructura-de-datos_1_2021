#include "ClassRectangle.hpp"
#include <iostream>

Rectangle::Rectangle() 
{
    // cout << "\nInvocando el constructor de la clase rectangulo"<<endl;
}

Rectangle::~Rectangle()
{
    cout << "\nInvocando el destructor de la clase rectangulo"<<endl;
}
void Rectangle::Draw()
{
    cout << "\nSe ha dibujado un rectangulo";
}
void Rectangle::Erase()
{
    cout << "\nSe ha borrado el rectangulo";
}

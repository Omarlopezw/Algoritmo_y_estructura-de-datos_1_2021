#include "ClassTriangle.hpp"

Triangle::Triangle() 
{
    // cout << "\nInvocando el constructor de la clase triangulo"<<endl;
}

Triangle::~Triangle()
{
    cout << "\nInvocando el destructor de la clase triangulo"<<endl;
}

void Triangle::Draw()
{
    cout << "\nSe ha dibujado un triangulo";
}
void Triangle::Erase()
{
    cout << "\nSe ha borrado el triangulo";
}

#include "ClassCircle.hpp"

Circle::Circle() 
{
     cout << "\nInvocando el constructor de la clase circulo"<<endl;
}

Circle::~Circle()
{
    cout << "\nInvocando el destructor de la clase circulo"<<endl;
}

void Circle::Draw()
{
    cout << "\nSe ha dibujado un circulo";
}
void Circle::Erase()
{
    cout << "\nSe ha borrado el circulo";
}

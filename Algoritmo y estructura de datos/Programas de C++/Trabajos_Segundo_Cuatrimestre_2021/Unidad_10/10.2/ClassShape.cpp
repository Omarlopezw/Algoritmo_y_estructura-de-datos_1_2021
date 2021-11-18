#include "ClassShape.hpp"

Shape::Shape()
{
    cout << "\nInvocando el constructor de la clase figura"<<endl;
}

Shape::~Shape()
{
    cout << "\nInvocando el destructor de la clase figura"<<endl;
}
void Shape::Rotate()
{
    cout << "\nLa figura esta rotando";
}
void Shape::Move()
{
    cout << "\nLa figura se esta moviendo";
}
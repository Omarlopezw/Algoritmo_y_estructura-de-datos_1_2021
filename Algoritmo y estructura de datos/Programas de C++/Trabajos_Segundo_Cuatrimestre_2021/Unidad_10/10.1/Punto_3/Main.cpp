#include "Class_Rectangle.hpp"


int main()
{
    float _Height,_Base;//Variables para almacenar los valores proporcionados por el usuario
    Rectangle *RectangleOne = new Rectangle;

    cout << "\nDigite la altura del rectangulo: ";
    cin >>_Height;

    RectangleOne->SetHeight(_Height); 

    cout << "\nDigite la base del rectangulo: ";
    cin >>_Base;
    
    RectangleOne->SetBase(_Base);

    cout << "\nSu area es: " << RectangleOne->Area();

    RectangleOne->SetBase(_Base);

    cout << "\nSu perimetro es: " << RectangleOne->Perimeter();
;

    delete RectangleOne;
    return 0;
}
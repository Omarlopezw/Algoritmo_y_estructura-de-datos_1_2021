#include "Menu.hpp"

Shape* SwitchMenu(int Option)
{
Shape *ShapePtr; 

    switch (Option)
    {
        case 1:
        {
            cout << "-------------------------------------------------";
            cout << "\nHa seleccionado el tipo de objeto Circulo"<<endl;
            cout << "-------------------------------------------------";
            ShapePtr = new Circle();
        }
            break;
        case 2:
        {
            cout << "-------------------------------------------------";
            cout << "\nHa seleccionado el tipo de objeto Rectangulo"<<endl;
            cout << "-------------------------------------------------";
            ShapePtr = new Rectangle();


        }
            break;
        case 3:
        {
            cout << "-------------------------------------------------";
            cout << "\nHa seleccionado el tipo de objeto Triangulo"<<endl;
            cout << "-------------------------------------------------";
            ShapePtr = new Triangle();
        }
            break;
        default:
        {
            cout << "\nOpcion no valida"<<endl;
        }
            break;

        return ShapePtr;
    }

}


void MenuSwitch()
{
    int counter = 0;
    int Option;
    Shape *ShapeOne[Max];

    

    do
    {
        cout << "\nTipo de objeto: "<<endl;
        cout << "1-Circulo"<<endl;
        cout << "2-Rectangulo"<<endl;
        cout << "3-Triangulo"<<endl;
        cout << "\nSeleccione la opcion" <<endl;
        cin >> Option;
        ShapeOne[counter] = SwitchMenu(Option);

        counter++;

    }while (counter < Max);


for (int i = 0; i < Max; i++)
{
    cout << "\n---------------------------";
    ShapeOne[i]->Draw();
    ShapeOne[i]->Erase();
    cout <<"\n---------------------------";

}

    delete [] ShapeOne;

}

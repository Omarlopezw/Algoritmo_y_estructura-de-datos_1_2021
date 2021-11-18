#include "Class_item.h"

int main()
{
    Item *ItemOne = new Item;
    float _BaseCost;

    cout << "\nDigite el precio base de su articulo: " <<endl;
    cin >> _BaseCost;
    

    ItemOne->SetBaseCost(_BaseCost);
    ItemOne->PvpHigher();

    cout << "\nPrecio al mayor: " << ItemOne->GetBaseCost();

    ItemOne->SetBaseCost(_BaseCost);
    ItemOne->PvpDetal();

    cout << "\nPrecio al detal: " << ItemOne->GetBaseCost();

    delete ItemOne;


    return 0;
}
#ifndef ClassItem
#define ClassItem
#include <iostream>

using namespace std;

class Item
{
    private:
        float BaseCost;

    public:
        Item();
        void SetBaseCost(float _BaseCost);
        float GetBaseCost();
        float PvpHigher();
        float PvpDetal();
};
#endif
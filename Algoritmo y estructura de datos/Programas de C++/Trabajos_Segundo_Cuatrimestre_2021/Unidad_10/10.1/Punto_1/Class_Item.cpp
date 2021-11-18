#include "Class_item.h"

Item::Item()
{

}
void Item::SetBaseCost(float _BaseCost)
{
    BaseCost = _BaseCost;
}

float Item::GetBaseCost()
{
    return BaseCost;
}

float Item::PvpHigher()
{
    BaseCost += BaseCost * 0.15;

    return BaseCost;
}

float Item::PvpDetal()
{
    BaseCost += BaseCost * 0.30;

    return BaseCost;
}
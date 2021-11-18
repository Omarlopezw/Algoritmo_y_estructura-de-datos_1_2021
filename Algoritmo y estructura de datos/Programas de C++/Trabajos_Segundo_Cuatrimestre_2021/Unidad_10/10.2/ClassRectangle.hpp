#ifndef ClassRectangle
#define ClassRectangle

#include <iostream>
#include "ClassShape.hpp"

using std::cout;
using std::endl;

class Rectangle : public Shape
{
private:
    /* data */
public:
    Rectangle();
    ~Rectangle();
    virtual void Draw(); 
    virtual void Erase();
};
#endif
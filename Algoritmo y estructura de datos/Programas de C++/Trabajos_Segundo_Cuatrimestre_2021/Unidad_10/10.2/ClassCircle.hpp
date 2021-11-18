#ifndef ClassCircle
#define ClassCircle
#include <iostream>
#include "ClassShape.hpp"

using std::cout;
using std::endl;


class Circle : public Shape
{
private:

public:
    Circle();
    ~Circle();
    virtual void Draw();
    virtual void Erase();

};

#endif
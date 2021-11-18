#ifndef ClassTriangle
#define ClassTriangle

#include <iostream>
#include "ClassShape.hpp"
using std::cout;
using std::endl;

class Triangle : public Shape
{
private:
    /* data */
public:
    Triangle();
    ~Triangle();
    void Draw(); 
    void Erase();
};

#endif
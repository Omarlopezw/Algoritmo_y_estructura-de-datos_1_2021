#ifndef ClassShape
#define ClassShape

#include <iostream>
using std::cout;
using std::endl;

class Shape
{
private:

public:
    Shape();
    virtual ~Shape();
    virtual void Draw() = 0;
    virtual void Erase() = 0;
    virtual void Rotate();
    virtual void Move();
};
#endif
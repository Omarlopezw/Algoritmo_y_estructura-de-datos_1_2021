#ifndef Menu
#define Menu

#include <iostream>
#include "ClassShape.hpp"
#include "ClassCircle.hpp"
#include "ClassRectangle.hpp"
#include "ClassTriangle.hpp"

const int Max = 3;

using std::cout;
using std::cin;
using std::endl;

Shape* SwitchMenu(int Option);
void MenuSwitch();

#endif
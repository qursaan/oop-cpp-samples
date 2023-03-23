#include "Circle.h"

Circle::Circle(double radius): Square(radius)
{
    //ctor
}

Circle::~Circle()
{
    //dtor
}

void Circle::Draw()
{
    cout << "(CIRCLE)" << endl;
}

double Circle::Area()
{
    return 3.14159 * Rectangle::Area(); //<-- call the base class method
}

#include "Square.h"

Square::Square(double width): Rectangle(width, width)  // call the base class constructor
{
    //ctor
}

Square::~Square()
{
    //dtor
}

void Square::Draw()
{
    cout << "[SQUARE]" << endl;
}

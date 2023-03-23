#include "Rectangle.h"

Rectangle::Rectangle(double width, double height)
{
    m_width = width;
    m_height = height;
}

Rectangle::~Rectangle()
{
    //dtor
}

void Rectangle::Draw()
{
    cout << "[RECTANGLE]" << endl;
}

double Rectangle::Area()
{
    return m_width * m_height;
}
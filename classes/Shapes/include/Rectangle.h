#include "Shape.h"
#include <iostream>

using namespace std;

#ifndef RECTANGLE_H
#define RECTANGLE_H


class Rectangle: public Shape
{
    public:
        Rectangle(double width, double height);
        virtual ~Rectangle();
        void Draw();
        double Area();

    protected:
        double m_width;
        double m_height;
};

#endif // RECTANGLE_H

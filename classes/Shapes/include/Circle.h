#include "Square.h"

#ifndef CIRCLE_H
#define CIRCLE_H


class Circle: public Square
{
    public:
        Circle(double radius);
        virtual ~Circle();
        void Draw();
        double Area();
};

#endif // CIRCLE_H

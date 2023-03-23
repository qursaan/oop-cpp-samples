#include "Rectangle.h"

#ifndef SQUARE_H
#define SQUARE_H


class Square: public Rectangle
{
    public:
        Square(double width);
        virtual ~Square();
        void Draw();
};

#endif // SQUARE_H

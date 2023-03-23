#ifndef SHAPE_H
#define SHAPE_H


class Shape
{
    public:
        virtual void Draw() = 0;
        virtual double Area() = 0;
};

#endif // SHAPE_H

#include "Shape.h"
#include "Rectangle.h"
#include "Square.h"
#include "Circle.h"

#include <iostream>

using namespace std;

int main()
{
    // First we create an array of pointers to Shape objects
    Shape *shapes[3];

    shapes[0] = new Rectangle(10, 20);
    shapes[1] = new Square(10);
    shapes[2] = new Circle(10);

    for (int i = 0; i < 3; i++)
    {
        shapes[i]->Draw();
        cout << "Area: " << shapes[i]->Area() << endl;
    }
    
    for (int i = 0; i < 3; i++)
    {
        delete shapes[i];
    }

    // Second, Create dynamic array of Shape pointers and fill it with Shape objects

    cout<<"Enter the number of shapes: ";
    int num;
    cin>>num;

    Shape **shapes2 = new Shape*[num];
    
    for (int i = 0; i < num; i++)
    {
        cout<<"Enter the shape type (0 - Rectangle, 1 - Square, 2 - Circle): ";
        int type;
        cin>>type;
        switch (type)
        {
            case 0:
                {
                    cout<<"Enter the width and height: ";
                    double width, height;
                    cin>>width>>height;
                    shapes2[i] = new Rectangle(width, height);
                }
                break;
            case 1:
                {
                    cout<<"Enter the width: ";
                    double width2;
                    cin>>width2;
                    shapes2[i] = new Square(width2);
                }
                break;
            case 2:
                {
                    cout<<"Enter the radius: ";
                    double radius;
                    cin>>radius;
                    shapes2[i] = new Circle(radius);
                }
                break;
        }
    }

    for (int i = 0; i < num; i++)
    {
        shapes2[i]->Draw();
        cout << "Area: " << shapes2[i]->Area() << endl;
    }

    for (int i = 0; i < num; i++)
    {
        delete shapes2[i];
    }

    
    return 0;
}

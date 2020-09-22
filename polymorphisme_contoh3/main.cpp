#include <iostream>
#include "circle.h"
using namespace std;

void virtualViaPointer(const Shape *);

int main()
{
    Point point(7, 11);
    Circle circle(3.5, 22, 8);
    point.printShapeName();
    point.print();
    cout << endl;
    circle.printShapeName();
    circle.print();
    cout << endl;
    Shape *arrayOfShapes[2];
    arrayOfShapes[0] = &point;
    arrayOfShapes[1] = &circle;
    cout << "Virtual function calls me off"
         << "base-class pointers" << endl;
    for (int i = 0; i < 2; i++)
    {
        virtualViaPointer(arrayOfShapes[i]);
    }
}

void virtualViaPointer(const Shape *baseClassPtr)
{
    baseClassPtr->printShapeName();
    baseClassPtr->print();
    cout << endl;
    cout << "Area = " << baseClassPtr->area() << endl;
    cout << "Volume = " << baseClassPtr->volume() << endl;
}
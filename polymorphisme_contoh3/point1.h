#include <iostream>
using namespace std;
#include "shape.h"

class Point : public Shape
{
public:
    Point(int = 0, int = 0);
    void setPoint(int, int);
    int getX() const { return x; }
    int getY() const { return y; }
    virtual void printShapeName() const { cout << "Point: " << endl; }
    virtual void print() const;

private:
    int x, y;
};
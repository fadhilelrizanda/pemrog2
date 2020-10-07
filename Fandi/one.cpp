#include <iostream>
using namespace std;
#include "one.h"

One::One(int a, int b)
{
    x = a;
    y = b;
}
int One::getX()
{
    return x;
}
int One::getY()
{
    return y;
}
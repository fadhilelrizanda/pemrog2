#include <iostream>
#include "two.h"
using namespace std;

Two::Two(int q, char w)
{
    x = q;
    a = w;
}
int Two::getX()
{
    return x;
}

char Two::getA()
{
    return a;
}

void Two::setX(int q)
{
    x = q;
}

void Two::setA(char w)
{
    a = w;
}
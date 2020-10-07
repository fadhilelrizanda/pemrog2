// Kelompok 9
// 1. M.Aldi Fajar 1910953011
// 2. Tryfandy Sarfaldi 1910952001
// 3. Ari Andrian 1910953017
// 4. Taufik Reza 1910951024
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
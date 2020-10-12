// Kelompok 9
// 1. M.Aldi Fajar 1910953011
// 2. Tryfandy Sarfaldi 1910952001
// 3. Ari Andrian 1910953017
// 4. Taufik Reza 1910951024

#include <iostream>
using namespace std;
#include "point.h"
#include <math.h>
#include <conio.h>

void pointLocation(int x1, int y1, int x2, int y2);
float distance(int a, int b, int c, int d);
int main()
{
    cout << "Kelompok 9 " << endl;
    cout << "1. M.Aldi Fajar 1910953011 " << endl;
    cout << "2. Tryfandy Sarfaldi 1910952001" << endl;
    cout << "3. Ari Andrian 1910953017" << endl;
    cout << "4. Taufik Reza 1910951024 " << endl;
    cout << endl;
    cout << endl;
    Point fandi(2, 5);
    Point fandi2(5, 6);
    pointLocation(fandi.x, fandi.y, fandi2.x, fandi2.y);
    cout << "Jarak antara titik satu dengan titik dua adalah " << distance(fandi.x, fandi.y, fandi2.x, fandi2.y);
    getch();
}

void pointLocation(int x1, int y1, int x2, int y2)
{
    if (x1 > x2)
    {
        cout << "X1 berada disebelah kanan X2 dengan jarak " << x1 - x2 << endl;
    }
    else if (x2 > x1)
    {
        cout << "X1 berada disebelah kiri X2 dengan jarak " << x2 - x1 << endl;
    }
    else
    {
        cout << "X1 sama dengan X2 " << endl;
    }
    if (y1 > y2)
    {
        cout << "Y1 berada di atas Y2 dengan jarak " << y1 - y2 << endl;
    }
    else if (y2 > y1)
    {
        cout << "Y1 berada di bawah Y2 dengan jarak " << y2 - y1 << endl;
    }
    else
    {
        cout << "y1 sama dengan y2 " << endl;
    }
}
float distance(int a, int b, int c, int d)
{
    float hasil;
    hasil = sqrt((c - a) * (c - a) + (d - b) * (d - b));
    return hasil;
}
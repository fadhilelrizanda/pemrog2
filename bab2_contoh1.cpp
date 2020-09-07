#include <iostream>
#include <conio.h>
#include <stdio.h>

class Point
{
public:
    Point(float = 0.0, float = 0.0);
    void cetakPoint();

protected:
    float x, y;
};
Point::Point(float a, float b)
{
    std::cout << "Konstruktor point dijalankan" << std::endl;
    x = a;
    y = b;
}

void Point::cetakPoint()
{
    std::cout << "Point: " << '[' << x << ", " << y << ']' << std::endl;
}

class Circle : public Point
{
public:
    Circle(float r = 0.0, float a = 0.0, float b = 0.0);
    float area();
    void cetakPoint();

protected:
    float radius, l;
};

Circle::Circle(float r, float a, float b)
    : Point(a, b)
{
    std::cout << "Konstruktor Circle Dijalankan" << std::endl;
    radius = r;
}

float Circle::area()
{
    l = 3.14 * radius * radius;
    return l;
}

void Circle::cetakPoint()
{
    Point::cetakPoint();
    std::cout << "Circle dengan r : " << radius << "Center : [" << x << "," << y << "]" << std::endl;
    std::cout << "Luas Circle : " << l << std::endl;
}

class Cylinder : public Circle
{
public:
    Cylinder(float h = 0.0, float r = 0.0, float a = 0.0, float b = 0.0);
    float area();
    float vol();
    void cetakPoint();

protected:
    float height, l, v;
};
Cylinder::Cylinder(float h, float r, float a, float b) : Circle(r, a, b)
{
    std::cout << "Kontruktor Cylinder dijalankan" << std::endl;
    height = h;
}

float Cylinder::area()
{
    l = (2 * Circle::area() + 2 * 3.14 * radius * height);
    return l;
}

float Cylinder::vol()
{
    v = (Circle::area() * height);
    return v;
}

void Cylinder::cetakPoint()
{
    Circle::cetakPoint();
    std::cout << "Tinggi Tabung (h) : " << height << std::endl;
    std::cout << "Luas Tabung (h) : " << l << std::endl;
    std::cout << "Volume Tabung (h) : " << v << std::endl;
}

int main()
{
    Point p(1.1, 2.2);
    std::cout << std::endl;
    Circle lingkaran(10, 5, 5);
    lingkaran.area();
    lingkaran.cetakPoint();
    std::cout << std::endl;
    Cylinder tabung(20, 30, 3, 4);
    tabung.area();
    tabung.vol();
    tabung.cetakPoint();
    getch();
}
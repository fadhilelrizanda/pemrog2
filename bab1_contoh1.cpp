#include <iostream>
#include <conio.h>
class Sepeda
{
public:
    Sepeda(int, int, int);
    void mengubahPutaran(int);
    void mengubahGir(int);
    void mengerem();
    void tampilInfo();

private:
    int kecepatan;
    int putaran;
    int gir;
};

Sepeda::Sepeda(int k, int p, int g)
{
    kecepatan = k;
    putaran = p;
    gir = g;
}
void Sepeda::mengubahPutaran(int p)
{
    putaran = p;
}
void Sepeda::mengubahGir(int g)
{
    gir = g;
}
void Sepeda::mengerem()
{
    std::cout << "Kecepatan dan putaran berkurang...";
}
void Sepeda::tampilInfo()
{
    std::cout << " Gir: " << gir << std::endl;
    std::cout << "Kecepatan : " << kecepatan << std::endl;
    std::cout << "Putaran : " << putaran << std::endl;
}

int main()
{
    Sepeda sepeda1(10, 60, 3);
    Sepeda sepeda2(4, 12, 11);
    Sepeda sepeda3(35, 80, 5);

    sepeda1.tampilInfo();
    sepeda2.tampilInfo();
    sepeda3.tampilInfo();

    getch(); //* Press any key to finish
}

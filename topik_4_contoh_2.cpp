#include <iostream>
using namespace std;

class bangun
{
private:
    float x, y;

public:
    float luas() { return x * y; };
    bangun(float panjang, float lebar);
};

//konstruktor
bangun::bangun(float panjang, float lebar)
{
    x = panjang;
    y = lebar;
}

int main()
{
    bangun a(4, 7);
    bangun b(5, 6);
    cout << "Luas persegi panjang adalah = " << a.luas() << endl;
    cout << "Luas persegi panjang adalah = " << b.luas() << endl;
    return 0;
}

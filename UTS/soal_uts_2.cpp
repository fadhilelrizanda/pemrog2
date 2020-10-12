//  Buatlah program untuk menghitung luas dan keliling persegi
// panjang serta volume dan keliling kotak.
// Program tersebut harus menerapkan prinsip pewarisan!

#include <iostream>
using namespace std;

class Persegi
{
public:
    float p, l;
    Persegi()
    {
        cout << "Konstruktor Persegi Terbentuk" << endl;
    }
    Persegi(float a, float b)
    {

        p = a;
        l = b;
    }
};

class Kotak : public Persegi
{
public:
    float t;

    Kotak(float a, float b, float c)
    {
        cout << "Konstruktor Kotak Terbentuk" << endl;
        p = a;
        l = b;
        t = c;
    }
    float volume()
    {
        float hasil = p * l * t;
        return hasil;
    }
    float keliling()
    {
        float hasil = 2 * p + 2 * l + 2 * t;
        return hasil;
    }
};

int main()
{
    Kotak kotak1(20, 30, 40);
    cout << "Panjang : " << kotak1.p << endl;
    cout << "Lebar : " << kotak1.l << endl;
    cout << "Tinggi : " << kotak1.t << endl;
    cout << "Volume Kotak : " << kotak1.volume() << endl;
    cout << "Keliling Kotak " << kotak1.keliling() << endl;
}
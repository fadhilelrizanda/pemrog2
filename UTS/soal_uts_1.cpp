// Buatlah sebuah program untuk menghitung
// volume dan keliling sebuah kotak, dengan rumus V = panjang x lebar x tinggi,
// dan K = (2 x panjang) + (2 x lebar) + (2 x tinggi).
// Program tersebut harus memiliki setidaknya 1 (satu) buah Class dan 1 (satu) buah Constructor .

#include <iostream>
using namespace std;

class Kotak
{
public:
    float p, l, t;
    Kotak(float a, float b, float c)
    {
        p = a;
        l = b;
        t = c;
    }
    float volume()
    {
        float hasil;
        hasil = p * l * t;
        return hasil;
    }
    float keliling()
    {
        float hasil;
        hasil = 2 * p + 2 * l + 2 * t;
        return hasil;
    }
};

int main()
{
    Kotak kotak1(32, 20, 15);
    cout << "Volume Kotak : " << kotak1.volume() << endl;
    cout << "Keliling Kotak : " << kotak1.keliling() << endl;
}
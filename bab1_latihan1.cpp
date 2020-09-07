// Buatlah sebuah program untuk menghitung volume dan keliling sebuah kotak,
// dengan rumus V = panjang x lebar x tinggi, dan K = (2 x panjang) + (2 x lebar) +
//  (2 x tinggi). Program tersebut harus memiliki setidaknya 1
//  (satu) buah Class dan 1 (satu) buah Constructor

#include <iostream>
using namespace std;

class Kotak
{
public:
    float p, l, t, v, k;
    Kotak(float a, float b, float c)
    {
        cout << "Objek Kotak Terbentuk" << endl;
        p = a;
        l = b;
        t = c;
    }
    float volume()
    {
        v = p * l * t;
        cout << "Volume benda : " << v << endl;
    }
    float keliling()
    {
        k = 2 * p + 2 * l + 2 * t;
        cout << "Keliling benda : " << k << endl;
    }
};

void liner(char p, int n);
void watermark();

int main()
{
    Kotak kotak1(20, 10, 40);
    Kotak kotak2(30, 10, 20);
    Kotak kotak3(200, 100, 30);
    liner('*', 10);
    cout << "Kotak 1 " << endl;
    liner('*', 10);
    kotak1.volume();
    kotak1.keliling();
    liner('*', 10);
    cout << "Kotak 2 " << endl;
    liner('*', 10);
    kotak2.volume();
    kotak2.keliling();
    liner('*', 10);
    cout << "Kotak 3 " << endl;
    liner('*', 10);
    kotak3.volume();
    kotak3.keliling();
    cout << endl;
    watermark();
}

void liner(char p, int n)
{
    for (int i = 0; i <= n; i++)
    {
        cout << p;
    }
    cout << endl;
}

void watermark()
{
    liner('-', 20);
    cout << "By Fadhil Elrizanda" << endl;
    liner('-', 20);
}
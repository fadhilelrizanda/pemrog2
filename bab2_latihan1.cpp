// Buatlah program untuk menghitung luas dan keliling persegi panjang serta volume
// dan keliling kotak.
// Program tersebut harus menerapkan prinsip  pewarisan!

#include <iostream>
using namespace std;

class PersegiPanjang
{
public:
    float panjang, lebar, lu, kel;
    PersegiPanjang(float p, float l)
    {
        cout << "Class Persegi Panjang Terbentuk" << endl;
        panjang = p;
        lebar = l;
        cout << "Panjang : " << panjang << endl;
        cout << "Lebar : " << lebar << endl;
    }
    float luas()
    {
        lu = panjang * lebar;
        return lu;
    }
    float keliling()
    {
        kel = 2 * panjang + 2 * lebar;
        return kel;
    }
    void tampilkan()
    {
        cout << "Luas : " << lu << endl;
        cout << "Keliling : " << kel << endl;
    }
};

class kotak : public PersegiPanjang
{
public:
    float tinggi, vol, lp;
    kotak(float p, float l, float t) : PersegiPanjang(p, l)
    {
        cout << "Class kotak terbentuk" << endl;
        tinggi = t;
        cout << "Tinggi : " << t << endl;
    }
    float volume()
    {
        vol = panjang * lebar * tinggi;
        return vol;
    }
    float luaspermukaan()
    {
        lp = 2 * (panjang * lebar + panjang * tinggi + lebar * tinggi);
        return lp;
    }
    void tampilkan()
    {
        cout << "Volume : " << vol << endl;
        cout << "Luas Permukaan : " << lp << endl;
    }
};

void liner(char p, int n);
void watermark();

int main()
{
    cout << "Program penurunan class" << endl;
    cout << endl;
    cout << "Persegi Panjang 1" << endl;
    liner('*', 20);
    PersegiPanjang persegiP1(20, 30);
    persegiP1.luas();
    persegiP1.keliling();
    persegiP1.tampilkan();
    cout << endl;
    cout << "Persegi Panjang 2" << endl;
    liner('*', 20);
    PersegiPanjang persegiP2(50, 130);
    persegiP2.luas();
    persegiP2.keliling();
    persegiP2.tampilkan();
    cout << endl;
    cout << "Kotak 1" << endl;
    liner('*', 20);
    kotak kotak1(20, 30, 40);
    kotak1.volume();
    kotak1.luaspermukaan();
    kotak1.tampilkan();
    cout << endl;
    cout << "Kotak 2" << endl;
    liner('*', 20);
    kotak kotak2(40, 20, 20);
    kotak2.volume();
    kotak2.luaspermukaan();
    kotak2.tampilkan();
    cout << endl;
    cout << "Kotak 3" << endl;
    liner('*', 20);
    kotak kotak3(50, 90, 40);
    kotak3.volume();
    kotak3.luaspermukaan();
    kotak3.tampilkan();
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
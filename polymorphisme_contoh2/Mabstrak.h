#include <iostream>
#include "Bentuk2D.h"
using namespace std;

Segiempat::Segiempat(float p, float l)
{
    panjang = p;
    lebar = l;
}

float Segiempat::cariLuas()
{
    cout << "Luas segi empat adalah : " << panjang * lebar << endl;
}

Lingkaran::Lingkaran(float r)
{
    jejari = r;
}

float Lingkaran::cariLuas()
{
    cout << "Luas lingkaran adalah : " << 3.14 * jejari * jejari << endl;
}

Segitiga::Segitiga(float a, float t)
{
    alas = a;
    tinggi = t;
}

float Segitiga::cariLuas()
{
    cout << "Luas Segitiga : " << 0.5 * alas * tinggi << endl;
}
#include <iostream>
#include "Mabstrak.h"
using namespace std;

int main()
{
    Bentuk2D *b2d;
    bool loop = true;
    int pilihan;
    do
    {
        cout << "1:Segi empat 2:Lingkaran 3:Segitiga" << endl;
        cin >> pilihan;
    } while (pilihan < 1 || pilihan > 3);
    switch (pilihan)
    {
    case 1:
        b2d = new Segiempat(4.0, 5.0);
        break;
    case 2:
        b2d = new Lingkaran(7.0);
        break;
    case 3:
        b2d = new Segitiga(2.0, 10.0);
        break;
    default:
        break;
    }
    b2d->cariLuas();
    delete b2d;
}
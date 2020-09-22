//#include "Manusia.h"
#include "Mpoli.h"
#include <iostream>
using namespace std;

int main()
{
    Manusia *m;
    int pilihan;
    do
    {
        cout << "1: Manusia, 2:Pelajar, 3:Pegawai" << endl;
        cin >> pilihan;
    } while (pilihan < 1 || pilihan > 3);
    switch (pilihan)
    {
    case 1:
        m = new Manusia;
        break;
    case 2:
        m = new Pelajar;
        break;
    case 3:
        m = new Pegawai;
        break;

    default:
        break;
    }
    m->hello();
    delete m;
}
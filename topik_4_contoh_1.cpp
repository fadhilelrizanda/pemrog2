#include <iostream>
using namespace std;

class bangun
{
private:
    float x, y;

public:
    float luas() { return x * y; };
    void beri_Nilai(float panjang, float lebar);
};

//scope operator (::)
void bangun::beri_Nilai(float panjang, float lebar)
{
    x = panjang;
    y = lebar;
}

int main()
{
    bangun a, b;
    a.beri_Nilai(4, 3);
    b.beri_Nilai(7, 5);
    cout << "Luas persegi panjang adalah = " << a.luas() << endl;
    cout << "Luas persegi panjang adalah = " << b.luas() << endl;
    return 0;
}

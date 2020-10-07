// Kelompok 9
// 1. M.Aldi Fajar 1910953011
// 2. Tryfandy Sarfaldi 1910952001
// 3. Ari Andrian 1910953017
// 4. Taufik Reza 1910951024
#include <iostream>
#include "two.h"
using namespace std;
#include <conio.h>

int main()
{
    Two fandi(20, 'L');
    cout << "Value X : " << fandi.getX() << endl;
    cout << "Value A : " << fandi.getA() << endl;
    fandi.setX(40);
    fandi.setA('F');
    cout << "Setelah dirubah dengan mutator" << endl;
    cout << "Value X : " << fandi.getX() << endl;
    cout << "Value A : " << fandi.getA() << endl;
    getch();
}
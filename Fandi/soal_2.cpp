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
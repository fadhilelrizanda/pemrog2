#include <iostream>
#include "one.h"
using namespace std;

int main()
{
    One fandi(10, 12);
    cout << "Value X : " << fandi.getX() << endl;
    cout << "Value Y : " << fandi.getY() << endl;
}
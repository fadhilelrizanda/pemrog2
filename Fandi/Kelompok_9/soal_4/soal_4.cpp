// Kelompok 9
// 1. M.Aldi Fajar 1910953011
// 2. Tryfandy Sarfaldi 1910952001
// 3. Ari Andrian 1910953017
// 4. Taufik Reza 1910951024

#include <iostream>
#include "person.h"
using namespace std;
#include <conio.h>

int main()
{
    cout << "Kelompok 9 " << endl;
    cout << "1. M.Aldi Fajar 1910953011 " << endl;
    cout << "2. Tryfandy Sarfaldi 1910952001" << endl;
    cout << "3. Ari Andrian 1910953017" << endl;
    cout << "4. Taufik Reza 1910951024 " << endl;
    cout << endl;
    cout << endl;
    Person fandi("Tryfandy Sarfaldi", 19);
    cout << "Name : " << fandi.getName() << endl;

    cout << "Age : " << fandi.getAge() << endl;
    getch();
}
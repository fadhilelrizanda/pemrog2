#include <iostream>
#include "person.h"
using namespace std;
#include <conio.h>

int main()
{
    Person fandi("Tryfandy Sarfaldi", 19);
    cout << "Name : " << fandi.getName() << endl;

    cout << "Age : " << fandi.getAge() << endl;
    getch();
}
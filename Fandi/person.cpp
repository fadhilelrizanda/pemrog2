#include <iostream>
#include "person.h"
using namespace std;

Person::Person(string a, int b)
{
    name = a;
    age = b;
}

string Person::getName()
{
    return name;
}

int Person::getAge()
{
    return age;
}
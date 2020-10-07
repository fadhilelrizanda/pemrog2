#include <iostream>
using namespace std;

class Person
{
public:
    string name;
    int age;
    Person(string a, int b);
    string getName();
    int getAge();
};
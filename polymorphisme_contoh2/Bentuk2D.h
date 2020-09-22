#include <iostream>
using namespace std;

class Bentuk2D
{
public:
    virtual float cariLuas() = 0;
};

class Segiempat : public Bentuk2D
{
protected:
    float panjang, lebar;

public:
    Segiempat(float, float);
    float cariLuas();
};

class Lingkaran : public Bentuk2D
{
private:
    float jejari;

public:
    Lingkaran(float);
    float cariLuas();
};

class Segitiga : public Bentuk2D
{
private:
    float alas, tinggi;

public:
    Segitiga(float, float);
    float cariLuas();
};
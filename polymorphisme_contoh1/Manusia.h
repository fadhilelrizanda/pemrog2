#define Manusia_H
using namespace std;
class Manusia
{
public:
    virtual void hello();
};
class Pelajar : public Manusia
{
public:
    void hello();
};
class Pegawai : public Manusia
{
public:
    void hello();
};
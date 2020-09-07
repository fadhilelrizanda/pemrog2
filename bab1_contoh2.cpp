#include <iostream>
#include <iomanip>
#include <conio.h>

class Time
{
public:
    Time() : void setTime(int, int, int);
    void printUniversal();
    void printStandard();

private:
    int hour;
    int minute;
    int second;
};
Time::time()
{
    hour = minute = second = 0;
}

void Time::setTime(int h, int m, int s)
{
    hour = (h >= 0 && h < 24) ? h : 0;
    minute = (m >= 0 && m < 60) ? m : 0;
    second = (s >= 0 && s < 60) ? s : 0;
}

void Time::printUniversal()
{
    std::cout << setfill('0') << setw(2) << hour << ":" << setw(2) << minute << ":" << setw(2) << second;
}

void Time::printStandard()
{
    std::cout << ((hour == 0 || hour == 12) ? 12 : hour % 12);
}

//! Kode program tidak ada / terpotong
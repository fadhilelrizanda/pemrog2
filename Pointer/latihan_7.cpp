#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
    int tgllahir[3], *tgl;
    int i;
    tgl = &tgllahir[0];
    tgllahir[0] = 21;
    tgllahir[1] = 4;
    tgllahir[2] = *tgl + 1964;

    printf("Tanggal Lahir : ");
    for (i = 0; i < 3; i++)
    {
        printf("%d ", *(tgl + i));
    }
}
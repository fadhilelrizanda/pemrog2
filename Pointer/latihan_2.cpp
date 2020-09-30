#include <stdio.h>
#include <iostream>
using namespace std;

int main()
{
    int x;
    int *ptr_x;
    x = 10.2;
    ptr_x = &x;
    printf("\n \n Menggunakan variabel biasa : ");
    printf("\n nilai dari x = %d", x);
    printf("\n Alamat dari x = %p", (void *)&x);
    printf("\n \n Dengan Menggunakan Pointer : ");
    printf("\n nilai dari x = %d", *ptr_x);
    printf("\n Nilai dari x = %p", (void *)&ptr_x);
    printf("\n\n");
}
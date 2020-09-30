#include <stdio.h>
int main()
{
    char *alamat_x, x, y, z;
    x = 'j';
    alamat_x = &x;
    y = x;
    z = *alamat_x;
    printf(" Nilai x : %c \n", x);
    printf(" Nilai y : %c \n");
    printf(" Nilai z : %c \n", z);
    printf(" Nilai x  berada pada alamat : %p \n", &x);
}
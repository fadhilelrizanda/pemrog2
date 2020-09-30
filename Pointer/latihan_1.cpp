#include <stdio.h>
using namespace std;
int jumlah(int *alm_a, int *alm_b, int *alm_c)
{
    *alm_a = *alm_a * 2;
    *alm_b = *alm_b * 2;
    *alm_c = *alm_c * 2;
    return 0;
}

int main()
{
    int a, b, c;
    printf("Input Bilangan Pertama : ");
    scanf("%d", &a);
    printf("Input Bilangan Kedua : ");
    scanf("%d", &b);
    printf("Input Bilangan Ketiga : ");
    scanf("%d", &c);
    jumlah(&a, &b, &c);
    printf("Outputnya = %d", *&a);
    printf("\n");
    printf("Outputnya = %d", *&b);
    printf("\n");
    printf("Outputnya = %d", *&c);
    printf("\n");
}

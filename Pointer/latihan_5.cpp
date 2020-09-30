#include <stdio.h>

float jumlah(float x, float y, float *alm_c)
{
    *alm_c = x + y;
    return 0;
}

int main()
{
    float a, b, c;
    float *p_c;
    printf("Input bilangan pertama : ");
    scanf("%f", &a);
    printf("Input bilangan kedua : ");
    scanf("%f", &b);
    p_c = &c;
    jumlah(a, b, p_c);
    printf("\n");
    printf("Jumlah kedua bilangan = %.2f", *p_c);
    printf("\n");
}
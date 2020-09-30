#include <stdio.h>

float jumlah(float *alm_a, float *alm_b, float *alm_c)
{
    *alm_c = *alm_a * *alm_b;
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
    jumlah(&a, &b, p_c);
    printf("\n");
    printf("Hasil kali kedua bilangan = %.2f", *p_c);
    printf("\n");
}
#include <stdio.h>

int main()
{
    float a1, a2, a3;
    float *p_a3;
    printf("Input Bilangan Pertama : ");
    scanf("%f", &a1);
    printf("Input Bilangan Kedua : ");
    scanf("%f", &a2);
    printf("Input Bilangan Kedua : ");
    scanf("%f", &a3);
    p_a3 = &a3;
    *p_a3 = a1 + a2;
    printf("\n");
    printf("Nilai a3 (dari variabelnya) = %.3f", a3);
    printf("\n");
    printf("Nilai a3 (dari variabelnya) = %.3f", *p_a3);
}
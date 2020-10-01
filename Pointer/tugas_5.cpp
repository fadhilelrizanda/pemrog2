#include <stdio.h>

void kali_dua(int *a, int *b, int *c);
int main()
{
    int x, y, z;
    printf("Masukkan bilangan 1 : ");
    scanf("%d", &x);
    printf("Masukkan bilangan 2 : ");
    scanf("%d", &y);
    printf("Masukkan bilangan 3 : ");
    scanf("%d", &z);
    kali_dua(&x, &y, &z);
}
void kali_dua(int *a, int *b, int *c)
{
    printf("Bilangan pertama menjadi : %d \n", *a * 2);
    printf("Bilangan kedua menjadi : %d \n", *b * 2);
    printf("Bilangan ketiga menjadi : %d \n", *c * 2);
}
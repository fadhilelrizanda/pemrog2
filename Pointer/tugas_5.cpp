#include <stdio.h>
void watermark();
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
    void watermark();
}
void kali_dua(int *a, int *b, int *c)
{
    printf("Bilangan pertama menjadi : %d \n", *a * 2);
    printf("Bilangan kedua menjadi : %d \n", *b * 2);
    printf("Bilangan ketiga menjadi : %d \n", *c * 2);
}
void watermark()
{
    printf("---------------------------------------------------------------------\n");
    printf("-----------------------Fadhil Elrizanda------------------------------\n");
    printf("-----------------------1910952034------------------------------------\n");
    printf("-----------------------Pemrograman 2 TE C----------------------------\n");
}
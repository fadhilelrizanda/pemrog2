#include <stdio.h>
void watermark();
char *nama_bulan(int n);
int main()
{

    int bl;
    printf("Bulan (1..12) : ");
    scanf("%d", &bl);
    printf("%s \n", nama_bulan(bl));
    watermark();
}

char *nama_bulan(int n)
{
    char *bulan[] = {
        "Kode Bulan Salah",
        "Januari",
        "Februari",
        "Maret",
        "April",
        "Mei",
        "Juni",
        "Juli",
        "Agustus",
        "September",
        "Oktober",
        "November",
        "Desember"};
    return ((n < 1 or n > 12) ? bulan[0] : bulan[n]);
}
void watermark()
{
    printf("---------------------------------------------------------------------\n");
    printf("-----------------------Fadhil Elrizanda------------------------------\n");
    printf("-----------------------1910952034------------------------------------\n");
    printf("-----------------------Pemrograman 2 TE C----------------------------\n");
}
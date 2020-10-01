#include <stdio.h>

int misteri3(const char *s)
{
    int x = 0;
    for (; *s != '\0'; s++)
    {
        ++x;
    }
    return x;
}
void watermark();
int main()
{
    char string[80];
    char *ptr_string;
    ptr_string = &string[0];
    printf("Ketikkan sebuah string ");
    scanf("%s", &string);
    printf("Jumlah karakter = %d \n", misteri3(ptr_string));
    watermark();
}
void watermark()
{
    printf("---------------------------------------------------------------------\n");
    printf("-----------------------Fadhil Elrizanda------------------------------\n");
    printf("-----------------------1910952034------------------------------------\n");
    printf("-----------------------Pemrograman 2 TE C----------------------------\n");
}
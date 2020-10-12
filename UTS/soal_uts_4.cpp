#include <stdio.h>

int jumlah_index(const char *s);

int main()
{
    char string[80];
    int index_string;
    char *ptr_string;
    ptr_string = &string[0];
    printf("Masukkan String yang akan dibalik : ");
    scanf("%s", &string);
    printf("String adalah %s \n", ptr_string);

    index_string = jumlah_index(ptr_string);
    printf("Jumlah char pada string %d\n", index_string);
    for (; index_string >= 0; index_string--)
    {
        printf("%c", ptr_string[index_string - 1]);
    }
}
int jumlah_index(const char *s)
{
    int x = 0;
    for (; *s != '\0'; s++)
    {
        ++x;
    }
    return x;
}

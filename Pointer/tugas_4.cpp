#include <stdio.h>

int misteri3(const char *s)
{
    int x = 0;
    for (; *s != '\0'; s++)
    {
        ++x;
    }
    while (x >= 0)
    {
        printf("%s", *s);
        x--;
    }

    return x;
}

int main()
{
    char string[80];
    char *ptr_string;
    ptr_string = &string[0];
    printf("Ketikkan sebuah string ");
    scanf("%s", &string);
    printf("%d \n", misteri3(ptr_string));
}

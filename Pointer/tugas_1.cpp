#include <stdio.h>

int main()
{
    int aziz = 57082, defa, dewi, *ptr_defa;
    defa = aziz;
    dewi = defa + 1;
    printf("[a]. Nilai defa adalah : %d \n", defa);
    printf("[b]. Nilai dewi adalah : %d \n", dewi);
    aziz = 57082;
    ptr_defa = &aziz;
    dewi = *ptr_defa + 1;
    printf("[c]. Nilai defa adalah : %d \n", defa);
    printf("[d]. Nilai dewi adalah : %d \n", dewi);
}
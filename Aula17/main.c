#include <stdio.h>
#include <stdlib.h>

int main()
{

    //Operador Short para o tipo int
    //intervalo: -32.768 ate 32.767
    //%hi ou %d


    int y = 0;
    short int x = 32767;

    printf("Valor de x: %d bytes\n", x);

    x++;

    printf("Valor de x: %hi Bytes\n", x);
    return 0;
}

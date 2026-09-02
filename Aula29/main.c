#include <stdio.h>
#include <stdlib.h>

//operador unsigned
//trocar o 5d por %u
//limite para o tipo int: 2.147.483.647
//unsigned short int -> %hu ou %d
//unsigned long int -> %lu

int main()
{
    unsigned int x; // usando esse operador o limite se dobra, assi anulando os valorrs neativos

    unsigned short int y = 5500;

    printf("\n\t %d \n\n", y);

    return 0;
}

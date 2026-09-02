#include <stdio.h>
#include <stdlib.h>

//tamanho de um float na memoria

int main()
{
    float x = 3.1415;
    printf("Um float precisa de %d bytes de memoria.\n", sizeof x);

    return 0;
}

#include <stdio.h>
#include <stdlib.h>


//Operador ternario alinhado

int main()
{
    int a = -1;

    printf("Operador ternario\n");

    a < 0 ? printf("Numero negativo!") :
        a > 0 ? printf("Valor Positivo!\n") : printf("Valor igual a zero\n");



    return 0;
}

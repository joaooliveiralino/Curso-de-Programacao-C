#include <stdio.h>
#include <stdlib.h>

//Operador logico de Negação



int main()
{
    int a = 5;

    printf("Operador ternario\n");

    !(a < 0) ? printf("Numero negativo!") :
        a > 0 ? printf("Valor Positivo!\n") : printf("Valor igual a zero\n");



    return 0;
}

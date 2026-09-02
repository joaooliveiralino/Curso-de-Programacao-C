#include <stdio.h>
#include <stdlib.h>

//Condição ? Verdadeiro : Falso
//Operador ternario

int main()
{

    int a = 0;
    printf("\n -Digite um valor: ");
    scanf("%d", &a);

    printf("Operador Ternario\n");
    a < 0 ? printf("Negativo!") : printf("Positivo ou igual a zero!");


    return 0;
}
